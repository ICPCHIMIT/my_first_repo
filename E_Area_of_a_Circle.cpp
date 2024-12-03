#include <cmath>
// This line includes the cmath library which provides mathematical functions and constants.

#include <iostream>
// This line includes the iostream library which is used for input and output operations.

#include <iomanip>
// This line includes the iomanip library which provides facilities to manipulate the output format.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

/**
 * @brief The main function where the execution of the program begins.
 *
 * This program calculates the area of a circle given its radius. The radius is read from the standard input,
 * and the area is computed using the formula Area = π * R^2, where π (pi) is a mathematical constant approximately
 * equal to 3.141592653. The value of π is crucial in various fields of mathematics and science, especially in
 * geometry, where it represents the ratio of a circle's circumference to its diameter.
 *
 * The program uses a fixed value for π (3.141592653) to ensure precision in the calculation. The area is then
 * printed to the standard output with a precision of 9 digits after the decimal point, which provides a high level
 * of accuracy for most practical purposes.
 *
 * The steps involved in the program are:
 * 1. Declare a variable 'R' of type double to store the radius of the circle.
 * 2. Read the input value for the radius from the standard input.
 * 3. Calculate the area of the circle using the formula Area = π * R^2.
 * 4. Set the output format to fixed-point notation and specify that 9 digits should be printed after the decimal point.
 * 5. Print the calculated area.
 * 6. Return 0 from the main function, indicating that the program ended successfully.
 *
 * Additional Information:
 * - The circumference of a circle can be calculated using the formula Circumference = 2 * π * R.
 * - The diameter of a circle is twice the radius, i.e., Diameter = 2 * R.
 *
 * Examples:
 * - If the radius R is 2.00, the area is calculated as 3.141592653 * 2.00 * 2.00 = 12.566370612.
 * - If the radius R is 5.00, the area is calculated as 3.141592653 * 5.00 * 5.00 = 78.539816325.
 */
int main()
// This is the main function where the execution of the program begins.

{
    double R;
    // This line declares a variable 'R' of type double to store the radius of the circle.

    cin >> R;
    // This line reads the input value for the variable 'R' from the standard input.

    // double area = M_PI * R * R;
    // This line calculates the area of the circle using the formula Area = π * R^2 and stores it in the variable 'area'.
    // Here, M_PI is a constant defined in the <cmath> library that represents the value of π (pi).
    double area = 3.141592653 * R * R;
    cout << fixed << setprecision(9);
    // This line sets the output format to fixed-point notation and specifies that 9 digits should be printed after the decimal point.

    cout << area << "\n";
    // This line prints the calculated area with 9 digits after the decimal point.

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}