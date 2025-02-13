#include <iostream>

using namespace std;

//? Function

// returnType functionName() // This is the function header (tells the compiler about the existence of the function)
// {
//     // This is the function body (tells the compiler what the function does)
// }

// Definition of user-defined function doPrint()

//? Calling Function

// void doPrint() // doPrint() is the called function in this example
// {
//     std::cout << "In doPrint()\n";
// }

// // Definition of function main()
// int main()
// {
//     std::cout << "Starting main()\n";
//     doPrint(); // Interrupt main() by making a function call to doPrint().  main() is the caller.
//     std::cout << "Ending main()\n"; // this statement is executed after doPrint() ends

//     return 0;
// }


//? Calling Function Twice

// void doPrint()
// {
//     std::cout << "In doPrint()\n";
// }

// // Definition of function main()
// int main()
// {
//     std::cout << "Starting main()\n";
//     doPrint(); // doPrint() called for the first time
//     doPrint(); // doPrint() called for the second time
//     std::cout << "Ending main()\n";

//     return 0;
// }

//? Calling Two different functions at the same time

// void doB()
// {
//     std::cout << "In doB()\n";
// }


// void doA()
// {
//     std::cout << "Starting doA()\n";

//     doB();

//     std::cout << "Ending doA()\n";
// }

// // Definition of function main()
// int main()
// {
//     std::cout << "Starting main()\n";

//     doA();

//     std::cout << "Ending main()\n";

//     return 0;
// }

//? Nested Fucntions {Wrong}

// int main()
// {
//     void foo() // Illegal: this function is nested inside function main()
//     {
//         std::cout << "foo!\n";
//     }

//     foo(); // function call to foo()
//     return 0;
// }


//? Right One

// void foo() // no longer inside of main()
// {
//     std::cout << "foo!\n";
// }

// int main()
// {
//     foo();
//     return 0;
// }

