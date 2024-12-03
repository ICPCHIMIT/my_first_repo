#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

/**
 * @file P_Calculator.cpp
 * @brief This program reads a mathematical expression and computes the result.
 * 
 * The program supports addition, subtraction, multiplication, and division operations.
 * 
 * Example usage:
 * @code
 * Input: 7+54
 * Output: 61
 * 
 * Input: 17*10
 * Output: 170
 * @endcode
 * 
 * @return Returns 0 indicating successful execution.
 */
int main()
// This is the main function where the execution of the program begins.

{
    int A, B;
    char S;
    // These lines declare variables to store the operands 'A' and 'B' and the operator 'S'.

    cin >> A >> S >> B;
    // This line reads the input values for 'A', 'S', and 'B' from the standard input.

    int result;
    // This line declares a variable to store the result of the computation.

    switch (S) {
        // This switch statement checks the value of the operator 'S' and performs the corresponding operation.
        case '+':
            result = A + B;
            // If 'S' is '+', this line computes the sum of 'A' and 'B'.
            break;
        case '-':
            result = A - B;
            // If 'S' is '-', this line computes the difference between 'A' and 'B'.
            break;
        case '*':
            result = A * B;
            // If 'S' is '*', this line computes the product of 'A' and 'B'.
            break;
        case '/':
            result = A / B;
            // If 'S' is '/', this line computes the integer division of 'A' by 'B'.
            break;
        default:
            cout << "Invalid operator" << endl;
            // If 'S' is not one of the expected operators, this line prints an error message.
            return 1;
            // This line returns 1 from the main function, indicating an error.
    }

    cout << result << endl;
    // This line prints the result of the computation.

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}