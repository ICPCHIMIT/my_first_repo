#include <iostream>
// This line includes the iostream library which is used for input and output operations.

#include <cmath>
// This line includes the cmath library which provides mathematical functions such as floor, ceil, and round.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

/**
 * @brief The main function where the execution of the program begins.
 *
 * This program reads two numbers from the standard input, calculates the floor, ceil, and round of their division,
 * and prints the results. The floor, ceil, and round functions are used to perform these calculations.
 *
 * Floor: The floor function returns the greatest integer less than or equal to a given number.
 * Ceil: The ceil function returns the smallest integer greater than or equal to a given number.
 * Round: The round function returns the closest integer to a given number.
 *
 * @return int Returns 0 to indicate that the program ended successfully.
 */
int main()
// This is the main function where the execution of the program begins.

{
    double A, B;
    // This line declares two variables 'A' and 'B' of type double to store the input numbers.

    cin >> A >> B;
    // This line reads the input values for the variables 'A' and 'B' from the standard input.

    double result = A / B;
    // This line calculates the result of the division A / B and stores it in the variable 'result'.

    cout << "floor " << A << " / " << B << " = " << floor(result) << "\n";
    // This line prints the floor of the division result in the format "floor A / B = Floor result".

    cout << "ceil " << A << " / " << B << " = " << ceil(result) << "\n";
    // This line prints the ceil of the division result in the format "ceil A / B = Ceil result".

    cout << "round " << A << " / " << B << " = " << round(result) << "\n";
    // This line prints the round of the division result in the format "round A / B = Round result".

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}
/**
 * @brief Custom implementation of the floor function.
 *
 * The floor function returns the greatest integer less than or equal to a given number.
 *
 * @param x The input number.
 * @return The greatest integer less than or equal to x.
 */
int custom_floor(double x) {
    int intPart = static_cast<int>(x);
    return (x < intPart) ? (intPart - 1) : intPart;
}

// Example usage of custom_floor
// Steps:
// 1. Input: 3.7
// 2. intPart = static_cast<int>(3.7) -> 3
// 3. Since 3.7 is not less than 3, return 3
// Output: 3

/**
 * @brief Custom implementation of the ceil function.
 *
 * The ceil function returns the smallest integer greater than or equal to a given number.
 *
 * @param x The input number.
 * @return The smallest integer greater than or equal to x.
 */
int custom_ceil(double x) {
    int intPart = static_cast<int>(x);
    return (x > intPart) ? (intPart + 1) : intPart;
}

// Example usage of custom_ceil
// Steps:
// 1. Input: 3.2
// 2. intPart = static_cast<int>(3.2) -> 3
// 3. Since 3.2 is greater than 3, return 3 + 1 -> 4
// Output: 4

/**
 * @brief Custom implementation of the round function.
 *
 * The round function returns the closest integer to a given number.
 *
 * @param x The input number.
 * @return The closest integer to x.
 */
int custom_round(double x) {
    return (x > 0.0) ? static_cast<int>(x + 0.5) : static_cast<int>(x - 0.5);
}

// Example usage of custom_round
// Steps:
// 1. Input: 3.6
// 2. Since 3.6 is greater than 0.0, return static_cast<int>(3.6 + 0.5) -> static_cast<int>(4.1) -> 4
// Output: 4