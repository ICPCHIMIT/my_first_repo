#include <iostream>
using namespace std;

int main() {
    int n ; cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int index = 0, value = a[0];
    for (size_t i = 0; i < n; i++)
    {
        if (a[i] < value)
        {
            index = i;
            value = a[i];
        }
        
    }
    int count = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (a[i] == value)
        {
            count++;
        }
        
    }

    if (count & 1)
    {
        cout << "Lucky"  << "\n";
        
    }else{
        cout << "Unlucky"  << "\n";
        
    }
    
    
    
    
    
    
    return 0;
}
