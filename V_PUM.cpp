#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N; // Read the input value for N

    int current = 1;

    for (int i = 1; i <= N; ++i) {
        // Print three numbers followed by "PUM"
        cout << current << " " << current + 1 << " " << current + 2 << " PUM" << endl;
        // Increment current by 4 for the next line
        current += 4;
    }

    return 0; // Return 0 indicating successful execution
}