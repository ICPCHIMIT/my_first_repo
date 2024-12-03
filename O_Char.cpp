#include <iostream>
// This line includes the iostream library which is used for input and output operations.

#include <cctype>
// This line includes the cctype library which provides functions for character classification and conversion.


using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

/**
 * @file O_Char.cpp
 * @brief This program reads a character and converts it from lowercase to uppercase or from uppercase to lowercase.
 * 
 * The program uses ASCII values to perform the conversion.
 * 
 * Example usage:
 * @code
 * Input: a
 * Output: A
 * 
 * Input: A
 * Output: a
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

    // The difference between the ASCII values of 'a' and 'A' is 32.
    // 'a' has an ASCII value of 97 and 'A' has an ASCII value of 65.
    // To convert a lowercase letter to uppercase, we subtract 32 from its ASCII value.
    // To convert an uppercase letter to lowercase, we add 32 to its ASCII value.

    if (X >= 'a' && X <= 'z') {
        // This line checks if 'X' is a lowercase letter by comparing its ASCII value.
        X = X - 32;
        // This line converts the lowercase letter to uppercase by subtracting 32 from its ASCII value.
    } else if (X >= 'A' && X <= 'Z') {
        // This line checks if 'X' is an uppercase letter by comparing its ASCII value.
        X = X + 32;
        // This line converts the uppercase letter to lowercase by adding 32 to its ASCII value.
    }

    cout << X << endl;
    // This line prints the converted character.

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.

/*
    char X;
    // This line declares a variable 'X' of type char to store the input character.

    cin >> X;
    // This line reads the input character from the standard input.

    if (islower(X)) {
        // This line checks if 'X' is a lowercase letter using the built-in islower function.
        X = toupper(X);
        // This line converts the lowercase letter to uppercase using the built-in toupper function.
    } else if (isupper(X)) {
        // This line checks if 'X' is an uppercase letter using the built-in isupper function.
        X = tolower(X);
        // This line converts the uppercase letter to lowercase using the built-in tolower function.
    }

    cout << X << endl;
    // This line prints the converted character.

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.


*/



}