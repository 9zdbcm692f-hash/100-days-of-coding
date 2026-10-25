Question 1

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int totalSum = n * (n + 1) / 2;
    int x = 1;

    while (x <= n) {
        int leftSum = x * (x + 1) / 2;

        if (leftSum == totalSum - leftSum + x) {
            cout << x << endl;
            return 0;
        }

        x++;
    }

    cout << -1 << endl;

    return 0;
}
