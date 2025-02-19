#include <iostream>
using namespace std;

int main() {

    int n; cin >> n;
    int a[n];
    for (size_t i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    long long sum = 0;

    for (size_t i = 0; i < n; i++)
    {
        sum += a[i];
    }

    // if (sum < 0)
    // {
    //     sum *= -1;
    // }
    


    sum = abs(sum);
    cout << sum  << "\n";
    
    
    
    
    
    return 0;
}