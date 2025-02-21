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
        if (a[i] > 10)
        {
            continue;
        }
        // code
        
        cout << "A[" << i << "] = " << a[i]  << "\n";
        
        
    }
    

    return 0;
}
