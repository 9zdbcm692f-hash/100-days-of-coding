Question 1

#include <iostream>
#include <vector>
#include <deque>
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

    deque<int> dq;

    for (int i = 0; i < n; i++) {

        // Remove indices outside the current window
        while (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        // Remove elements smaller than or equal to arr[i]
        while (!dq.empty() && arr[dq.back()] <= arr[i]) {
            dq.pop_back();
        }

        dq.push_back(i);

        // Print the maximum for each complete window
        if (i >= k - 1) {
            cout << arr[dq.front()] << " ";
        }
    }

    cout << endl;

    return 0;
}
