#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int X;
    cin >> X; // Read the input number

    bool isPrime = true;
    if (X <= 1) {
        isPrime = false; // Numbers less than or equal to 1 are not prime
    } else {
        for (long long i = 2; i * i <= X; ++i) {
            if (X % i == 0) {
                isPrime = false; // If X is divisible by any number other than 1 and itself, it is not prime
                break;
            }
        }
    }

    if (isPrime) {
        cout << "YES" << endl; // Print "YES" if the number is prime
    } else {
        cout << "NO" << endl; // Print "NO" if the number is not prime
    }

    return 0;
}