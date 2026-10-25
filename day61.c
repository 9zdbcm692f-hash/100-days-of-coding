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

        // Store indices of negative elements
        if (arr[i] < 0) {
            dq.push_back(i);
        }

        // Remove negative elements outside the window
        while (!dq.empty() && dq.front() <= i - k) {
            dq.pop_front();
        }

        // Print the first negative for each complete window
        if (i >= k - 1) {
            if (!dq.empty()) {
                cout << arr[dq.front()] << " ";
            } else {
                cout << 0 << " ";
            }
        }
    }

    cout << endl;

    return 0;
}
