#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

int main() 
// This is the main function where the execution of the program begins.
{
    int A, B, C;
    // These lines declare variables to store the input values for 'A', 'B', and 'C'.

    cin >> A >> B >> C;
    // This line reads the input values for 'A', 'B', and 'C' from the standard input.

    if (A * A + B * B < C * C) {
        cout << "Yes" << endl;
        // This line prints "Yes" if A^2 + B^2 is less than C^2.
    } else {
        cout << "No" << endl;
        // This line prints "No" if A^2 + B^2 is not less than C^2.
    }

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}