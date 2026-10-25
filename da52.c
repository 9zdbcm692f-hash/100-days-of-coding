Question 1

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, x;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> x;

    int low = 0, high = n - 1;
    int ans = -1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] >= x) {
            ans = mid;
            high = mid - 1;  // Search for the first occurrence
        } else {
            low = mid + 1;
        }
    }

    cout << ans << endl;

    return 0;
}
