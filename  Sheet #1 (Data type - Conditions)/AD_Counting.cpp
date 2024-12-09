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

    if (A > B) {
        cout << 0 << endl;
        // This line prints 0 if A is greater than B, as there are no integers in the range.
    } else {
        cout << (B - A + 1) << endl;
        // This line calculates and prints the number of integers in the range from A to B inclusive.
    }

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}