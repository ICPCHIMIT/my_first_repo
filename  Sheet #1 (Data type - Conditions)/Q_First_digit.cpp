#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

/**
 * @file Q_First_digit.cpp
 * @brief This program reads a number and determines if the first digit is even or odd.
 * 
 * The program extracts the first digit of the number and checks if it is even or odd.
 * 
 * Example usage:
 * @code
 * Input: 4569
 * Output: EVEN
 * 
 * Input: 3569
 * Output: ODD
 * @endcode
 * 
 * @return Returns 0 indicating successful execution.
 */
int main()
// This is the main function where the execution of the program begins.

{
    int X;
    // This line declares a variable 'X' of type int to store the input number.

    cin >> X;
    // This line reads the input number from the standard input.

    int first_digit = X / 1000;
    // This line extracts the first digit of the number by dividing it by 1000.

    if (first_digit % 2 == 0) {
        // This line checks if the first digit is even by using the modulus operator.
        cout << "EVEN" << endl;
        // If the condition is true, this line prints "EVEN".
    } else {
        // This line is executed if the first digit is not even.
        cout << "ODD" << endl;
        // If the condition is false, this line prints "ODD".
    }

    // if (first_digit & 1) {
    //     // This line checks if the first digit is odd by using the bitwise AND operator.
    //     cout << "ODD" << endl;
    //     // If the condition is true, this line prints "ODD".
    // } else {
    //     // This line is executed if the first digit is not odd.
    //     cout << "EVEN" << endl;
    //     // If the condition is false, this line prints "EVEN".
    // }

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}