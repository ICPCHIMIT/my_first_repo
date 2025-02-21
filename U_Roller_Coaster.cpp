#include <iostream>
using namespace std;

int main() {
    int n, k; cin >> n >> k;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int sum = 0;
    for (size_t i = 0; i < n; i++)
    {
        if (a[i] >= k)
        {
            sum++;
        }
        
    }

    cout << sum  << "\n";
    
    
    
    return 0;
}
