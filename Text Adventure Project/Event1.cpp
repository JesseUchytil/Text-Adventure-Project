#include "Event1.h"

bool Event1::runMathGame()
{
	const int EASY = 40;//numbers of problems for each difficulty
	const int MEDIUM = 16;
	const int HARD = 6;

	std::clock_t startTime;//various variables used a few times each
	bool quits = false;
	bool winner = false;
	bool correct = false;
	std::string input = "";
	int problemCounter = 0;
	int answer = -1;
	int difficulty = 0;
	int mode;
	int problem[3];

	std::cout << "Welcome to the math game!  Can you solve all the problems in time?" << std::endl//intro player
		<< "Which difficulty would you like? 2 minutes time limit for each difficulty." << std::endl
		<< "\t1) Easy (" << EASY << " simplistic problems)" << std::endl
		<< "\t2) Medium (" << MEDIUM << " somewhat difficult problems)" << std::endl
		<< "\t3) Hard (" << HARD << " fairly difficult problems, recommended to bring paper to solve)" << std::endl;
	std::cout << "Please enter the number of your choice: ";
	std::cin >> input;

	while (input != "1" && input != "2" && input != "3") {//verify input
		std::cout << "Invalid entry; please enter 1, 2, or 3: ";
		std::cin >> input;
	}
	
	if (input == "1") difficulty = 1;//Select difficulty and assign
	else if (input == "2") difficulty = 2;
	else if (input == "3") difficulty = 3;
	
	srand(time(NULL));//randomize seed
	startTime = std::clock();//start the clock

	while (!quits) {
		correct = false;//used to verify correctness of answer given
		answer = -1;//answer input
		mode = 0;//mode is what type of problem is given (addition, subtraction, etc.)

		mode = rand() % 4 + 1;//get a random mode

		switch (mode) {//and put it in a switch
		case 1:
			switch (difficulty) {//detect difficulty...
			case 1:
				createAdditionProblem(1, 20, problem);//and create appropriately difficult problem
				break;
			case 2:
				createAdditionProblem(10, 100, problem);
				break;
			case 3:
				createAdditionProblem(100, 1000, problem);
				break;
			}
			break;
		case 2://repeat the above for all problem types
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
				createMultiplicationProblem(10, 20, problem);
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

		std::cout << "Problem #" << problemCounter + 1 << ": " << problem[0] << " ";//output the randomized problem to the player
		if (mode == 1) std::cout << "+";
		else if (mode == 2) std::cout << "-";
		else if (mode == 3) std::cout << "*";
		else if (mode == 4) std::cout << "/";
		std::cout << " " << problem[1] << " = ";
		std::cin >> answer;//get input for answer

		while (!correct) {//while answer is not correct...
			if (answer == problem[2]) {//check if answer is correct
				std::cout << "Correct answer!" << std::endl << std::endl;//if it is correct, tell the player and set correct to true
				correct = true;
			}
			else {
				if ((std::clock() - startTime) / 1000 >= 120) correct = true;//test if time is up, if it is then set correct to true
				else {//otherwise
					std::cout << "Incorrect answer; try again." << std::endl;//problem is incorrect
					std::cout << "Problem #" << problemCounter + 1 << ": " << problem[0] << " ";//and reprompt for new answer until anser is correct
					if (mode == 1) std::cout << "+";
					else if (mode == 2) std::cout << "-";
					else if (mode == 3) std::cout << "*";
					else if (mode == 4) std::cout << "/";
					std::cout << " " << problem[1] << " = ";
					std::cin >> answer;
				}
			}
		}

		std::cout << 120 - ((std::clock() - startTime) / 1000) << " seconds remaining." << std::endl << std::endl;//output time remaining

		problemCounter++;//increment amount of problems solved

		if ((std::clock() - startTime) / 1000 >= 120) {//test if time is up, and if so quit out and fail.
			quits = true;
			std::cout << "Times up!" << std::endl;
		}//elsewise, if problem counter is greater than or equal to the amount of problems solved...
		else if ((problemCounter >= EASY && difficulty == 1) || (problemCounter >= MEDIUM && difficulty == 2) || (problemCounter >= HARD && difficulty == 3)) {
			winner = true;//declare that the player as winner and quit out.
			quits = true;
			std::cout << "Congratulations!  You passed!" << std::endl;
		}
	}
	return winner;//return whether or not the winner passed as a boolean
}

void Event1::createAdditionProblem(int min, int max, int problem[3])
{
	problem[0] = rand() % max + min;//determine first half of problem
	problem[1] = rand() % max + min;//determine second half of problem
	problem[2] = problem[0] + problem[1];//take answer of problem and put it in the correct slot
}

void Event1::createSubtractionProblem(int min, int max, int problem[3])
{
	problem[0] = rand() % max + min;//determine first half of problem
	problem[1] = rand() % max + min;//determine second half of problem
	if ((problem[0] - problem[1]) < 0) {//if answer is negative, reverse operands to make it positive
		int temp = problem[0];
		problem[0] = problem[1];
		problem[1] = temp;
	}
	problem[2] = problem[0] - problem[1];//take answer of problem and put it in the correct slot
}

void Event1::createMultiplicationProblem(int min, int max, int problem[3])
{
	problem[0] = rand() % max + min;//determine first half of problem
	problem[1] = rand() % max + min;//determine second half of problem
	problem[2] = problem[0] * problem[1];//take answer of problem and put it in the correct slot
}

void Event1::createDivisionProblem(int min, int max, int problem[3])
{
	bool passes = false;//set up while loop
	while (!passes) {
		problem[0] = rand() % max + min;//determine first half of problem
		problem[1] = rand() % problem[0] + min;//determine second half of problem, ensuring it is less than the first half and above the minimum
		if (problem[0] % problem[1] == 0) passes = true;//if it divides evenly, pass it on.  Otherwise, start again.
	}
	problem[2] = problem[0]/problem[1];//take answer of problem and put it in the correct slot
}

Event1::Event1()//empty constructor
{
	
}

void Event1::runEvent()
{
	std::cout << "\n\n\nEntering the first room, you are greeted by a mostly empty room.  \n"//story for the player
		<< "Aside from the door you came through, the only things in the room are \n"
		<< "another door (assumedly leading to the next room) and a computer screen with a \n"
		<< "number keypad in front of it.  Approaching the screen, you are greeted \n"
		<< "with a set of choices on it.  Without any other choice, you decide to \n"
		<< "follow the instructions on the screen. \n\n";

	bool success = false;//declare variables
	std::string input = "";
	
	while (!success) {
		success = runMathGame();//run math game until player succeeds
		if (!success) {
			std::cout << std::endl << "Unfortunately, it appears that you have failed."
				<< "\nAlso unfortunately, this means you are stuck until you win at least one round of one game."
				<< "\nPlease prepare yourself and try again when you are really ready.\n";
		}
	}
	std::cout << "\nWith the message of success displaying on screen, you hear a loud 'clunk' sound"//story for the player
		<< "\nfrom the door leading to the next room.  Along with this, a toolbox has appeared in the middle of the"
		<< "\nroom, waiting for you to take it.  Pressing forward, you grab the box and move through the"
		<< "\ndoor into the next room. \n\n";
}
