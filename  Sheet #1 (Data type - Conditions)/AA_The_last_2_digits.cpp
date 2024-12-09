#include <iostream>
// This line includes the iostream library which is used for input and output operations.

#include <iomanip>
// This line includes the iomanip library which is used for manipulating the input and output.

#include <cmath>
// This line includes the cmath library which is used for mathematical functions.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

/**
 * @file AA_The_last_2_digits.cpp
 * @brief This program reads four numbers and prints the last two digits of their multiplication.
 * 
 * Example usage:
 * @code
 * Input: 5 7 2 4
 * Output: 80
 * 
 * Input: 3 9 9 9
 * Output: 87
 * @endcode
 * 
 * @return Returns 0 indicating successful execution.
 */
int main()
// This is the main function where the execution of the program begins.

{
    int n, x, y, z;
    // These lines declare variables to store the four input numbers.

    cin >> n >> x >> y >> z;
    // This line reads the input values for 'n', 'x', 'y', and 'z' from the standard input.

    int v = ((n % 100) * (x % 100) * (y % 100) * (z % 100)) % 100;
    // This line calculates the multiplication of the four numbers and takes the last two digits using the modulus operator.

    if (v < 10) {
        cout << 0 << v << "\n";
        // This line prints the last two digits of the multiplication result with a leading zero if necessary.
    } else {
        cout << v << "\n";
        // This line prints the last two digits of the multiplication result.
    }

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}