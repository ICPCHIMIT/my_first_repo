#include <iostream>
using namespace std;

int main() {

    int n; cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // for (int i = n - 1; i >= 0; i--)
    // {
    //     cout << a[i]  << " ";
        
    // }
    

    for (size_t i = 0; i < (n / 2); i++)
    {
        //  first eleemnt 
        // (i )
        // last element 
        //  (n - i - 1) 
        swap(a[i], a[n - i - 1]);
    }
    
    for (size_t i = 0; i < n; i++)
    {
        cout << a[i]  << " ";
        
    }
    


    return 0;
}
