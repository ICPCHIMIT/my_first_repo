#include <iostream>
using namespace std;

int main() {
    int a, b; cin >> a >> b;

    char c; 
    for (size_t i = 0; i < a; i++)
    {
        cin >> c;
        
        int d = c - '0';
        
        if (!(d >= 0 && d <= 9))
        {
            cout << "No"  << "\n";
            return 0;
        }
        
    }

    cin >> c;

    if (!(c == '-'))
    {
        cout << "No"  << "\n";
        return 0;
    }
    
    for (size_t i = 0; i < b; i++)
    {
        cin >> c;
        
        int d = c - '0';
        
        if (!(d >= 0 && d <= 9))
        {
            cout << "No"  << "\n";
            return 0;
        }
        
    }

    // here
    cout << "Yes"  << "\n";
    

    return 0;
}
