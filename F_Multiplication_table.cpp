#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Read the input number

    // Iterate from 1 to 12 to print the multiplication table
    for (int i = 1; i <= 12; ++i) {
        cout << N << " * " << i << " = " << N * i << endl;
        // Print the multiplication result in the required format
    }

    return 0;
}