#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

/**
 * @file I_Welcome_for_you_with_Conditions.cpp
 * @brief This program reads two integers from the standard input and compares them.
 * 
 * The program checks if the first integer is greater than or equal to the second integer.
 * If the condition is true, it prints "Yes". Otherwise, it prints "No".
 * 
 * Example usage:
 * @code
 * Input: 5 3
 * Output: Yes
 * 
 * Input: 2 4
 * Output: No
 * @endcode
 * 
 * @return Returns 0 indicating successful execution.
 */
int main()
// This is the main function where the execution of the program begins.

{
    int A, B;
    // This line declares two variables 'A' and 'B' of type int to store the input numbers.

    cin >> A >> B;
    // This line reads the input values for the variables 'A' and 'B' from the standard input.


    // Comparison operators in C++:
    // >  : greater than
    // Example: (5 > 3) is true
    // >= : greater than or equal to
    // Example: (5 >= 5) is true
    // <  : less than
    // Example: (3 < 5) is true
    // <= : less than or equal to
    // Example: (3 <= 5) is true
    // == : equal to
    // Example: (5 == 5) is true
    // != : not equal to
    // Example: (5 != 3) is true
    if (A >= B) {
        // This line checks if 'A' is greater than or equal to 'B'.
        cout << "Yes" << "\n";
        // If the condition is true, this line prints "Yes".
    } else {
        // This line is executed if 'A' is not greater than or equal to 'B'.
        cout << "No" << "\n";
        // If the condition is false, this line prints "No".
    }

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}