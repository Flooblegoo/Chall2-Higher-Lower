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

	// Begin game loop
	while (tries_left > 0)
	{
		// Check tries remaining
		tries_left = tries_left - tries_used;


	}

    return 0;
}

