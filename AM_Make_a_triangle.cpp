#include <iostream>
// This line includes the iostream library which is used for input and output operations.

#include <algorithm>
// This line includes the algorithm library which is used for various algorithms like sorting.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

int main() 
// This is the main function where the execution of the program begins.
{
    int a, b, c;
    // These lines declare variables to store the input values for 'a', 'b', and 'c'.

    cin >> a >> b >> c;
    // This line reads the input values for 'a', 'b', and 'c' from the standard input.

    int sticks[3] = {a, b, c};
    // This line initializes an array with the lengths of the sticks.

    sort(sticks, sticks + 3);
    // This line sorts the array in non-decreasing order.

    int a1 = sticks[0], b1 = sticks[1], c1 = sticks[2];
    // These lines assign the sorted values to 'a1', 'b1', and 'c1'.

    int minutes = max(0, c1 - (a1 + b1) + 1);
    // This line calculates the minimum number of minutes needed to make a valid triangle.

    cout << minutes << endl;
    // This line prints the minimum number of minutes.

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}