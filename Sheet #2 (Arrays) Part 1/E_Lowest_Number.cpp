#include <iostream>
using namespace std;

int main() {

    int n; cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    int index = 0, value = a[0];

    for (size_t i = 0; i < n; i++)
    {
        if (a[i] < value)
        {
            value = a[i];
            index = i;
        }
        
    }
    

    cout << value << " " << (index + 1)  << "\n";
    
    
    return 0;
}
