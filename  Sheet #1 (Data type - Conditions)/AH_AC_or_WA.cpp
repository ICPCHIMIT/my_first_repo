#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

int main() 
// This is the main function where the execution of the program begins.
{
    int N, M;
    // These lines declare variables to store the input values for 'N' and 'M'.

    cin >> N >> M;
    // This line reads the input values for 'N' and 'M' from the standard input.

    if (N == M) {
        cout << "Yes" << endl;
        // This line prints "Yes" if all test cases have been passed.
    } else {
        cout << "No" << endl;
        // This line prints "No" if not all test cases have been passed.
    }

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}