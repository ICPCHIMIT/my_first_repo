#include <iostream>
using namespace std;

int main() {

    int n ; cin >> n;
    char c;
    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        cin >> c;
        sum += (c - '0');
        // cout << c  << "\n";
        
    }
    cout << sum  << "\n";
    
    
    return 0;
}
