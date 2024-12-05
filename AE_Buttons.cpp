#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

int main() 
// This is the main function where the execution of the program begins.
{
    int A, B;
    // These lines declare variables to store the input values for 'A' and 'B'.

    cin >> A >> B;
    // This line reads the input values for 'A' and 'B' from the standard input.

    int max_coins = max(A + (A - 1), B + (B - 1));
    // This line calculates the maximum coins by pressing the larger button twice.

    max_coins = max(max_coins, A + B);
    // This line calculates the maximum coins by pressing both buttons once.

    cout << max_coins << endl;
    // This line prints the maximum number of coins that can be obtained.

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}