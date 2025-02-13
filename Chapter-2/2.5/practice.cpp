#include <iostream>

//? Lifetime of a local variable

// void doSomething()
// {
//     std::cout << "Hello!\n";
// }

// int main()
// {
//     int x{ 0 };    // x's lifetime begins here

//     doSomething(); // x is still alive during this function call

//     return 0;
// } // x's lifetime ends here


// int add(int x, int y) // x and y are created and enter scope here
// {
//     // x and y are usable only within add()
//     return x + y;
// } // y and x go out of scope and are destroyed here

// int main()
// {
//     int a{ 5 }; // a is created, initialized, and enters scope here
//     int b{ 6 }; // b is created, initialized, and enters scope here

//     // a and b are usable only within main()

//     std::cout << add(a, b) << '\n'; // calls add(5, 6), where x=5 and y=6

//     return 0;
// } // b and a go out of scope and are destroyed here    

#include <iostream>

void doIt(int x)
{
    int y{ 4 };
    std::cout << "doIt: x = " << x << " y = " << y << '\n';

    x = 3;
    std::cout << "doIt: x = " << x << " y = " << y << '\n';
}

int main()
{
    int x{ 1 };
    int y{ 2 };

    std::cout << "main: x = " << x << " y = " << y << '\n';

    doIt(x);

    std::cout << "main: x = " << x << " y = " << y << '\n';

    return 0;
}