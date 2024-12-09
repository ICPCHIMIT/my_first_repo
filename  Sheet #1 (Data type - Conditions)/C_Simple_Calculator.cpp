#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

int main()
// This is the main function where the execution of the program begins.

{
    long long X, Y;
    // This line declares two variables 'X' and 'Y' of type long long to store the input numbers.
    // We use long long because the numbers can be as large as 10^5, and the results of multiplication can be as large as 10^10,
    // which exceeds the range of the int type.

    cin >> X >> Y;
    // This line reads the input values for the variables 'X' and 'Y' from the standard input.

    cout << X << " + " << Y << " = " << (X + Y) << "\n";
    // This line prints the summation of 'X' and 'Y' in the format "X + Y = summation result".

    cout << X << " * " << Y << " = " << (X * Y) << "\n";
    // This line prints the multiplication of 'X' and 'Y' in the format "X * Y = multiplication result".

    cout << X << " - " << Y << " = " << (X - Y) << "\n";
    // This line prints the subtraction of 'Y' from 'X' in the format "X - Y = subtraction result".

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}