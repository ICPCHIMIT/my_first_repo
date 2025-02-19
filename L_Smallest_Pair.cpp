#include <iostream>
using namespace std;

int main() {
    int t; cin >> t;

    while (t--)
    {
        
        // start case 
        
        int n; cin >> n;
        int a[n];
        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        int m = INT32_MAX;

        for (size_t i = 0; i < n; i++)
        {
            for (size_t j = i + 1; j < n; j++)
            {
                int cnt = a[i] + a[j] + j - i;
                if (cnt < m)
                {
                    m = cnt;
                }
                
            }
            
        }
        
        cout << m  << "\n";
        
        


        // end case

    }
    

    return 0;
}
