#include <iostream>
// This line includes the iostream library which is used for input and output operations.

#include <string>
// This line includes the string library which is used for string operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

/**
 * @file M_The_Brothers.cpp
 * @brief This program reads the names of two persons and determines if they are brothers.
 * 
 * The program prints "ARE Brothers" if the two persons share the same second name.
 * Otherwise, it prints "NOT".
 * 
 * Example usage:
 * @code
 * Input: bassam ramadan
 *        ahmed ramadan
 * Output: ARE Brothers
 * 
 * Input: ali salah
 *        ayman salah
 * Output: ARE Brothers
 * 
 * Input: ali kamel
 *        ali salah
 * Output: NOT
 * @endcode
 * 
 * @return Returns 0 indicating successful execution.
 */
int main()
// This is the main function where the execution of the program begins.

{
    string F1, S1, F2, S2;
    // These lines declare four string variables to store the first and second names of the two persons.

    cin >> F1 >> S1;
    // This line reads the first and second name of the first person from the standard input.

    cin >> F2 >> S2;
    // This line reads the first and second name of the second person from the standard input.

    if (S1 == S2) {
        // This line checks if the second names of the two persons are the same.
        cout << "ARE Brothers" << endl;
        // If the condition is true, this line prints "ARE Brothers".
    } else {
        // This line is executed if the second names of the two persons are not the same.
        cout << "NOT" << endl;
        // If the condition is false, this line prints "NOT".
    }

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}