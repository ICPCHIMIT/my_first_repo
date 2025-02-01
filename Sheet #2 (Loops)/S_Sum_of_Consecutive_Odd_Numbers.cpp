#include <iostream>
using namespace std;

int sumOfOddNumbers(int X, int Y) {
    int sum = 0;
    int start = min(X, Y) + 1;
    int end = max(X, Y);

    for (int i = start; i < end; ++i) {
        if (i % 2 != 0) {
            sum += i;
        }
    }

    return sum;
}

int sumOfOddNumbersMath(int X, int Y) {
    int sum = 0;
    int start = min(X, Y) + 1;
    int end = max(X, Y) - 1;

    // Adjust start to the next odd number if it's even
    if (start % 2 == 0) {
        start++;
    }

    // Adjust end to the previous odd number if it's even
    if (end % 2 == 0) {
        end--;
    }

    // Sum of odd numbers between start and end
    if (start <= end) {
        int n = (end - start) / 2 + 1;
        sum = n * (start + end) / 2;
    }

    return sum;
}

int main() {
    int T;
    cin >> T; // Read the number of test cases

    while (T--) {
        int X, Y;
        cin >> X >> Y; // Read the two numbers for each test case
        cout << sumOfOddNumbers(X, Y) << endl;
    }

    return 0;
}