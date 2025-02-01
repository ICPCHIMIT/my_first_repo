#include <iostream>
using namespace std;

void printFibonacci(int N) {
    if (N >= 1) cout << "0";
    if (N >= 2) cout << " 1";

    int a = 0, b = 1;
    for (int i = 3; i <= N; ++i) {
        int c = a + b;
        cout << " " << c;
        a = b;
        b = c;
    }
    cout << endl;
}

int main() {
    int N;
    cin >> N; // Read the input value for N

    printFibonacci(N); // Print the first N numbers of the Fibonacci sequence

    return 0; // Return 0 indicating successful execution
}