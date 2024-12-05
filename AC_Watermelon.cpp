#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

int main() 
// This is the main function where the execution of the program begins.
{
    int w;
    // This line declares a variable to store the weight of the watermelon.

    cin >> w;
    // This line reads the input value for 'w' from the standard input.

    // Example: If the weight of the watermelon is 8, which is greater than 2 and even, it will print "YES".
    // Example: If the weight of the watermelon is 3, which is not even, it will print "NO".
    // Example: If the weight of the watermelon is 2, which is not greater than 2, it will print "NO".
    if (w > 2 && w % 2 == 0) {
        cout << "YES\n";
        // This line prints "YES" if the weight of the watermelon is greater than 2 and even.
    } else {
        cout << "NO\n";
        // This line prints "NO" if the weight of the watermelon is not greater than 2 or not even.
    }

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}