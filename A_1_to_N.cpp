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

    for (int i = 1; i <= N; ++i) {
        cout << i << endl;
        // This line prints the current value of 'i' and moves to the next line.
    }

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}