#include <iostream>
using namespace std;

int main() {
    int X;
    while (cin >> X) {
        if (X == 1999) {
            cout << "Correct" << endl;
            break;
        } else {
            cout << "Wrong" << endl;
        }
    }
    return 0;

/*
       int X;
    for (;;) { // Infinite loop
        cin >> X;
        if (X == 1999) {
            cout << "Correct" << endl;
            break; // Exit the loop if the correct password is entered
        } else {
            cout << "Wrong" << endl;
        }
    }
    return 0;
    */
}
