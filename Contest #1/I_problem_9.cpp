// Include the input/output stream library
#include <iostream>
using namespace std;

/*
Mathematical Analysis:
1. Total possible rounds = n/m (integer division)
2. If rounds is odd, Ali wins because:
   - Ali plays on rounds 1,3,5,...
   - Last round will be Ali's turn
3. If rounds is even, Amr wins because:
   - Ali plays on rounds 1,3,5,...
   - Last round will be Amr's turn
*/

int main() {
    // Read total problems and problems per turn
    long long n, m;
    cin >> n >> m;
    
    // Calculate total possible rounds
    long long rounds = n / m;
    
    // If rounds is odd, Ali wins
    // If rounds is even, Amr wins
    if (rounds % 2 == 1) {
        cout << "Ali won" << endl;
    } else {
        cout << "Amr won" << endl;
    }
    
    return 0;
}
