#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

int main() 
// This is the main function where the execution of the program begins.
{
    int a, b, h;
    // These lines declare variables to store the input values for 'a', 'b', and 'h'.

    cin >> a >> b >> h;
    // This line reads the input values for 'a', 'b', and 'h' from the standard input.

    int area = ((a + b) * h) / 2;
    // This line calculates the area of the trapezoid using the formula ((a + b) * h) / 2.

    cout << area << endl;
    // This line prints the area of the trapezoid.

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}