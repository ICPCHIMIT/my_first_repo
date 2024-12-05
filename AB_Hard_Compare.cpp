    #include <iostream>
    // This line includes the iostream library which is used for input and output operations.

    #include <cmath>
    // This line includes the cmath library which is used for mathematical functions.

    using namespace std;
    // This line allows us to use all the standard library names without prefixing them with "std::".

    int main() 
    // This is the main function where the execution of the program begins.
    {
        long long A, B, C, D;
        // These lines declare variables to store the four input numbers.

        cin >> A >> B >> C >> D;
        // This line reads the input values for 'A', 'B', 'C', and 'D' from the standard input.

        // Compare A^B and C^D using logarithms to avoid overflow
        if (B * log(A) > D * log(C)) {
            cout << "YES\n";
            // This line prints "YES" if A^B is greater than C^D.
        } else {
            cout << "NO\n";
            // This line prints "NO" if A^B is not greater than C^D.
        }

        // Second solution using a different approach
        /*
        long double A, B, C, D;
        // These lines declare variables to store the four input numbers as long double.

        cin >> A >> B >> C >> D;
        // This line reads the input values for 'A', 'B', 'C', and 'D' from the standard input.

        long double new_B = B / 10000000000000;
        // This line scales down B to avoid overflow.

        long double new_D = D / 10000000000000;
        // This line scales down D to avoid overflow.

        if (pow(A, new_B) > pow(C, new_D)) {
            cout << "YES";
            // This line prints "YES" if A^new_B is greater than C^new_D.
        } else {
            cout << "NO";
            // This line prints "NO" if A^new_B is not greater than C^new_D.
        }
        */

        return 0;
        // This line returns 0 from the main function, indicating that the program ended successfully.
    }