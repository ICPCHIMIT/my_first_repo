#include <iostream>

using namespace std;

int main() {
    char symbol;
    int N;
    
    // Read the symbol
    cin >> symbol;
    
    // Read the number of elements
    cin >> N;
    
    // Read the N numbers and print the histogram
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num;
        for (int j = 0; j < num; ++j) {
            cout << symbol;
        }
        cout << endl;
    }
    
    return 0;
}