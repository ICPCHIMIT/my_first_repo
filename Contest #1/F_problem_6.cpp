// Include necessary libraries
#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

/*
Mathematical Approach:
1. To get last digit of a number n:
   - Use n % 10 (remainder when divided by 10)
2. Check if one digit is multiple of other using modulo
*/

int main() {
    // Declare variables and read input
    long long t, b;
    cin >> t >> b;
    
    // Get last digit of each number using modulo 10
    int a = t % 10;
    int p = b % 10;
    
    // Check if either digit is multiple of the other
    if (a % p == 0 || p % a == 0) {
        cout << "Brothers" << endl;
    } else {
        cout << "Not brothers" << endl;
    }
    
    return 0;
}
