// Include the input/output stream library
#include <iostream>
using namespace std;

/*
Mathematical Insight:
For any number n, 1 and n are always factors
The maximum difference |x-y| will always be between these factors
Therefore, the answer is always |1-n| = n-1

Time Complexity: O(1) per test case
Space Complexity: O(1)
*/

// Main function - program entry point
int main() {
    // Declare variable for number of test cases
    int t;
    
    // Read number of test cases
    cin >> t;
    
    // Process each test case
    while(t--) {
        // Read the number for this test case
        int n;
        cin >> n;
        
        // Output n-1 (the difference between largest and smallest factors)
        cout << n-1 << endl;
    }
    
    return 0;
}
