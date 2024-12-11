#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Read the input value for N

    for (int i = 1; i <= N; ++i) {
        for (int j = 1; j <= i; ++j) {
            cout << "*"; // Print the '*' symbol
        }
        cout << endl; // Move to the next line after printing each row
    }

    return 0; // Return 0 indicating successful execution
}