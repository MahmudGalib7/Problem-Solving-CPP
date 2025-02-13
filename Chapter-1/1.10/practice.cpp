#include <iostream>

using namespace std;

int five() {
    return 5;
}

int main() {
    int a{2};
    int b {2 + 3};
    int c { (2 * 3) + 4};
    int d{b};
    int e{ five() };

    // Testing the values
    // cout << a << endl;
    // cout << b << endl;
    // cout << c << endl;
    // cout << d << endl;
    // cout << e << endl;
    

    return 0;
}