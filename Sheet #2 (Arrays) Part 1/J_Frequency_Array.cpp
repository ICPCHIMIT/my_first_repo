#include <iostream>
using namespace std;

int main() {
    int n, m ; cin >> n >> m;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int freq[m+10] = {};
    // 100
    for (size_t i = 0; i < n; i++)
    {
        int cnt = a[i];
        freq[cnt]++;
    }

    for (int i = 1; i <= m; i++)
    {
        cout << freq[i]  << "\n";
        
    }
    
   

    

    

    
    
    return 0;
}
