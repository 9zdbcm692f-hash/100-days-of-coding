Question 1

#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> nums(n);
    vector<int> answer(n, 1);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    // Calculate prefix products
    int prefix = 1;

    for (int i = 0; i < n; i++) {
        answer[i] = prefix;
        prefix *= nums[i];
    }

    // Multiply by suffix products
    int suffix = 1;

    for (int i = n - 1; i >= 0; i--) {
        answer[i] *= suffix;
        suffix *= nums[i];
    }

    for (int i = 0; i < n; i++) {
        cout << answer[i] << " ";
    }

    cout << endl;

    return 0;
}
