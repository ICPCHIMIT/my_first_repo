#include <iostream>
// This line includes the iostream library which is used for input and output operations.

#include <iomanip>
// This line includes the iomanip library which is used for input and output manipulations.

#include <cmath>
// This line includes the cmath library which provides mathematical functions.


using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

/**
 * @file W_Float_or_Int.cpp
 * @brief This program reads a number and determines if it is a float or an integer.
 * 
 * If the number is a float, it prints "float" followed by the integer part and the decimal part.
 * If the number is an integer, it prints "int" followed by the integer part.
 * 
 * Example usage:
 * @code
 * Input: 234.000
 * Output: int 234
 * 
 * Input: 534.958
 * Output: float 534 0.958
 * @endcode
 * 
 * @return Returns 0 indicating successful execution.
 */
int main()
// This is the main function where the execution of the program begins.

{
    double N;
    // This line declares a variable 'N' of type double to store the input number.

    cin >> N;
    // This line reads the input number from the standard input.

    int integer_part = static_cast<int>(N);
    // This line extracts the integer part of the number by casting it to an int.

    double decimal_part = N - integer_part;
    // This line calculates the decimal part of the number by subtracting the integer part from the original number.

    if (decimal_part == 0) {
        // This line checks if the decimal part is zero, indicating that the number is an integer.
        cout << "int " << integer_part << endl;
        // If the condition is true, this line prints "int" followed by the integer part.
    } else {
        // This line is executed if the number is a float.
        cout << "float " << integer_part << " " << fixed << setprecision(3) << decimal_part << endl;
        // This line prints "float" followed by the integer part and the decimal part with three decimal places.
    }

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.

/*

        double N;
    // This line declares a variable 'N' of type double to store the input number.

    cin >> N;
    // This line reads the input number from the standard input.

    if (floor(N) == N) {
        // This line checks if the number is an integer using the floor function.
        cout << "int " << static_cast<int>(N) << endl;
        // If the condition is true, this line prints "int" followed by the integer part.
    } else {
        // This line is executed if the number is a float.
        int integer_part = static_cast<int>(N);
        // This line extracts the integer part of the number by casting it to an int.

        double decimal_part = N - integer_part;
        // This line calculates the decimal part of the number by subtracting the integer part from the original number.

        cout << "float " << integer_part << " " << fixed << setprecision(3) << decimal_part << endl;
        // This line prints "float" followed by the integer part and the decimal part with three decimal places.
    }

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
*/
}