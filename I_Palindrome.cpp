#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Read the input number

    int originalN = N;
    int reversedN = 0;

    // Reverse the number
    while (N > 0) {
        int digit = N % 10;
        reversedN = reversedN * 10 + digit;
        N /= 10;
    }

    cout << reversedN << endl; // Print the reversed number

    // Check if the original number is a palindrome
    if (originalN == reversedN) {
        cout << "YES" << endl; // Print "YES" if the number is a palindrome
    } else {
        cout << "NO" << endl; // Print "NO" if the number is not a palindrome
    }

    return 0;
}