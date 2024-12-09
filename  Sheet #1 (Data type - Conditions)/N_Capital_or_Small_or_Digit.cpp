#include <iostream>
// This line includes the iostream library which is used for input and output operations.

#include <cctype>
// This line includes the cctype library which provides functions for character classification.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

/**
 * @file N_Capital_or_Small_or_Digit.cpp
 * @brief This program reads a character and determines if it is a digit, a capital letter, or a small letter.
 * 
 * The program uses built-in functions to classify the character.
 * 
 * Example usage:
 * @code
 * Input: A
 * Output: ALPHA
 *         IS CAPITAL
 * 
 * Input: 9
 * Output: IS DIGIT
 * 
 * Input: a
 * Output: ALPHA
 *         IS SMALL
 * @endcode
 * 
 * @return Returns 0 indicating successful execution.
 */
int main()
// This is the main function where the execution of the program begins.

{
    char X;
    // This line declares a variable 'X' of type char to store the input character.

    cin >> X;
    // This line reads the input character from the standard input.

    if (isdigit(X)) {
        // This line checks if 'X' is a digit using the built-in isdigit function.
        cout << "IS DIGIT" << endl;
        // If the condition is true, this line prints "IS DIGIT".
    } else if (isalpha(X)) {
        // This line checks if 'X' is an alphabetic character using the built-in isalpha function.
        cout << "ALPHA" << endl;
        // If the condition is true, this line prints "ALPHA".

        if (isupper(X)) {
            // This line checks if 'X' is a capital letter using the built-in isupper function.
            cout << "IS CAPITAL" << endl;
            // If the condition is true, this line prints "IS CAPITAL".
        } else {
            // This line is executed if 'X' is not a capital letter.
            cout << "IS SMALL" << endl;
            // If the condition is false, this line prints "IS SMALL".
        }
    }

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.

/*
        char X;
    // This line declares a variable 'X' of type char to store the input character.

    cin >> X;
    // This line reads the input character from the standard input.

    if (X >= '0' && X <= '9') {
        // This line checks if 'X' is a digit by comparing its ASCII value.
        cout << "IS DIGIT" << endl;
        // If the condition is true, this line prints "IS DIGIT".
    } else if ((X >= 'A' && X <= 'Z') || (X >= 'a' && X <= 'z')) {
        // This line checks if 'X' is an alphabetic character by comparing its ASCII value.
        cout << "ALPHA" << endl;
        // If the condition is true, this line prints "ALPHA".

        if (X >= 'A' && X <= 'Z') {
            // This line checks if 'X' is a capital letter by comparing its ASCII value.
            cout << "IS CAPITAL" << endl;
            // If the condition is true, this line prints "IS CAPITAL".
        } else {
            // This line is executed if 'X' is not a capital letter.
            cout << "IS SMALL" << endl;
            // If the condition is false, this line prints "IS SMALL".
        }
    }

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
*/
}