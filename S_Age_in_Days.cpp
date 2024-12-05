#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

/**
 * @file S_Age_in_Days.cpp
 * @brief This program reads a number of days and converts it to years, months, and days.
 * 
 * The program assumes that a year has 365 days and a month has 30 days.
 * 
 * Example usage:
 * @code
 * Input: 400
 * Output: 1 years
 *         1 months
 *         5 days
 * 
 * Input: 800
 * Output: 2 years
 *         2 months
 *         10 days
 * 
 * Input: 30
 * Output: 0 years
 *         1 months
 *         0 days
 * @endcode
 * 
 * @return Returns 0 indicating successful execution.
 */
int main()
// This is the main function where the execution of the program begins.

{
    int N;
    // This line declares a variable 'N' of type int to store the input number of days.

    cin >> N;
    // This line reads the input number of days from the standard input.

    int years = N / 365;
    // This line calculates the number of years by dividing the total days by 365.

    N = N % 365;
    // This line updates 'N' to the remaining days after calculating the years.

    int months = N / 30;
    // This line calculates the number of months by dividing the remaining days by 30.

    int days = N % 30;
    // This line calculates the remaining days after calculating the months.

    cout << years << " years" << endl;
    // This line prints the number of years.

    cout << months << " months" << endl;
    // This line prints the number of months.

    cout << days << " days" << endl;
    // This line prints the number of days.

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}