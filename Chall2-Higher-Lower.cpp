// Challenge 2 - Higher/Lower or Guess The Number
// By Jake R.

#include "stdafx.h"
#include <iostream>
#include <ctime>
#include <string>


int main()
{
	// Generate random number for guess (Between 1 - 100) and declare the
	// computer's guessed number variable as 'the_number'
	srand(time(0));
	int base_random_number = rand();
	int the_number = (base_random_number % 100) + 1;

	// Declare  all other variables
	int tries_used = 0;
	int tries_left = 5;
	int player_guess;
	std::string player_restart;

	// Welcome Player and begin game loop
	std::cout << "Welcome to The Number Guessing Game!\n";
	std::cout << "I am thinking of a number between 1 - 100! Make a guess!\n\n";

	while (tries_left > 0 && true)
	{
		// Check tries remaining
		tries_left = tries_left - tries_used;

		// Begin game text and acquiring player guess
		std::cout << "You have " << tries_left << " tries remaining!\n";
		std::cout << "GUESS: ";
		std::cin >> player_guess;
		std::cin.ignore();

		// Compare player_guess to the_number and exit game loop if guessed/tries run out
		if (player_guess > the_number)
		{
			std::cout << "\nNope! It's lower than that! Try again!\n\n";
			tries_used++;
		}
		if (player_guess < the_number)
		{
			std::cout << "\nNope! It's higher than that! Try again!\n\n";
			tries_used++;
		}
		else
		{
			tries_used++;
			std::cout << "\nCongratulations! You guessed the number in " << tries_used << " tries!\n\n";
			return false;
		}
	}

	// Confirm if player wishes to play again and restart or exit
	while (true)
	{
		std::cout << "\nWould you like to play again? Y/N: ";
		std::cin >> player_restart;
		std::cin.ignore();

		if (player_restart == "y" || player_restart == "Y" || player_restart == "n" || player_restart == "N")
		{
			if (player_restart == "Y" || player_restart == "y")
			{
				std::cout << "\n\n";
				main();
			}
			if (player_restart == "N" || player_restart == "n")
			{
				std::cout << "\nThank-you!\n";
				return false;
			}
			return false;
		}

		else
		{
			std::cout << "\nPlease enter Y/N!\n";
		}

	}

	// Safely exit - fuck you Mac users
	std::cout << "\n";
	system("pause");

    return 0;
}

