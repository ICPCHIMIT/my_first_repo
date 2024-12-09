#include <iostream>
#include <climits>
using namespace std;

int main() {
    int N;
    cin >> N; // Read the number of elements

    int maxNumber = 0;
    // Iterate through the N numbers to find the maximum
    for (int i = 0; i < N; ++i) {
        int num;
        cin >> num; // Read each number
        if (i == 0 || num > maxNumber) {
            maxNumber = num; // Update the maximum number if the current number is greater
        }
    }

    cout << maxNumber << endl; // Print the maximum number

    return 0;


    //    int N;
    // cin >> N; // Read the number of elements

    // int maxNumber = INT_MIN;
    // // Iterate through the N numbers to find the maximum
    // for (int i = 0; i < N; ++i) {
    //     int num;
    //     cin >> num; // Read each number
    //     maxNumber = max(maxNumber, num); // Update the maximum number using the max function
    // }

    // cout << maxNumber << endl; // Print the maximum number

    // return 0;
}