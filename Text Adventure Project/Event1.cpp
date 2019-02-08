#include "Event1.h"

bool Event1::runMathGame()
{
	const int EASY = 50;
	const int MEDIUM = 16;
	const int HARD = 6;

	std::clock_t startTime;
	bool quits = false;
	bool winner = false;
	bool correct = false;
	std::string input = "";
	int problemCounter = 0;
	int answer = -1;
	int difficulty = 0;
	int mode;
	int problem[3];

	std::cout << "Which difficulty would you like? 2 minutes time limit for each difficulty." << std::endl
		<< "\t1) Easy (" << EASY << " simplistic problems)" << std::endl
		<< "\t2) Medium (" << MEDIUM << " somewhat difficult problems)" << std::endl
		<< "\t3) Hard (" << HARD << " fairly difficult problems, recommended to bring paper to solve)" << std::endl;
	std::cout << "Please enter the number of your choice: ";
	std::cin >> input;

	while (input != "1" && input != "2" && input != "3") {
		std::cout << "Invalid entry; please enter 1, 2, or 3: ";
		std::cin >> input;
	}
	
	if (input == "1") difficulty = 1;
	else if (input == "2") difficulty = 2;
	else if (input == "3") difficulty = 3;
	
	srand(time(NULL));
	startTime = std::clock();

	while (!quits) {
		correct = false;
		answer = -1;
		mode = 0;

		mode = rand() % 4 + 1;

		switch (mode) {
		case 1:
			switch (difficulty) {
			case 1:
				createAdditionProblem(1, 20, problem);
				break;
			case 2:
				createAdditionProblem(10, 100, problem);
				break;
			case 3:
				createAdditionProblem(100, 1000, problem);
				break;
			}
			break;
		case 2:
			switch (difficulty) {
			case 1:
				createSubtractionProblem(1, 20, problem);
				break;
			case 2:
				createSubtractionProblem(10, 100, problem);
				break;
			case 3:
				createSubtractionProblem(100, 1000, problem);
				break;
			}
			break;
		case 3:
			switch (difficulty) {
			case 1:
				createMultiplicationProblem(1, 10, problem);
				break;
			case 2:
				createMultiplicationProblem(1, 50, problem);
				break;
			case 3:
				createMultiplicationProblem(10, 100, problem);
				break;
			}
			break;
		case 4:
			switch (difficulty) {
			case 1:
				createDivisionProblem(1, 20, problem);
				break;
			case 2:
				createDivisionProblem(3, 100, problem);
				break;
			case 3:
				createDivisionProblem(10, 1000, problem);
				break;
			}
			break;
		}

		std::cout << "Problem #" << problemCounter + 1 << ": " << problem[0] << " ";
		if (mode == 1) std::cout << "+";
		else if (mode == 2) std::cout << "-";
		else if (mode == 3) std::cout << "*";
		else if (mode == 4) std::cout << "/";
		std::cout << " " << problem[1] << " = ";
		std::cin >> answer;

		while (!correct) {
			if (answer == problem[2]) {
				std::cout << "Correct answer!" << std::endl << std::endl;
				correct = true;
			}
			else {
				if ((std::clock() - startTime) / 1000 >= 120) correct = true;
				else {
					std::cout << "Incorrect answer; try again." << std::endl;
					std::cout << "Problem #" << problemCounter + 1 << ": " << problem[0] << " ";
					if (mode == 1) std::cout << "+";
					else if (mode == 2) std::cout << "-";
					else if (mode == 3) std::cout << "*";
					else if (mode == 4) std::cout << "/";
					std::cout << " " << problem[1] << " = ";
					std::cin >> answer;
				}
			}
		}

		std::cout << 120 - ((std::clock() - startTime) / 1000) << " seconds remaining." << std::endl << std::endl;

		problemCounter++;

		if ((std::clock() - startTime) / 1000 >= 120) {
			quits = true;
			std::cout << "Times up!" << std::endl;
		}
		else if ((problemCounter >= EASY && difficulty == 1) || (problemCounter >= MEDIUM && difficulty == 2) || (problemCounter >= HARD && difficulty == 3)) {
			winner = true;
			quits = true;
			std::cout << "Congratulations!  You passed!" << std::endl;
		}
	}
	return winner;
}

void Event1::createAdditionProblem(int min, int max, int problem[3])
{
	problem[0] = rand() % max + min;
	problem[1] = rand() % max + min;
	problem[2] = problem[0] + problem[1];
}

void Event1::createSubtractionProblem(int min, int max, int problem[3])
{
	problem[0] = rand() % max + min;
	problem[1] = rand() % max + min;
	if ((problem[0] - problem[1]) < 0) {
		int temp = problem[0];
		problem[0] = problem[1];
		problem[1] = temp;
	}
	problem[2] = problem[0] - problem[1];
}

void Event1::createMultiplicationProblem(int min, int max, int problem[3])
{
	problem[0] = rand() % max + min;
	problem[1] = rand() % max + min;
	problem[2] = problem[0] * problem[1];
}

void Event1::createDivisionProblem(int min, int max, int problem[3])
{
	bool passes = false;
	while (!passes) {
		problem[0] = rand() % max + min;
		problem[1] = rand() % problem[0] + min;
		if (problem[0] % problem[1] == 0) passes = true;
	}
	problem[2] = problem[0]/problem[1];
}

bool Event1::runEnglishGame()
{
	return false;
}

Event1::Event1()
{
	
}

void Event1::runEvent()
{
	std::cout << "Running event 1" << std::endl;

	bool success = false;
	std::string input = "";
	
	while (!success) {
		std::cout << "Please enter the game you want to play: (math or english) ";
		while (true) {
			std::cin >> input;
			if (input == "math") {
				success = runMathGame();
				break;
			}
			else if (input == "english") {
				success = runEnglishGame();
				break;
			}
			else {
				std::cout << "Unrecognized input; pleast input either 'english' or 'math': ";
			}
		}
		if (!success) {
			std::cout << "Unfortunately, it appears that you have lost."
				<< "\nAlso unfortunately, this means you are stuck until you win at least one round of one game."
				<< "\nPlease prepare yourself and try again when you are really ready.\n";
		}
	}
}
