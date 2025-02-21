#include <iostream>
using namespace std;

int main() {

    int n; cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    for (size_t i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            continue;
        }

        
        if (a[i] < 0)
        {
            a[i]= 2; 
        }else{
            a[i] = 1;
        }
        
        
    }
    

    for (size_t i = 0; i < n; i++)
    {
        cout << a[i]  << " ";
        
    }
    
    

    return 0;
}
