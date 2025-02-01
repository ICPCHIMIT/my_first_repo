#include <iostream>
using namespace std;

// Function to count the number of ones in the binary representation of a number
int countOnes(int N) {
    int count = 0;
    while (N > 0) {
        count += N % 2;
        N /= 2;
    }
    return count;
}

// Function to convert a number with only ones in its binary representation to decimal
int binaryOnesToDecimal(int onesCount) {
    int result = 0;
    for (int i = 0; i < onesCount; ++i) {
        result = (result << 1) | 1;
    }
    return result;
}

int main() {
    int T;
    cin >> T; // Read the number of test cases

    while (T--) {
        int N;
        cin >> N; // Read the number for each test case
        int onesCount = countOnes(N);
        int result = binaryOnesToDecimal(onesCount);
        cout << result << endl;
    }

    return 0;
}