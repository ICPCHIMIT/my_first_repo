#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

/**
 * @file Z_Two_Intervals.cpp
 * @brief This program reads the boundaries of two intervals and determines their intersection.
 * 
 * If there is an intersection, it prints the boundaries of the intersection.
 * If there is no intersection, it prints -1.
 * 
 * Example usage:
 * @code
 * Input: 1 15 5 27
 * Output: 5 15
 * 
 * Input: 2 5 6 12
 * Output: -1
 * @endcode
 * 
 * @return Returns 0 indicating successful execution.
 */
int main()
// This is the main function where the execution of the program begins.

{
    int l1, r1, l2, r2;
    // These lines declare variables to store the boundaries of the two intervals.

    cin >> l1 >> r1 >> l2 >> r2;
    // This line reads the input values for the boundaries of the two intervals from the standard input.

    int start = max(l1, l2);
    // This line calculates the starting boundary of the intersection by taking the maximum of the two starting boundaries.

    int end = min(r1, r2);
    // This line calculates the ending boundary of the intersection by taking the minimum of the two ending boundaries.

    if (start <= end) {
        // This line checks if there is an intersection between the two intervals.
        cout << start << " " << end << endl;
        // If the condition is true, this line prints the boundaries of the intersection.
    } else {
        // This line is executed if there is no intersection between the two intervals.
        cout << "-1" << endl;
        // If the condition is true, this line prints -1.
    }

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}