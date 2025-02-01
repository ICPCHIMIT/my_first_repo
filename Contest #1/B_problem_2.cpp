// Include the input/output stream library
#include <iostream>

// Use the standard namespace
using namespace std;

// Main function - program entry point
int main() {
    // Declare variable to store the input character
    char c;
    
    // Read a single character from standard input
    cin >> c;
    
    // Check if the character is a vowel (a, e, i, o, u)
    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
        // If it is a vowel, print "vowel"
        cout << "vowel" << endl;
    } else {
        // If it is not a vowel, print "consonant"
        cout << "consonant" << endl;
    }
    
    // Return 0 to indicate successful program completion
    return 0;
}
