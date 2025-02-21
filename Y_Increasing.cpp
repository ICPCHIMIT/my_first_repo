#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t; cin >> t;
    while (t--)
    {
        //start case
        int n; cin >>n;
        int a[n];
        for (size_t i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a,a+n);
        bool status = true;
        for (size_t i = 1; i < n; i++)
        {
            if (a[i] == a[i - 1])
            {
                status = false;
                break;
            }
            
        }
        
        if(status) cout << "YES" << endl;
        else cout << "NO" << endl;

        // end case

    }
    
    

    return 0;
}
