#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n,x; cin >> n >> x;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (size_t i = 0; i < n; i++)
    {
        if (a[i] == x)
        {
            a[i] = 0;
        }
        
    }
    // sort(a,a+n);

    for (size_t i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            continue;
        }
        
        cout << a[i]  << " ";
        
    }
    

    return 0;
}
