#include <iostream>
using namespace std;

// Function to check if a number is prime
bool isPrime(int num) {
    if (num <= 1) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

int main() {
    int N;
    cin >> N; // Read the input number

    // Iterate through each number from 2 to N
    for (int i = 2; i <= N; ++i) {
        if (isPrime(i)) {
            cout << i << " "; // Print the number if it is prime
        }
    }
    cout << endl;

    return 0;
}