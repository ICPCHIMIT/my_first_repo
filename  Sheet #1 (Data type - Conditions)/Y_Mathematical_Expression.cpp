#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

/**
 * @file Y_Mathematical_Expression.cpp
 * @brief This program reads a mathematical expression and determines if it is correct.
 * 
 * If the expression is correct, it prints "Yes". Otherwise, it prints the correct result of the expression.
 * 
 * Example usage:
 * @code
 * Input: 5 + 10 = 15
 * Output: Yes
 * 
 * Input: 3 - 1 = 2
 * Output: Yes
 * 
 * Input: 2 * 10 = 19
 * Output: 20
 * @endcode
 * 
 * @return Returns 0 indicating successful execution.
 */
int main()
// This is the main function where the execution of the program begins.

{
    int A, B, C;
    char S, Q;
    // These lines declare variables to store the two integers 'A' and 'B', the result 'C', the operator 'S', and the equal sign 'Q'.

    cin >> A >> S >> B >> Q >> C;
    // This line reads the input values for 'A', 'S', 'B', 'Q', and 'C' from the standard input.

    int result;
    // This line declares a variable 'result' to store the result of the expression.

    if (S == '+') {
        // This line checks if the operator is '+'.
        result = A + B;
        // This line calculates the sum of 'A' and 'B'.
    } else if (S == '-') {
        // This line checks if the operator is '-'.
        result = A - B;
        // This line calculates the difference between 'A' and 'B'.
    } else if (S == '*') {
        // This line checks if the operator is '*'.
        result = A * B;
        // This line calculates the product of 'A' and 'B'.
    }

    if (result == C) {
        // This line checks if the calculated result is equal to 'C'.
        cout << "Yes" << endl;
        // If the condition is true, this line prints "Yes".
    } else {
        // This line is executed if the calculated result is not equal to 'C'.
        cout << result << endl;
        // If the condition is true, this line prints the correct result of the expression.
    }

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}