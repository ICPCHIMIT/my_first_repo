#include <iostream>
using namespace std;

int main() {

    int n; cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }


    int l = 0, r = n - 1;
    bool status = true;
    while (l <= r)
    {
        if (a[l] != a[r])
        {
            status = false;
            break;
        }
        l++;
        r--;
        
    }
    
    if(status) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}
