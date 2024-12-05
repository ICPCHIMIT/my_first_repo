#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

int main() 
// This is the main function where the execution of the program begins.
{
    int M, N;
    // These lines declare variables to store the input values for 'M' and 'N'.

    cin >> M >> N;
    // This line reads the input values for 'M' and 'N' from the standard input.

    int max_dominoes = (M * N) / 2;
    // This line calculates the maximum number of dominoes that can be placed on the board.
    // Each domino covers 2 squares, so the maximum number of dominoes is the total number of squares divided by 2.

    cout << max_dominoes << endl;
    // This line prints the maximum number of dominoes that can be placed on the board.

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}