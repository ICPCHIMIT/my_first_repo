#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

/**
 * @file X_Comparison.cpp
 * @brief This program reads two integers and a comparison symbol, then determines if the comparison is correct.
 * 
 * Example usage:
 * @code
 * Input: 5 > 4
 * Output: Right
 * 
 * Input: 9 < 1
 * Output: Wrong
 * 
 * Input: 4 = 4
 * Output: Right
 * @endcode
 * 
 * @return Returns 0 indicating successful execution.
 */
int main()
// This is the main function where the execution of the program begins.

{
    int A, B;
    char S;
    // These lines declare variables to store the two integers 'A' and 'B', and the comparison symbol 'S'.

    cin >> A >> S >> B;
    // This line reads the input values for 'A', 'S', and 'B' from the standard input.

    bool result;
    // This line declares a boolean variable 'result' to store the result of the comparison.

    if (S == '<') {
        // This line checks if the comparison symbol is '<'.
        result = (A < B);
        // This line sets 'result' to true if 'A' is less than 'B', otherwise it sets 'result' to false.
    } else if (S == '>') {
        // This line checks if the comparison symbol is '>'.
        result = (A > B);
        // This line sets 'result' to true if 'A' is greater than 'B', otherwise it sets 'result' to false.
    } else if (S == '=') {
        // This line checks if the comparison symbol is '='.
        result = (A == B);
        // This line sets 'result' to true if 'A' is equal to 'B', otherwise it sets 'result' to false.
    }

    if (result) {
        // This line checks if the comparison result is true.
        cout << "Right" << endl;
        // If the condition is true, this line prints "Right".
    } else {
        // This line is executed if the comparison result is false.
        cout << "Wrong" << endl;
        // If the condition is true, this line prints "Wrong".
    }

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}