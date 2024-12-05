#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

int main() 
// This is the main function where the execution of the program begins.
{
    int abc;
    // This line declares a variable to store the input value for 'abc'.

    cin >> abc;
    // This line reads the input value for 'abc' from the standard input.
    
    // This line prints the result.
    // Example:
    // If the input is 123, the steps are as follows:
    // a = 123 / 100 = 1
    // b = (123 / 10) % 10 = 2
    // c = 123 % 10 = 3
    // bca = 2 * 100 + 3 * 10 + 1 = 231
    // cab = 3 * 100 + 1 * 10 + 2 = 312
    // result = 123 + 231 + 312 = 666
    // The output will be: 666

    int a = abc / 100;
    // This line extracts the hundreds digit of 'abc'.

    int b = (abc / 10) % 10;
    // This line extracts the tens digit of 'abc'.

    int c = abc % 10;
    // This line extracts the units digit of 'abc'.

    int bca = b * 100 + c * 10 + a;
    // This line calculates the integer formed by rotating 'abc' to 'bca'.

    int cab = c * 100 + a * 10 + b;
    // This line calculates the integer formed by rotating 'abc' to 'cab'.

    int result = abc + bca + cab;
    // This line calculates the sum of 'abc', 'bca', and 'cab'.

    cout << result << endl;
   

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}