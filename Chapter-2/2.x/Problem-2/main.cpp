#include <iostream>
using namespace std;

int writeAnswer(int num1, int num2);
int readNumber();

int main() {
    int num1;
    int num2;

    num1 = readNumber();
    num2 = readNumber();
    cout << "The sum of " << num1 << " & " << num2 << " is " << writeAnswer(num1,num2);

    return 0;
}