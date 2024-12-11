#include <iostream>
using namespace std;

int main() {
    int K, S;
    cin >> K >> S; // Read the input values for K and S

    int count = 0;

    // Iterate through all possible values of X and Y
    for (int X = 0; X <= K; ++X) {
        for (int Y = 0; Y <= K; ++Y) {
            int Z = S - X - Y;
            // Check if Z is within the valid range
            if (Z >= 0 && Z <= K) {
                count++;
            }
        }
    }

    cout << count << endl; // Print the result

    return 0; // Return 0 indicating successful execution
}