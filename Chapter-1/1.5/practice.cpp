#include <iostream>

//! Pracitce

//* Using Cout

// int main()
// {
//     // std::cout << "Hello world!"; // print Hello world! to console

//     int x{5};
//     std::cout << "\n";
//     // std::cout << x;

//     // std::cout << "Hello" << " World";

//     std::cout << "x is equal to: " << x;
//     return 0;
// }

//* Using endl

// int main() {
//     // std::cout << "Hi!";
//     // std::cout << "My name is Alex.";

//     // std::cout << "Hi!" << std::endl; // std::endl will cause the cursor to move to the next line
//     // std::cout << "My name is Alex." << std::endl;

    
 
//     return 0;
// }

// int main()
// {
//     int x{ 5 };
//     std::cout << "x is equal to: " << x << '\n'; // single quoted (by itself) (conventional)
//     std::cout << "Yep." << "\n";                 // double quoted (by itself) (unconventional but okay)
//     std::cout << "And that's all, folks!\n";     // between double quotes in existing text (conventional)
//     return 0;
// }

//* Using cin

// int main()
// {
//     std::cout << "Enter a number: "; // ask user for a number

//     int x{};       // define variable x to hold user input (and value-initialize it)
//     std::cin >> x; // get number from keyboard and store it in variable x

//     std::cout << "You entered " << x << '\n';
//     return 0;
// }

// int main()
// {
//     std::cout << "Enter two numbers separated by a space: ";

//     int x{}; // define variable x to hold user input (and value-initialize it)
//     int y{}; // define variable y to hold user input (and value-initialize it)
//     std::cin >> x >> y; // get two numbers and store in variable x and y respectively

//     std::cout << "You entered " << x << " and " << y << '\n';

//     return 0;
// }

// #include <iostream>  // for std::cout and std::cin

// int main()
// {
//     std::cout << "Enter two numbers: ";

//     int x{};
//     std::cin >> x;

//     int y{};
//     std::cin >> y;

//     std::cout << "You entered " << x << " and " << y << '\n';

//     return 0;
// }

// int main()
// {
//     std::cout << "Enter a number: "; // ask user for a number
//     int x{}; // define variable x to hold user input
//     std::cin >> x; // get number from keyboard and store it in variable x
//     std::cout << "You entered " << x << '\n';

//     return 0;
// }

//? Question 2 Answer

// int main() {
//     std::cout << "Enter three number: "; 

//     int x{},y{},z{};

//     std::cin >> x >> y >> z;

//     std::cout << "You entered " << x << ", " << y << ", and " << z << '\n';
//     return 0;

// }