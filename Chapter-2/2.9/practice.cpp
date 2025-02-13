// #include <iostream> // imports the declaration of std::cout into the global scope

// void foo(int x) // foo is defined in the global scope, x is defined within scope of foo()
// { // braces used to delineate nested scope region for function foo()
//     std::cout << x << '\n';
// } // x goes out of scope here

// int main()
// { // braces used to delineate nested scope region for function main()
//     foo(5);

//     int x { 6 }; // x is defined within the scope of main()
//     std::cout << x << '\n';

//     return 0;
// } // x goes out of scope here
// // foo and main (and std::cout) go out of scope here (the end of the file)

// #include <iostream>

// using namespace std;

// int main() {
//     cout << "Hello World!";
//     return 0;
// }

// int cout() {
//     return 5;
// }

//? If you run this code it will cause a error, thats why dont use namespace instead use std:: , so the complier can understnad if its std::cout of the function cout

#include <iostream>

int main() {
    std::cout << "Hello World!";
    return 0;
}

int cout() {
    return 5;
}

//? This code wont cause any error