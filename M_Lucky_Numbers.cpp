#include <iostream>
using namespace std;

bool isLucky(int num) {
    while (num > 0) {
        int digit = num % 10;
        if (digit != 4 && digit != 7) {
            return false;
        }
        num /= 10;
    }
    return true;
}

int main() {
    int A, B;
    cin >> A >> B;

    bool foundLucky = false;
    for (int i = A; i <= B; ++i) {
        if (isLucky(i)) {
            cout << i << " ";
            foundLucky = true;
        }
    }

    if (!foundLucky) {
        cout << -1;
    }

    cout << endl;
    return 0;
}