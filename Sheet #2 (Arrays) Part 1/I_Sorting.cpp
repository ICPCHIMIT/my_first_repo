#include <iostream>
using namespace std;

int main() {
    int n ; cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for (size_t i = 0; i < n - 1; i++)
    {
        // cout << "row num" << i+1  << "\n";

        for (size_t j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j +1])
            {
                swap(a[j], a[j +1]);
            }
            
        }
        
    }

    for (size_t i = 0; i < n; i++)
    {
        cout << a[i]  << " ";
        
    }
    
    


    return 0;
}
