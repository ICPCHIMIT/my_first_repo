#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Read the input value for N

    // Print the upper half of the diamond
    for (int i = 1; i <= N; ++i) {
        int spaces = N - i;
        int stars = 2 * i - 1;

        // Print leading spaces
        for (int j = 0; j < spaces; ++j) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < stars; ++j) {
            cout << "*";
        }
        cout << endl; // Move to the next line after printing each row
    }

    // Print the lower half of the diamond
    for (int i = N; i >= 1; --i) {
        int spaces = N - i;
        int stars = 2 * i - 1;

        // Print leading spaces
        for (int j = 0; j < spaces; ++j) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < stars; ++j) {
            cout << "*";
        }
        cout << endl; // Move to the next line after printing each row
    }

    return 0; // Return 0 indicating successful execution
}