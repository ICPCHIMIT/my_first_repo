#include <iostream>
using namespace std;

// Function to calculate the sum of digits of a number
int sumOfDigits(int num) {
    int sum = 0;
    while (num > 0) {
        sum += num % 10;
        num /= 10;
    }
    return sum;
}

int main() {
    int N, A, B;
    cin >> N >> A >> B; // Read the input values for N, A, and B

    int totalSum = 0;

    // Iterate through all numbers from 1 to N
    for (int i = 1; i <= N; ++i) {
        int digitSum = sumOfDigits(i);
        // Check if the sum of digits is between A and B inclusive
        if (digitSum >= A && digitSum <= B) {
            totalSum += i;
        }
    }

    cout << totalSum << endl; // Print the result

    return 0; // Return 0 indicating successful execution
}