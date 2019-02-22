#include "Event4.h"

Event4::Event4()
{
}

void Event4::runEvent()
{
//	std::cout << "Running event 4" << std::endl;
	//A bool that shall help decide when to close out of the program
	bool quit = false;

	int choice = 0;
	std::cout << "WELCOME PREPARE YOURSELF FOR A REALLY HARD PUZZLE" << std::endl << std::endl;

	while (choice != -999) {
		/*
		*	Manuel Corral Ledezma
		*	mcorralledezma@dmacc.edu
		*	January 31, 2019
		*
		*/

		if (quit == false) {

			std::cout << "In front of you is a door , and two keys, one blue,  and one green, what do you do?" << std::endl;
			std::cout << "Press 1 to try the door, Press two to pick up the blue key, press three to pick up the green key " << std::endl << std::endl;
			std::cin >> choice;

			if (choice == 1) {
				std::cout << "You try the door, Suddenly you are thrown off your feet and slam against the wall, you fall unconcious, The End for now!" << std::endl;
				std::cout << "Try again" << std::endl << std::endl;

			}

			else if (choice == 2) {
				std::cout << "You somehow get the courage to pick up the blue key" << std::endl;
				std::cout << "\"Now what?\" you ask yourself. " << std::endl << std::endl;
				std::cout << "Well as the Master of this specific room i shall give you options" << std::endl;
				std::cout << "press 1 to try to the door, or press two to do nothing" << std::endl;
				std::cin >> choice;

				if (choice == 1) {

					//A vhs tape that the player must pick up to continue
					bool vhsTape = false;


					std::cout << "You use the key on the door, the door swings wide open to a well lit room, you walk in" << std::endl;
					std::cout << "You look around the room to see an old CRT tv, a vhs tap sitting in front of and a blank wall" << std::endl;
					std::cout << "What do you wanna do now?" << std::endl << std::endl;

					while (choice != -999) {
						if (vhsTape == false) {
							std::cout << "Press 1 to walk to the TV, 2 to pick up the VHS, 3 to look at the blank wall" << std::endl;
						}
						else if (vhsTape == true) {
							std::cout << "Press 1 to walk to the TV, 3 to look at the blank wall " << std::endl;
						}
						std::cin >> choice;

						if (choice == 1) {
							std::cout << "You walk to the TV" << std::endl;
							if (vhsTape == false) {
								std::cout << "With nothing to do you return to the entrance of the room" << std::endl;
								std::cout << "Now what?" << std::endl << std::endl;
							}
							if (vhsTape == true) {
								std::cout << "With the VHS on hand you insert it to the TV " << std::endl;
								std::cout << "You hear a slight click and a whirr as the VHS starts to play" << std::endl << std::endl;
								std::cout << "suddenly the lights cut out, you hear the slight whir of a VHS spinning up " << std::endl << std::endl;
								std::cout << "all of the sudden the tv turns to purple almost like black light, but this light has some magical powers" << std::endl;
								std::cout << "you black out instantly without a seconds notice" << std::endl;
								std::cout << "you win for now!" << std::endl;
								quit = true;
								break;

							}

						}

						else if (choice == 2) {
							std::cout << "You pick up the VHS tape, written on it says INSERT ME" << std::endl;
							std::cout << "What do you wanna do now?" << std::endl << std::endl;
							vhsTape = true;
						}

						else if (choice == 3) {
							std::cout << "You look at the wall and nothing happens, but you get this feeling you should do something first" << std::endl;
							std::cout << "What do you wanna do now?" << std::endl;


						}

						else {
							std::cout << "Try again that wasn't even an option" << std::endl;
						}
					}



				}

				else if (choice == 2) {
					std::cout << "You give up, you lose all will to keep going and decide to do nothing but hold this blue key, congrats?" << std::endl;
					std::cout << "GAME OVER" << std::endl << std::endl;


				}

			}

			else if (choice == 3) {
				std::cout << "You pick up the green key, try the door and nothing happens" << std::endl;
				std::cout << "try something else" << std::endl << std::endl;


			}

			else {
				std::cout << "Wow you really screwed that up try again " << std::endl << std::endl;

			}
		}
		else if (quit == true) {
			break;
		}
	}
}





