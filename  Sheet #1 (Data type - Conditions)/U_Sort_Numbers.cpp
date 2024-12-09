#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

/**
 * @file U_Sort_Numbers.cpp
 * @brief This program reads three numbers and prints them in ascending order followed by their original order.
 * 
 * The program uses normal if statements to sort the numbers.
 * 
 * Example usage:
 * @code
 * Input: 3 -2 1
 * Output: -2
 *         1
 *         3
 * 
 *         3
 *         -2
 *         1
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

    // Store the original order
    int originalA = A, originalB = B, originalC = C;

    // Sorting using normal if statements
    // Example: If A=3, B=-2, C=1
    if (A > B) swap(A, B); // After this, A=-2, B=3, C=1
    if (A > C) swap(A, C); // After this, A=-2, B=3, C=1 (no change)
    if (B > C) swap(B, C); // After this, A=-2, B=1, C=3

    // Print the sorted order
    cout << A << endl;
    cout << B << endl;
    cout << C << endl;

    // Print a blank line
    cout << endl;

    // Print the original order
    cout << originalA << endl;
    cout << originalB << endl;
    cout << originalC << endl;

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.


/*
  int A, B, C;
    // This line declares three variables 'A', 'B', and 'C' of type int to store the input numbers.

    cin >> A >> B >> C;
    // This line reads the input values for 'A', 'B', and 'C' from the standard input.

    // Store the original order
    int originalA = A, originalB = B, originalC = C;

    // Create an array to sort
    int arr[3] = {A, B, C};

    // Sorting using the sort function
    sort(arr, arr + 3);

    // Print the sorted order
    cout << arr[0] << endl;
    cout << arr[1] << endl;
    cout << arr[2] << endl;

    // Print a blank line
    cout << endl;

    // Print the original order
    cout << originalA << endl;
    cout << originalB << endl;
    cout << originalC << endl;

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
  */
}
