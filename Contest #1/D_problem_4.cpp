// Include the input/output stream library
#include <iostream>

// Use the standard namespace
using namespace std;

/*
Mathematical Background:
The sum of first N natural numbers can be calculated using the formula: N * (N + 1) / 2
This is known as the Gauss formula, discovered by Carl Friedrich Gauss.

Proof:
Let S = 1 + 2 + 3 + ... + N
Also S = N + (N-1) + (N-2) + ... + 1
Adding these equations:
2S = N(N + 1)
Therefore, S = N(N + 1)/2

Time Complexity: O(1) - much faster than using a loop which would be O(N)
*/

// Main function - program entry point
int main() {
    // Declare variable N for number of children
    int N;
    
    // Read the number of children from standard input
    cin >> N;
    
    // Calculate total candies using the Gauss formula: sum = N * (N + 1) / 2
    // Using long long to handle large numbers (prevents overflow)
    // Example: for N=5, sum = 5 * 6 / 2 = 15 (which is 1+2+3+4+5)
    long long total = (long long)N * (N + 1) / 2;
    
    // Output the total number of candies needed
    cout << total << endl;
    
    // Return 0 to indicate successful program completion
    return 0;
}
