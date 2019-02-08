#include "Event2.h"

Event2::Event2()
{
}

void Event2::runEvent()
{
	//Answer Variable
	std::string message;
	bool note = 0;
	bool roomStart = 0;
	bool roomFinished = 0;
	bool gameplay = 1;
	std::string verb1 = "look at";
	std::string verb2 = "walk to";

	//Puzzle
	bool switch1 = 0;
	bool switch2 = 0;
	bool switch3 = 0;
	bool switch4 = 0;
	bool roomBeaten = 0;

	//Game
	while (gameplay)
	{
		//Introduce the new room
		if (roomStart == 0)
		{
			std::cout << "You stumble through the first door to the second room with 4 lightswitches placed next to each other." << std::endl;
			std::cout << "Each lightswitch has a letter placed under it." << std::endl;
			std::cout << "A small piece of paper sits right beside the first switch." << std::endl;
			roomStart = 1;
		}

		//Take input
		std::cout << std::endl << "What will you do? (Type ""help"" to get more information)" << std::endl;
		getline(std::cin, message);

		//Create a few line buffer
		std::cout << std::endl;

		//Note Item
		if (message == (verb1 + " object") && note == 0)
		{
			//Describe object
			std::cout << "The object looks like a piece of paper" << std::endl;
		}
		else if (message == (verb1 + " paper") && note == 0)
		{
			//Describe object
			std::cout << "The object looks like a piece of paper" << std::endl;
		}
		if (message == (verb1 + " note") && note == 0)
		{
			//Describe object
			std::cout << "The object looks like a piece of paper" << std::endl;
		}

		//Pick up object
		if (message == ("pick up object") && note == 0)
		{
			std::cout << "You have picked up the note" << std::endl;
			note = 1;
		}
		else if (message == ("pick up note") && note == 0)
		{
			std::cout << "You have picked up the note" << std::endl;
			note = 1;
		}
		else if (message == ("pick up paper") && note == 0)
		{
			std::cout << "You have picked up the paper" << std::endl;
			note = 1;
		}

		if (message == ("read note") && note == 1)
		{
			std::cout << "The note reads" << std::endl;
			std::cout << "Stop To Analyze Nothing" << std::endl;
		}
		else if (message == ("read paper") && note == 1)
		{
			std::cout << "The paper reads" << std::endl;
			std::cout << "Stop To Analyze Nothing" << std::endl;
		}

		//Look at nothing
		if (message == (verb1))
		{
			std::cout << "look at what?" << std::endl;
		}

		//Look Around
		if (message == ("look around") && note == 0)
		{
			std::cout << "You stumble through the first door to the second room with 4 lightswitches placed next to each other." << std::endl;
			std::cout << "Each lightswitch has a letter placed under it." << std::endl;
			std::cout << "A small piece of paper sits right beside the first switch." << std::endl;
		}
		else if (message == ("look around"))
		{
			std::cout << "You stumble through the first door to the second room with 4 lightswitches placed next to each other." << std::endl;
			std::cout << "Each lightswitch has a letter placed under it." << std::endl;
		}

		//Help
		if (message == ("help"))
		{
			std::cout << "Use verbs such as look at, walk to, pick up, or flip" << std::endl;
			std::cout << "Some helpful nouns would be note, switch, inventory, and door" << std::endl;
			std::cout << "Make sure to type everything in lowercase" << std::endl;
		}

		//Check Inventory
		if (message == ("check inventory") && note == 1)
		{
			std::cout << "You have a small note in your pocket." << std::endl;
		}
		else if (message == ("check inventory"))
		{
			std::cout << "You have nothing in your pocket." << std::endl;
		}

		//Puzzle

		//Look at no singular switch
		if (message == ("look at switch"))
		{
			std::cout << "Which one?" << std::endl;
		}
		else if (message == ("look at light switch"))
		{
			std::cout << "Which one?" << std::endl;
		}
		else if (message == ("look at lightswitch"))
		{
			std::cout << "Which one?" << std::endl;
		}

		//Switch 1
		if (message == ("flip switch 1") && switch1 == 0)
		{
			switch1 = 1;
			std::cout << "You flipped switch 1" << std::endl;
		}
		else if (message == ("flip lightswitch 1") && switch1 == 0)
		{
			switch1 = 1;
			std::cout << "You flipped switch 1" << std::endl;
		}
		else if (message == ("flip light switch 1") && switch1 == 0)
		{
			switch1 = 1;
			std::cout << "You flipped switch 1" << std::endl;
		}

		if (message == (verb1 + " switch 1"))
		{
			std::cout << "You see a small lightswitch with the letter ""T"" under it." << std::endl;
		}
		else if (message == (verb1 + " lightswitch 1"))
		{
			std::cout << "You see a small lightswitch with the letter ""T"" under it." << std::endl;
		}
		else if (message == (verb1 + " light switch 1"))
		{
			std::cout << "You see a small lightswitch with the letter ""T"" under it." << std::endl;
		}

		//Switch 2
		if (message == ("flip switch 2") && switch2 == 0)
		{
			switch2 = 1;
			std::cout << "You flipped switch 2" << std::endl;
		}

		if (message == (verb1 + " switch 2"))
		{
			std::cout << "You see a small lightswitch with the letter ""A"" under it." << std::endl;
		}

		//Switch 3
		if (message == ("flip switch 3") && switch3 == 0)
		{
			switch3 = 1;
			std::cout << "You flipped switch 3" << std::endl;
		}

		if (message == (verb1 + " switch 3"))
		{
			std::cout << "You see a small lightswitch with the letter ""N"" under it." << std::endl;
		}

		//Switch 4
		if (message == ("flip switch 4") && switch4 == 0)
		{
			switch4 = 1;
			std::cout << "You flipped switch 4" << std::endl;
		}

		if (message == (verb1 + " switch 4"))
		{
			std::cout << "You see a small lightswitch with the letter ""S"" under it." << std::endl;
		}

		//Reset Switch
		if (message == ("reset switches"))
		{
			switch1 = 0;
			switch2 = 0;
			switch3 = 0;
			switch4 = 0;
			std::cout << "You flip all the switches back down." << std::endl;
		}

		//Puzzle Checks
		while (switch1 == 0 && switch2 == 0 && switch3 == 0 && switch4 == 1)
		{
			//Input Answer
			std::cout << std::endl << "What will you do? (Type ""help"" to get more information)" << std::endl;
			getline(std::cin, message);

			//Switch 1
			if (message == ("flip switch 1") && switch1 == 0)
			{
				switch1 = 1;
				std::cout << "You flipped switch 1" << std::endl;
			}

			if (message == (verb1 + " switch 1"))
			{
				std::cout << "You see a small lightswitch with the letter ""T"" under it." << std::endl;
			}

			//Switch 2
			if (message == ("flip switch 2") && switch2 == 0)
			{
				switch2 = 1;
				std::cout << "You flipped switch 2" << std::endl;
			}

			if (message == (verb1 + " switch 2"))
			{
				std::cout << "You see a small lightswitch with the letter ""A"" under it." << std::endl;
			}

			//Switch 3
			if (message == ("flip switch 3") && switch3 == 0)
			{
				switch3 = 1;
				std::cout << "You flipped switch 3" << std::endl;
			}

			if (message == (verb1 + " switch 3"))
			{
				std::cout << "You see a small lightswitch with the letter ""N"" under it." << std::endl;
			}

			//Switch 4
			if (message == ("flip switch 4") && switch4 == 0)
			{
				switch4 = 1;
				std::cout << "You flipped switch 4" << std::endl;
			}

			if (message == (verb1 + " switch 4"))
			{
				std::cout << "You see a small lightswitch with the letter ""S"" under it." << std::endl;
			}

			//Reset Switch
			if (message == ("reset switches"))
			{
				switch1 = 0;
				switch2 = 0;
				switch3 = 0;
				switch4 = 0;
				std::cout << "You flip all the switches back down." << std::endl;
			}
			while (switch1 == 1 && switch2 == 0 && switch3 == 0 && switch4 == 1)
			{
				//Input Answer
				std::cout << std::endl << "What will you do? (Type ""help"" to get more information)" << std::endl;
				getline(std::cin, message);

				//Switch 1
				if (message == ("flip switch 1") && switch1 == 0)
				{
					switch1 = 1;
					std::cout << "You flipped switch 1" << std::endl;
				}

				if (message == (verb1 + " switch 1"))
				{
					std::cout << "You see a small lightswitch with the letter ""T"" under it." << std::endl;
				}

				//Switch 2
				if (message == ("flip switch 2") && switch2 == 0)
				{
					switch2 = 1;
					std::cout << "You flipped switch 2" << std::endl;
				}

				if (message == (verb1 + " switch 2"))
				{
					std::cout << "You see a small lightswitch with the letter ""A"" under it." << std::endl;
				}

				//Switch 3
				if (message == ("flip switch 3") && switch3 == 0)
				{
					switch3 = 1;
					std::cout << "You flipped switch 3" << std::endl;
				}

				if (message == (verb1 + " switch 3"))
				{
					std::cout << "You see a small lightswitch with the letter ""N"" under it." << std::endl;
				}

				//Switch 4
				if (message == ("flip switch 4") && switch4 == 0)
				{
					switch4 = 1;
					std::cout << "You flipped switch 4" << std::endl;
				}

				if (message == (verb1 + " switch 4"))
				{
					std::cout << "You see a small lightswitch with the letter ""S"" under it." << std::endl;
				}

				//Reset Switch
				if (message == ("reset switches"))
				{
					switch1 = 0;
					switch2 = 0;
					switch3 = 0;
					switch4 = 0;
					std::cout << "You flip all the switches back down." << std::endl;
				}
				while (switch1 == 1 && switch2 == 1 && switch3 == 0 && switch4 == 1)
				{
					//Input Answer
					std::cout << std::endl << "What will you do? (Type ""help"" to get more information)" << std::endl;
					getline(std::cin, message);

					//Switch 1
					if (message == ("flip switch 1") && switch1 == 0)
					{
						switch1 = 1;
						std::cout << "You flipped switch 1" << std::endl;
					}

					if (message == (verb1 + " switch 1"))
					{
						std::cout << "You see a small lightswitch with the letter ""T"" under it." << std::endl;
					}

					//Switch 2
					if (message == ("flip switch 2") && switch2 == 0)
					{
						switch2 = 1;
						std::cout << "You flipped switch 2" << std::endl;
					}

					if (message == (verb1 + " switch 2"))
					{
						std::cout << "You see a small lightswitch with the letter ""A"" under it." << std::endl;
					}

					//Switch 3
					if (message == ("flip switch 3") && switch3 == 0)
					{
						switch3 = 1;
						std::cout << "You flipped switch 3" << std::endl;
					}

					if (message == (verb1 + " switch 3"))
					{
						std::cout << "You see a small lightswitch with the letter ""N"" under it." << std::endl;
					}

					//Switch 4
					if (message == ("flip switch 4") && switch4 == 0)
					{
						switch4 = 1;
						std::cout << "You flipped switch 4" << std::endl;
					}

					if (message == (verb1 + " switch 4"))
					{
						std::cout << "You see a small lightswitch with the letter ""S"" under it." << std::endl;
					}

					//Reset Switch
					if (message == ("reset switches"))
					{
						switch1 = 0;
						switch2 = 0;
						switch3 = 0;
						switch4 = 0;
						std::cout << "You flip all the switches back down." << std::endl;
					}
					while (switch1 == 1 && switch2 == 1 && switch3 == 1 && switch4 == 1 && roomBeaten == 0)
					{
						roomBeaten = 1;
					}
				}
			}
		}

		//Room beaten
		if (roomBeaten == 1 && roomFinished == 0)
		{
			std::cout << "You flip the final switch and the door swings open" << std::endl;
			roomFinished = 1;
		}

		//Walk through door
		if (message == "walk through door" && roomBeaten == 1)
		{
			std::cout << "You walk through the door to the next room" << std::endl;
			gameplay = 0;
		}

	}
	return;
}

/*std::string Event2::Answer()
{
	string m;
	std::cout << endl << "What will you do? (Type ""help"" to get more information)" << std::endl;
	getline(cin, m);
	return m;
}*/
