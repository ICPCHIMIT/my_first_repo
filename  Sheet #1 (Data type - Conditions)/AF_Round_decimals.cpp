#include <iostream>
// This line includes the iostream library which is used for input and output operations.

#include <cmath>
// This line includes the cmath library which is used for mathematical functions.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

int main() 
// This is the main function where the execution of the program begins.
{
    double X;
    // This line declares a variable to store the input value for 'X'.

    cin >> X;
    // This line reads the input value for 'X' from the standard input.

    int rounded_X = round(X);
    // This line rounds 'X' to the nearest integer using the round function.

    cout << rounded_X << endl;
    // This line prints the rounded integer value.

  // Another solution using a different approach
    /*
    int rounded_X = static_cast<int>(X + 0.5);
    // This line rounds 'X' to the nearest integer by adding 0.5 and casting to int.

    cout << rounded_X << endl;
    // This line prints the rounded integer value.
    */
   
    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.


    
}