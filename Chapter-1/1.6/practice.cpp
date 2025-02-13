#include <iostream>

// int main()
// {
//     // define an integer variable named x
//     int x; // this variable is uninitialized because we haven't given it a value

//     // print the value of x to the screen
//     std::cout << x << '\n'; // who knows what we'll get, because x is uninitialized

//     return 0;
// }

// void doNothing(int&) // Don't worry about what & is for now, we're just using it to trick the compiler into thinking variable x is used
// {
// }

// int main()
// {
//     // define an integer variable named x
//     int x; // this variable is uninitialized

//     doNothing(x); // make the compiler think we're assigning a value to this variable

//     // print the value of x to the screen (who knows what we'll get, because x is uninitialized)
//     std::cout << x << '\n';

//     return 0;
// }


int main()
{
	std::cout << sizeof(int) << '\n'; // print how many bytes of memory an int value takes

	return 0;
}