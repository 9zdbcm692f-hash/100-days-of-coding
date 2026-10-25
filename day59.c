Question 1

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n;

    vector<int> arr(n);

    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cin >> k;

    if (k <= 0 || k > n) {
        cout << -1 << endl;
        return 0;
    }

    int sum = 0;

    // Calculate the sum of the first window
    for (int i = 0; i < k; i++) {
        sum += arr[i];
    }

    int maxSum = sum;

    // Slide the window across the array
    for (int i = k; i < n; i++) {
        sum = sum + arr[i] - arr[i - k];

        if (sum > maxSum) {
            maxSum = sum;
        }
    }

    cout << maxSum << endl;

    return 0;
}
