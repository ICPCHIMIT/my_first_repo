#include <iostream>
#include <algorithm>
// This line includes the algorithm library which provides the min and max functions.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

/**
 * @file L_Max_and_Min.cpp
 * @brief This program reads three integers and prints the minimum and maximum numbers.
 * 
 * The program uses built-in functions to find the minimum and maximum of the three numbers.
 * 
 * Example usage:
 * @code
 * Input: 1 2 3
 * Output: 1 3
 * 
 * Input: -1 -2 -3
 * Output: -3 -1
 * 
 * Input: 10 20 -5
 * Output: -5 20
 * @endcode
 * 
 * @return Returns 0 indicating successful execution.
 */
int main()
// This is the main function where the execution of the program begins.

{
    int A, B, C;
    // This line declares three variables 'A', 'B', and 'C' of type int to store the input numbers.

    cin >> A >> B >> C;
    // This line reads the input values for the variables 'A', 'B', and 'C' from the standard input.

    int minimum = min({A, B, C});
    // This line uses the built-in min function to find the minimum of the three numbers.

    int maximum = max({A, B, C});
    // This line uses the built-in max function to find the maximum of the three numbers.

    cout << minimum << " " << maximum << endl;
    // This line prints the minimum and maximum numbers separated by a space.

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.


// // Version 2: Using If-Else Statements


//     int A, B, C;
//     // This line declares three variables 'A', 'B', and 'C' of type int to store the input numbers.

//     cin >> A >> B >> C;
//     // This line reads the input values for the variables 'A', 'B', and 'C' from the standard input.

//     int minimum = A;
//     // This line initializes the minimum variable with the value of 'A'.

//     if (B < minimum) {
//         // This line checks if 'B' is less than the current minimum.
//         minimum = B;
//         // If the condition is true, this line updates the minimum to 'B'.
//     }

//     if (C < minimum) {
//         // This line checks if 'C' is less than the current minimum.
//         minimum = C;
//         // If the condition is true, this line updates the minimum to 'C'.
//     }

//     int maximum = A;
//     // This line initializes the maximum variable with the value of 'A'.

//     if (B > maximum) {
//         // This line checks if 'B' is greater than the current maximum.
//         maximum = B;
//         // If the condition is true, this line updates the maximum to 'B'.
//     }

//     if (C > maximum) {
//         // This line checks if 'C' is greater than the current maximum.
//         maximum = C;
//         // If the condition is true, this line updates the maximum to 'C'.
//     }

//     cout << minimum << " " << maximum << endl;
//     // This line prints the minimum and maximum numbers separated by a space.

//     return 0;
//     // This line returns 0 from the main function, indicating that the program ended successfully.

}
