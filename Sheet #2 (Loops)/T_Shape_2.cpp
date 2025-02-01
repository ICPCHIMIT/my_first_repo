#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Read the input value for N

    for (int i = 1; i <= N; ++i) {
        // Calculate the number of leading spaces
        int spaces = N - i;
        // Calculate the number of stars
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