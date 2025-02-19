#include <iostream>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    // min
    int index_min = 0, value_min = a[0];
    // max
    int index_max = 0, value_max = a[0];

    for (size_t i = 0; i < n; i++)
    {
        // min
        if (a[i] < value_min)
        {
            index_min = i;
            value_min = a[i];
        }
        
        
        // max

        if (a[i] > value_max)
        {
            index_max = i;
            value_max = a[i];
        }
        

    }
    
    swap(a[index_min], a[index_max]);

    for (size_t i = 0; i < n; i++)
    {
        cout << a[i]  << " ";
        
    }
    



    return 0;
}
