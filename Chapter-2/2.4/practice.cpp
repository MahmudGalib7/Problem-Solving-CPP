#include <iostream>

// int getValueFromUser()
// {
//  	std::cout << "Enter an integer: ";
// 	int input{};
// 	std::cin >> input;

// 	return input;
// }

// int main()
// {
// 	int value { getValueFromUser() };

// 	std::cout << value << " doubled is: " << value * 2 << '\n';

// 	return 0;
// }

//? A better vesion but it wontt work


// int getValueFromUser()
// {
//  	std::cout << "Enter an integer: ";
// 	int input{};
// 	std::cin >> input;

// 	return input;
// }

// // This function won't compile
// void printDouble()
// {
// 	std::cout << value << " doubled is: " << value * 2 << '\n';
// }

// int main()
// {
// 	int value { getValueFromUser() };

// 	printDouble();

// 	return 0;
// }

//? A better version of this

// int getValueFromUser()
// {
//  	std::cout << "Enter an integer: ";
// 	int input{};
// 	std::cin >> input;

// 	return input;
// }

// void printDouble(int value)
// {
// 	std::cout << value << " doubled is: " << value * 2 << '\n';
// }

// int main()
// {
// 	int value { getValueFromUser() };

// 	printDouble(value);

// 	return 0;
// }

//? A simple coustom example of using returntype functions

#include <iostream>

int add(int x, int y)
{
    return x + y;
}

int multiply(int z, int w)
{
    return z * w;
}

int main()
{
    std::cout << add(4, 5) << '\n'; // within add() x=4, y=5, so x+y=9
    std::cout << add(1 + 2, 3 * 4) << '\n'; // within add() x=3, y=12, so x+y=15

    int a{ 5 };
    std::cout << add(a, a) << '\n'; // evaluates (5 + 5)

    std::cout << add(1, multiply(2, 3)) << '\n'; // evaluates 1 + (2 * 3)
    std::cout << add(1, add(2, 3)) << '\n'; // evaluates 1 + (2 + 3)

    return 0;
}