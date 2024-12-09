#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T; // Read the number of test cases

    // Iterate through each test case
    for (int i = 0; i < T; ++i) {
        int N;
        cin >> N; // Read the number for which factorial is to be calculated

        long long factorial = 1;
        // Calculate the factorial using a loop
        for (int j = 1; j <= N; ++j) {
            factorial *= j;
        }

        cout << factorial << endl; // Print the factorial of the number
    }

    return 0;
}