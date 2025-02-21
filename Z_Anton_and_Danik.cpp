#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n; cin >> n;
    char c;
    int count_of_a= 0;
    int count_of_d = 0;
    for (size_t i = 0; i < n; i++)
    {
        cin >> c;
        if (c == 'A')
        {
            count_of_a++;
        }else{
            count_of_d++;
        }
        
    }

    if (count_of_a == count_of_d)
    {
        cout << "Friendship"  << "\n";
        
    }else if(count_of_a > count_of_d){
        cout << "Anton"  << "\n";
           
    }else{
        cout << "Danik"  << "\n";
        
    }
    
    
    return 0;
}
