#include <iostream>
using namespace std;

int main() {
    int n ; cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    int sum = 0;
    while (true)
    {
        bool can_run_more = true;

        for (size_t i = 0; i < n; i++)
        {
            if (a[i] & 1)
            {
                can_run_more = false;
                break;
            }

            a[i] /= 2;
            
        }
        

        if (can_run_more)
        {
            sum++;
        }else{
            break;
        }
        


    }
    
    cout << sum  << "\n";
    
    
    return 0;
}
