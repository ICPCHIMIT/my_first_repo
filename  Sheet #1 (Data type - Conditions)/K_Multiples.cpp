#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

/**
 * @file K_Multiples.cpp
 * @brief This program reads two integers and checks if one is a multiple of the other.
 * 
 * The program prints "Multiples" if A is a multiple of B or B is a multiple of A.
 * Otherwise, it prints "No Multiples".
 * 
 * Example usage:
 * @code
 * Input: 9 3
 * Output: Multiples
 * 
 * Input: 6 24
 * Output: Multiples
 * 
 * Input: 12 5
 * Output: No Multiples
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





    // Divisors and the modulus operator (%):
    // A number A is said to be a multiple of another number B if A can be divided by B without leaving a remainder.
    // The modulus operator (%) returns the remainder of the division of two numbers.
    // For example, 9 % 3 == 0 means 9 is divisible by 3, and 3 is a divisor of 9.
    // Similarly, 24 % 6 == 0 means 24 is divisible by 6, and 6 is a divisor of 24.
    // If A % B == 0, then A is a multiple of B.
    // If B % A == 0, then B is a multiple of A.
    if (A % B == 0 || B % A == 0) {
        // This line checks if A is a multiple of B or B is a multiple of A.
        cout << "Multiples" << endl;
        // If the condition is true, this line prints "Multiples".
    } else {
        // This line is executed if neither A is a multiple of B nor B is a multiple of A.
        cout << "No Multiples" << endl;
        // If the condition is false, this line prints "No Multiples".
    }

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.

    
    //  anther solve    
    // Ensure A is greater than or equal to B
    if (A < B) {
        swap(A, B);
    }
    // Check if A is a multiple of B
    if (A % B == 0) {
        cout << "Multiples" << endl;
    } else {
        cout << "No Multiples" << endl;
    }
    
    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}