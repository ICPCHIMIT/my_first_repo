#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    bool can_enter= true;


    for (size_t i = 0; i < n; i++)
    {

        // if (a[i] % 2 == 0)
        // {
        //     if (a[i] % 3 != 0 && a[i] % 5 == 0)
        //     {
        //         can_enter = false;
        //         break;
        //     }
            
        // }
        

        if (a[i] & 1)
        {
            continue;
        }

        if (a[i] % 3 == 0 || a[i] % 5 == 0)
        {
            continue;
        }

        // code
        can_enter = false;
        break;

        
        
    }
    

    if(can_enter) cout << "APPROVED" << endl;
    else cout << "DENIED" << endl;
    
    return 0;
}
