#include <iostream>
using namespace std;

int main() {

    int n; cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int x ; cin >> x;

    int index = -1;

    for (size_t i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            index = i;
            break;
        }
        
    }
    

    cout << index  << "\n";
    

    
    
    return 0;
}
