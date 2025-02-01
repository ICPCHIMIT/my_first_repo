#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Read the input number

    // Iterate through each number from 1 to N
    for (int i = 1; i <= N; ++i) {
        if (N % i == 0) {
            cout << i << endl; // Print the divisor
        }
    }

    return 0;
}