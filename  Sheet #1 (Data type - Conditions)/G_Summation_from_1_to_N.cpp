#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

int main()
// This is the main function where the execution of the program begins.

{
    long long N;
    // This line declares a variable 'N' of type long long to store the input number.
    // We use long long because the number can be as large as 10^9, which exceeds the range of the int type.

    cin >> N;
    // This line reads the input value for the variable 'N' from the standard input.

    // The summation of numbers from 1 to N can be calculated using the formula:
    // Sum = N * (N + 1) / 2
    // This formula is derived from the arithmetic series sum formula.
    // Using this formula is efficient and avoids time limit issues that would arise with a loop.
    // A loop would have a time complexity of O(N), which is not feasible for large values of N (up to 10^9).
    // The formula has a constant time complexity of O(1), making it suitable for large inputs.
    long long sum = N * (N + 1) / 2;

    cout << sum << "\n";
    // This line prints the calculated summation.

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}