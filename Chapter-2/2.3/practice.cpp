#include <iostream>

using namespace std;


/* How a function should look like

    returnType identifier() // identifier replaced with the name of your function
{
     Your code here
}
    
*/



// }

// void means the function does not return a value to the caller
void printHi()
{
    std::cout << "Hi" << '\n';

    // This function does not return a value so no return statement is needed
}

int main()
{
    printHi(); // okay: function printHi() is called, no value is returned

    return 0;
}

