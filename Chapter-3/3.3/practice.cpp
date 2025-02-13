#include <iostream>
#include <cstdlib>

int main()
{
	int random{ rand() };
	int numOfGuesses{};
	bool guessed{};
	int num{};

	std::cout << "The system has generated a number.\n";

	while (guessed == 0)
	{
		if (numOfGuesses != 0)
		{
			std::cout << "You have made " << numOfGuesses << " guesses.\n";
		}

		std::cin >> num;
		numOfGuesses += 1;
		if (num > random)
		{
			std::cout << "Too high!\n";
		}
		else if (num < random)
		{
			std::cout << "Too low!\n";
		}
		else if (num == random)
		{
			std::cout << "You got it! Game over in " << numOfGuesses << " guesses.\n";
			guessed = 1;
		}
	}
	return 0;
}