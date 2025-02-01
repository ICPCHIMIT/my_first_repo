// Include the input/output stream library
#include <iostream>
using namespace std;

/*
Problem Analysis:
1. A lake is suitable if and only if it has 0 fish
2. For each lake, we just need to check if x == 0
   - If x == 0, print "Yes"
   - If x > 0, print "No"
*/

int main() {
    // Read number of lakes (test cases)
    int T;
    cin >> T;
    
    // Process each lake
    while(T--) {
        // Read number of fish in current lake
        int x;
        cin >> x;
        
        // Check if lake is suitable (has 0 fish)
        if(x == 0) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }
    
    return 0;
}
