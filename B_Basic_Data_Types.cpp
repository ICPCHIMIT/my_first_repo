#include <iostream>
// This line includes the iostream library which is used for input and output operations.

#include <limits>
// This line includes the limits library which provides information about the properties of fundamental types.

using namespace std;
// This line allows us to use all the standard library names without prefixing them with "std::".

int main()
// This is the main function where the execution of the program begins.

{
    int i;
    // This line declares a variable 'i' of type int to store a 32-bit integer.
    // Minimum value: INT_MIN (-2147483648)
    // Maximum value: INT_MAX (2147483647)
    // Size: sizeof(int) (usually 4 bytes)

    long long ll;
    // This line declares a variable 'll' of type long long to store a 64-bit integer.
    // Minimum value: LLONG_MIN (-9223372036854775808)
    // Maximum value: LLONG_MAX (9223372036854775807)
    // Size: sizeof(long long) (usually 8 bytes)

    char ch;
    // This line declares a variable 'ch' of type char to store an 8-bit character.
    // Minimum value: CHAR_MIN (-128)
    // Maximum value: CHAR_MAX (127)
    // Size: sizeof(char) (usually 1 byte)

    float f;
    // This line declares a variable 'f' of type float to store a 32-bit real value.
    // Minimum value: FLT_MIN (1.17549e-38)
    // Maximum value: FLT_MAX (3.40282e+38)
    // Size: sizeof(float) (usually 4 bytes)

    double d;
    // This line declares a variable 'd' of type double to store a 64-bit real value.
    // Minimum value: DBL_MIN (2.22507e-308)
    // Maximum value: DBL_MAX (1.79769e+308)
    // Size: sizeof(double) (usually 8 bytes)

    cin >> i >> ll >> ch >> f >> d;
    // This line reads the input values for the variables 'i', 'll', 'ch', 'f', and 'd' from the standard input.

    cout << i << "\n";
    // This line prints the value of 'i' followed by a newline character to the standard output.

    cout << ll << "\n";
    // This line prints the value of 'll' followed by a newline character to the standard output.

    cout << ch << "\n";
    // This line prints the value of 'ch' followed by a newline character to the standard output.

    cout << f << "\n";
    // This line prints the value of 'f' followed by a newline character to the standard output.

    cout << d << "\n";
    // This line prints the value of 'd' followed by a newline character to the standard output.

    return 0;
    // This line returns 0 from the main function, indicating that the program ended successfully.
}