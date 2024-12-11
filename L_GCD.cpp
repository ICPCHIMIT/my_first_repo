#include <iostream>
#include <algorithm> // Include the algorithm library for the __gcd function
using namespace std;

int main() {
    int A, B;
    cin >> A >> B; // Read the input numbers

    // First version using a for loop
    // int gcd = 1; // Initialize the GCD to 1
    // for (int i = 1; i <= min(A, B); ++i) {
    //     if (A % i == 0 && B % i == 0) {
    //         gcd = i; // Update the GCD if i is a common divisor of A and B
    //     }
    // }
    // cout << gcd << endl; // Print the GCD of A and B

    // Second version using the __gcd function
    cout << __gcd(A, B) << endl; // Print the GCD of A and B using the __gcd function

    return 0;
}