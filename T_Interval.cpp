#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

/**
 * @file T_Interval.cpp
 * @brief This program reads a number and determines which interval it belongs to.
 * 
 * The program checks if the number belongs to one of the specified intervals or if it is out of the intervals.
 * 
 * Example usage:
 * @code
 * Input: 25.1
 * Output: Interval (25,50]
 * 
 * Input: 25.0
 * Output: Interval [0,25]
 * 
 * Input: 100.0
 * Output: Interval (75,100]
 * 
 * Input: -25.2
 * Output: Out of Intervals
 * @endcode
 * 
 * @return Returns 0 indicating successful execution.
 */
int main()
// This is the main function where the execution of the program begins.

{
    double X;
    // This line declares a variable 'X' of type double to store the input number.

    cin >> X;
    // This line reads the input number from the standard input.

    if (X >= 0 && X <= 25) {
        // This line checks if 'X' is in the interval [0,25].
        cout << "Interval [0,25]" << endl;
        // If the condition is true, this line prints "Interval [0,25]".
    } else if (X > 25 && X <= 50) {
        // This line checks if 'X' is in the interval (25,50].
        cout << "Interval (25,50]" << endl;
        // If the condition is true, this line prints "Interval (25,50]".
    } else if (X > 50 && X <= 75) {
        // This line checks if 'X' is in the interval (50,75].
        cout << "Interval (50,75]" << endl;
        // If the condition is true, this line prints "Interval (50,75]".
    } else if (X > 75 && X <= 100) {
        // This line checks if 'X' is in the interval (75,100].
        cout << "Interval (75,100]" << endl;
        // If the condition is true, this line prints "Interval (75,100]".
    } else {
        // This line is executed if 'X' does not belong to any of the specified intervals.
        cout << "Out of Intervals" << endl;
        // If the condition is true, this line prints "Out of Intervals".
    }

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}