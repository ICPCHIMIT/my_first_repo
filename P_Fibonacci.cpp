#include <iostream>
using namespace std;

int main() {

    int n; cin >> n;

    int a[55] = {};
    a[1] = 0;
    a[2] = 1;
    for (size_t i = 3; i <= 52; i++)
    {
        a[i] = a[i - 1] + a[i - 2];
    }
    
    cout << a[n]  << "\n";
    
    // for (size_t i = 1; i < 50; i++)
    // {
    //     cout << a[i]  << "\n";
        
    // }
    
    



    return 0;
}
