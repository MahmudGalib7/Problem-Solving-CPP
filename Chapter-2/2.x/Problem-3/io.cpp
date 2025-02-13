
#include <iostream>

using namespace std;

int readNumber() {
    int number;
    cout << "Enter a integer: ";
    cin >> number;

    return number;
}

int writeAnswer(int num1, int num2) {
    return num1 + num2;
}