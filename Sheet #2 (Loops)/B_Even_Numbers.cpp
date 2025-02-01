#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

int main() 
// This is the main function where the execution of the program begins.
{
    int N;
    // This line declares a variable to store the input value for 'N'.

    cin >> N;
    // This line reads the input value for 'N' from the standard input.

    bool hasEven = false;
    // This line declares a boolean variable to check if there are any even numbers.

    for (int i = 2; i <= N; i += 2) {
        cout << i << endl;
        // This line prints the current even number and moves to the next line.
        hasEven = true;
        // This line sets the boolean variable to true indicating that there is at least one even number.
    }

    if (!hasEven) {
        cout << -1 << endl;
        // This line prints -1 if there are no even numbers.
    }

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}