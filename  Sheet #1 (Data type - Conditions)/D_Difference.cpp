#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

int main()
// This is the main function where the execution of the program begins.

{
    long long A, B, C, D;
    // This line declares four variables 'A', 'B', 'C', and 'D' of type long long to store the input numbers.
    // We use long long because the numbers can be as large as 10^5, and the results of multiplication can be as large as 10^10,
    // which exceeds the range of the int type.

    cin >> A >> B >> C >> D;
    // This line reads the input values for the variables 'A', 'B', 'C', and 'D' from the standard input.

    /**
     * @brief Computes the difference between the product of A and B, and the product of C and D.
     *
     * This calculation follows the standard order of operations (PEMDAS/BODMAS):
     * 1. Parentheses
     * 2. Exponents (not used in this example)
     * 3. Multiplication and Division (from left to right)
     * 4. Addition and Subtraction (from left to right)
     *
     * Example:
     * If A = 5, B = 4, C = 3, and D = 2:
     * X = (A * B) - (C * D)
     * X = (5 * 4) - (3 * 2)
     * X = 20 - 6
     * X = 14
     *
     * @param A The first integer to be multiplied.
     * @param B The second integer to be multiplied.
     * @param C The third integer to be multiplied.
     * @param D The fourth integer to be multiplied.
     * @return The result of (A * B) - (C * D).
     */
    long long X = (A * B) - (C * D);
    // This line calculates the result of the equation X = (A * B) - (C * D) and stores it in the variable 'X'.

    cout << "Difference = " << X << "\n";
    // This line prints the result in the format "Difference = X".

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}