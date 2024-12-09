#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

/**
 * @file R_Coordinates_of_a_Point.cpp
 * @brief This program reads the coordinates of a point and determines its location in the 2D plane.
 * 
 * The program checks if the point is at the origin, on the X axis, on the Y axis, or in one of the four quadrants.
 * 
 * Example usage:
 * @code
 * Input: 4.5 -2.2
 * Output: Q4
 * 
 * Input: 0.1 0.1
 * Output: Q1
 * @endcode
 * 
 * @return Returns 0 indicating successful execution.
 */
int main()
// This is the main function where the execution of the program begins.

{
    double X, Y;
    // This line declares two variables 'X' and 'Y' of type double to store the coordinates of the point.

    cin >> X >> Y;
    // This line reads the input values for 'X' and 'Y' from the standard input.

    if (X == 0 && Y == 0) {
        // This line checks if the point is at the origin.
        // Example: (0, 0)
        cout << "Origem" << endl;
        // If the condition is true, this line prints "Origem".
    } else if (X == 0) {
        // This line checks if the point is on the Y axis.
        // Example: (0, 5)
        cout << "Eixo Y" << endl;
        // If the condition is true, this line prints "Eixo Y".
    } else if (Y == 0) {
        // This line checks if the point is on the X axis.
        // Example: (5, 0)
        cout << "Eixo X" << endl;
        // If the condition is true, this line prints "Eixo X".
    } else if (X > 0 && Y > 0) {
        // This line checks if the point is in the first quadrant.
        // Example: (4.5, 2.2)
        cout << "Q1" << endl;
        // If the condition is true, this line prints "Q1".
    } else if (X < 0 && Y > 0) {
        // This line checks if the point is in the second quadrant.
        // Example: (-4.5, 2.2)
        cout << "Q2" << endl;
        // If the condition is true, this line prints "Q2".
    } else if (X < 0 && Y < 0) {
        // This line checks if the point is in the third quadrant.
        // Example: (-4.5, -2.2)
        cout << "Q3" << endl;
        // If the condition is true, this line prints "Q3".
    } else if (X > 0 && Y < 0) {
        // This line checks if the point is in the fourth quadrant.
        // Example: (4.5, -2.2)
        cout << "Q4" << endl;
        // If the condition is true, this line prints "Q4".
    }

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}