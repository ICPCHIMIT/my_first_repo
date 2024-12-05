#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

int main() 
// This is the main function where the execution of the program begins.
{
    int A, B;
    // These lines declare variables to store the input values for 'A' and 'B'.

    cin >> A >> B;
    // This line reads the input values for 'A' and 'B' from the standard input.

    int cost;
    // This line declares a variable to store the cost of the Ferris wheel ride.

    if (A >= 13) {
        cost = B;
        // If Takahashi is 13 years old or older, the cost is 'B' yen.
    } else if (A >= 6) {
        cost = B / 2;
        // If Takahashi is between 6 and 12 years old (inclusive), the cost is half of 'B' yen.
    } else {
        cost = 0;
        // If Takahashi is 5 years old or younger, the ride is free.
    }

    cout << cost << endl;
    // This line prints the cost of the Ferris wheel ride.

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}