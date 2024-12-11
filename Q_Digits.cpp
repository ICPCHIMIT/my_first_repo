#include <iostream>
using namespace std;

void printDigits(int N) {
    if (N == 0) {
        cout << "0";
    } else {
        bool first = true;
        while (N > 0) {
            if (!first) {
                cout << " ";
            }
            cout << N % 10;
            N /= 10;
            first = false;
        }
    }
    cout << endl;
}

int main() {
    int T;
    cin >> T; // Read the number of test cases

    while (T--) {
        int N;
        cin >> N; // Read the number for each test case
        printDigits(N);
    }

    return 0;
}