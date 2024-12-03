#include <iostream>
// This line includes the iostream library which is used for input and output operations.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

/**
 * @file J_Division.cpp
 * @brief This program reads multiple ratings and determines the division for each rating.
 * 
 * The program checks the rating and assigns it to one of the four divisions:
 * - Division 1: rating >= 1900
 * - Division 2: 1600 <= rating <= 1899
 * - Division 3: 1400 <= rating <= 1599
 * - Division 4: rating <= 1399
 * 
 * Example usage:
 * @code
 * Input:
 * 7
 * -789
 * 1299
 * 1300
 * 1399
 * 1400
 * 1679
 * 2300
 * Output:
 * Division 4
 * Division 4
 * Division 4
 * Division 4
 * Division 3
 * Division 2
 * Division 1
 * @endcode
 * 
 * @return Returns 0 indicating successful execution.
 */
int main()
// This is the main function where the execution of the program begins.

{
    int t;
    // This line declares a variable 't' of type int to store the number of test cases.

    cin >> t;
    // This line reads the number of test cases from the standard input.

    while (t--) {
        // This loop iterates through each test case.

        int rating;
        // This line declares a variable 'rating' of type int to store the rating for each test case.

        cin >> rating;
        // This line reads the rating from the standard input.

        if (rating >= 1900) {
            // This line checks if the rating is 1900 or higher.
            cout << "Division 1" << endl;
            // If the condition is true, this line prints "Division 1".
        } else if (rating >= 1600) {
            // This line checks if the rating is between 1600 and 1899.
            cout << "Division 2" << endl;
            // If the condition is true, this line prints "Division 2".
        } else if (rating >= 1400) {
            // This line checks if the rating is between 1400 and 1599.
            cout << "Division 3" << endl;
            // If the condition is true, this line prints "Division 3".
        } else {
            // If the rating is less than 1400.
            cout << "Division 4" << endl;
            // This line prints "Division 4".
        }
    }

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}