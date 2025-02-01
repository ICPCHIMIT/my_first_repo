// Include necessary libraries
#include <iostream>
#include <cmath>
using namespace std;

/*
Mathematical Approach:
1. If each shelf holds 5 books, then for N books we need ceil(N/5) shelves
2. To handle division rounding up:
   - (N + 4) / 5 gives same result as ceil(N/5)
   - Adding 4 ensures we round up for numbers not divisible by 5
*/

int main() {
    // Number of test cases
    int T;
    cin >> T;
    
    // Process each test case
    while(T--) {
        // Read number of books (up to 10^9)
        long long N;
        cin >> N;
        
        // Calculate minimum shelves needed using ceiling division
        // Adding 4 before division by 5 ensures rounding up
        cout << (N + 4) / 5 << endl;
    }
    
    return 0;
}
