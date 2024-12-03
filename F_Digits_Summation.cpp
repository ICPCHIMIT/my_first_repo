#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

/**
 * @brief The main function where the execution of the program begins.
 * 
 * This program reads two large numbers from the standard input, calculates the last digit of each number,
 * and then prints the summation of these last digits. The last digit of a number is obtained using the modulus
 * operator (%) with 10 because 10 is the base of our decimal number system. Using any other number would not
 * correctly isolate the last digit in a base-10 system.
 * 
 * @return int Returns 0 to indicate that the program ended successfully.
 */
int main()
// This is the main function where the execution of the program begins.

{
    long long N, M;
    // This line declares two variables 'N' and 'M' of type long long to store the input numbers.
    // We use long long because the numbers can be as large as 10^18, which exceeds the range of the int type.

    cin >> N >> M;
    // This line reads the input values for the variables 'N' and 'M' from the standard input.

    // To get the last digit of a number, we use the modulus operator (%).
    // The modulus operator returns the remainder of a division operation.
    // For example, N % 10 gives the last digit of N because 10 is the base of our number system.

    int lastDigitN = N % 10;
    // This line calculates the last digit of 'N' by taking the remainder when 'N' is divided by 10.

    int lastDigitM = M % 10;
    // This line calculates the last digit of 'M' by taking the remainder when 'M' is divided by 10.

    int sumLastDigits = lastDigitN + lastDigitM;
    // This line calculates the summation of the last digits of 'N' and 'M'.

    cout << sumLastDigits << "\n";
    // This line prints the result of the summation of the last digits.

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}