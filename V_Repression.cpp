#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

/**
 * @file V_Repression.cpp
 * @brief This program reads three integers and finds the maximum possible sum of any two of them.
 * 
 * Example usage:
 * @code
 * Input: 3 4 5
 * Output: 9
 * 
 * Input: 6 6 6
 * Output: 12
 * 
 * Input: 99 99 98
 * Output: 198
 * @endcode
 * 
 * @return Returns 0 indicating successful execution.
 */
int main()
// This is the main function where the execution of the program begins.

{
    int A, B, C;
    // This line declares three variables 'A', 'B', and 'C' of type int to store the input numbers.

    cin >> A >> B >> C;
    // This line reads the input values for 'A', 'B', and 'C' from the standard input.

    // Calculate the possible sums of any two cards
    int sum1 = A + B;
    int sum2 = A + C;
    int sum3 = B + C;

    // Find the maximum sum
    int max_sum = max(sum1, max(sum2, sum3));

    // Print the maximum sum
    cout << max_sum << endl;

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.


    // Alternatively, you can use sorting to find the maximum sum of any two numbers
    // int arr[3] = {A, B, C};
    // sort(arr, arr + 3);
    // int max_sum_sorted = arr[1] + arr[2];
    // cout << max_sum_sorted << endl;

}