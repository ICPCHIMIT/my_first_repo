// Include the input/output stream library
#include <iostream>

// Use the standard namespace
using namespace std;

// Main function - program entry point
int main() {
    // Declare variables for gold (A) and silver (B) amounts
    int A, B;
    
    // Read the amounts of gold and silver from standard input
    cin >> A >> B;
    
    // Check conditions and determine the type of metal
    if (A > 0 && B == 0) {
        // If there is only gold (A > 0, B = 0)
        cout << "Gold" << endl;
    } else if (A == 0 && B > 0) {
        // If there is only silver (A = 0, B > 0)
        cout << "Silver" << endl;
    } else {
        // If both metals are present (A > 0, B > 0)
        cout << "Alloy" << endl;
    }
    
    // Return 0 to indicate successful program completion
    return 0;
}
