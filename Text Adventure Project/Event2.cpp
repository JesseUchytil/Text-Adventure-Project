#include "Event2.h"

Event2::Event2()
{
}

void Event2::runEvent()
{
	//Zachary Showers, zcshowers@dmacc.edu
	//Answer Variable
	std::string message;
	bool note = 0;
	bool roomStart = 0;
	bool roomFinished = 0;
	bool gameplay = 1;

	//Puzzle
	bool switch1 = 0;
	bool switch2 = 0;
	bool switch3 = 0;
	bool switch4 = 0;
	bool roomBeaten = 0;
	bool key = 0;
	bool doorOpened = 0;

	//Clear Cin
	std::cin.ignore();


	//Game
	while (gameplay)
	{
		//Introduce the new room
		if (roomStart == 0)
		{
			std::cout << "You stumble through the first door to the second room with 4 lightswitches placed next to each other." << std::endl;
			std::cout << "Each lightswitch has a letter placed under it." << std::endl;
			std::cout << "A small piece of paper sits right beside the first switch." << std::endl;
			std::cout << "On the other side of the room is a birdcage" << std::endl;
			roomStart = 1;
		}

		//Take input
		std::cout << std::endl << "What will you do? (Type ""help"" to get more information)" << std::endl;
		getline(std::cin, message);

		//Create a few line buffer
		std::cout << std::endl;

		//Note Item
		if (message == ("look at object") && note == 0)
		{
			//Describe object
			std::cout << "The object looks like a piece of paper" << std::endl;
		}
		else if (message == ("look at paper") && note == 0)
		{
			//Describe object
			std::cout << "The object looks like a piece of paper" << std::endl;
		}
		else if (message == ("look at note") && note == 0)
		{
			//Describe object
			std::cout << "The object looks like a piece of paper" << std::endl;
		}

		//Pick up object
		else if (message == ("pick up object") && note == 0)
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

		//Pick up key
		else if (message == "pick up key" && roomBeaten == 1 && key == 0)
		{
			std::cout << "You have picked up the key" << std::endl;
			key = 1;
		}
		else if (message == "take key" && roomBeaten == 1 && key == 0)
		{
			std::cout << "You have picked up the key" << std::endl;
			key = 1;
		}

		//Reading Note
		else if (message == ("read note") && note == 1)
		{
			std::cout << "The paper reads" << std::endl;
			std::cout << "Dear Stanley," << std::endl;
			std::cout << "	I see you have managed to beat this room, but I can't seem to figure it out" << std::endl;
			std::cout << "I see that there is a puzzle with the switches, but everytime I pull a lever nothing happens" << std::endl;
			std::cout << "I hope I figure out this puzzle soon" << std::endl;
		}
		else if (message == ("read paper") && note == 1)
		{
			std::cout << "The paper reads" << std::endl;
			std::cout << "Dear Stanley," << std::endl;
			std::cout << "	I see you have managed to beat this room, but I can't seem to figure it out" << std::endl;
			std::cout << "I see that there is a puzzle with the switches, but everytime I pull a lever nothing happens" << std::endl;
			std::cout << "I hope I figure out this puzzle soon" << std::endl;
		}
		else if (message == ("look at paper") && note == 1)
		{
			std::cout << "The paper reads" << std::endl;
			std::cout << "Dear Stanley," << std::endl;
			std::cout << "	I see you have managed to beat this room, but I can't seem to figure it out" << std::endl;
			std::cout << "I see that there is a puzzle with the switches, but everytime I pull a lever nothing happens" << std::endl;
			std::cout << "I hope I figure out this puzzle soon" << std::endl;
		}
		else if (message == ("look at note") && note == 1)
		{
			std::cout << "The paper reads" << std::endl;
			std::cout << "Dear Stanley," << std::endl;
			std::cout << "	I see you have managed to beat this room, but I can't seem to figure it out" << std::endl;
			std::cout << "I see that there is a puzzle with the switches, but everytime I pull a lever nothing happens" << std::endl;
			std::cout << "I hope I figure out this puzzle soon" << std::endl;
		}

		//Look at birdcage
		else if (message == ("look at birdcage") && roomBeaten == 0 && key == 0)
		{
			std::cout << "You see a birdcage with what looks like a key to a door inside" << std::endl;
		}
		else if (message == ("look at birdcage") && roomBeaten == 1 && key == 0)
		{
			std::cout << "You see an open birdcage with what looks like a key to a door inside" << std::endl;
		}
		else if (message == ("look at birdcage") && roomBeaten == 1 && key == 1)
		{
			std::cout << "You see an empty birdcage" << std::endl;
		}

		//Open Birdcage
		else if (message == ("open birdcage") && roomBeaten == 0)
		{
			std::cout << "The door doesn't seem to open" << std::endl;
		}
		else if (message == ("open birdcage") && roomBeaten == 1)
		{
			std::cout << "The door is already open" << std::endl;
		}

		//Look at nothing
		else if (message == ("look at"))
		{
			std::cout << "look at what?" << std::endl;
		}

		//Look Around
		else if (message == ("look around") && note == 0)
		{
			std::cout << "You stumble through the first door to the second room with 4 lightswitches placed next to each other." << std::endl;
			std::cout << "Each lightswitch has a letter placed under it." << std::endl;
			std::cout << "A small piece of paper sits right beside the first switch." << std::endl;
			std::cout << "On the other side of the room is a birdcage" << std::endl;
		}
		else if (message == ("look around"))
		{
			std::cout << "You stumble through the first door to the second room with 4 lightswitches placed next to each other." << std::endl;
			std::cout << "Each lightswitch has a letter placed under it." << std::endl;
			std::cout << "On the other side of the room is a birdcage" << std::endl;
		}

		//Help
		else if (message == ("help"))
		{
			std::cout << "Use verbs such as look at, walk through, pick up, flip, reset, or read" << std::endl;
			std::cout << "Some helpful nouns would be note, switch or switches, inventory, birdcage, key, and door" << std::endl;
			std::cout << "Make sure to type everything in lowercase" << std::endl;
		}

		//Check Inventory
		else if (message == ("check inventory") && note == 1 && key == 1)
		{
		std::cout << "You have a small note and key in your pocket." << std::endl;
		}
		else if (message == ("check inventory") && note == 1 && key == 0)
		{
			std::cout << "You have a small note in your pocket." << std::endl;
		}
		else if (message == ("check inventory") && note == 0 && key == 1)
		{
		std::cout << "You have a key in your pocket." << std::endl;
		}
		else if (message == ("check inventory"))
		{
			std::cout << "You have nothing in your pocket." << std::endl;
		}

		//Puzzle

		//Look at no singular switch
		else if (message == ("look at switch"))
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
		else if (message == ("flip switch 1") && switch1 == 0)
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

		else if (message == ("look at switch 1"))
		{
			std::cout << "You see a small lightswitch with the letter ""T"" under it." << std::endl;
		}
		else if (message == ("look at lightswitch 1"))
		{
			std::cout << "You see a small lightswitch with the letter ""T"" under it." << std::endl;
		}
		else if (message == ("look at light switch 1"))
		{
			std::cout << "You see a small lightswitch with the letter ""T"" under it." << std::endl;
		}

		//Switch 2
		else if (message == ("flip switch 2") && switch2 == 0)
		{
			switch2 = 1;
			std::cout << "You flipped switch 2" << std::endl;
		}
		else if (message == ("flip lightswitch 2") && switch2 == 0)
		{
			switch2 = 1;
			std::cout << "You flipped switch 2" << std::endl;
		}
		else if (message == ("flip light switch 2") && switch2 == 0)
		{
			switch2 = 1;
			std::cout << "You flipped switch 2" << std::endl;
		}

		else if (message == ("look at switch 2"))
		{
			std::cout << "You see a small lightswitch with the letter ""A"" under it." << std::endl;
		}
		else if (message == ("look at lightswitch 2"))
		{
		std::cout << "You see a small lightswitch with the letter ""A"" under it." << std::endl;
		}
		else if (message == ("look at light switch 2"))
		{
		std::cout << "You see a small lightswitch with the letter ""A"" under it." << std::endl;
		}

		//Switch 3
		else if (message == ("flip switch 3") && switch3 == 0)
		{
			switch3 = 1;
			std::cout << "You flipped switch 3" << std::endl;
		}
		else if (message == ("flip lightswitch 3") && switch3 == 0)
		{
		switch3 = 1;
		std::cout << "You flipped switch 3" << std::endl;
		}
		else if (message == ("flip light switch 3") && switch3 == 0)
		{
		switch3 = 1;
		std::cout << "You flipped switch 3" << std::endl;
		}

		else if (message == ("look at switch 3"))
		{
			std::cout << "You see a small lightswitch with the letter ""N"" under it." << std::endl;
		}
		else if (message == ("look at lightswitch 3"))
		{
		std::cout << "You see a small lightswitch with the letter ""N"" under it." << std::endl;
		}
		else if (message == ("look at light switch 3"))
		{
		std::cout << "You see a small lightswitch with the letter ""N"" under it." << std::endl;
		}

		//Switch 4
		else if (message == ("flip switch 4") && switch4 == 0)
		{
			switch4 = 1;
			std::cout << "You flipped switch 4" << std::endl;
		}
		else if (message == ("flip lightswitch 4") && switch4 == 0)
		{
		switch4 = 1;
		std::cout << "You flipped switch 4" << std::endl;
		}
		else if (message == ("flip light switch 4") && switch4 == 0)
		{
		switch4 = 1;
		std::cout << "You flipped switch 4" << std::endl;
		}

		else if (message == ("look at switch 4"))
		{
			std::cout << "You see a small lightswitch with the letter ""S"" under it." << std::endl;
		}
		else if (message == ("look at lightswitch 4"))
		{
		std::cout << "You see a small lightswitch with the letter ""S"" under it." << std::endl;
		}
		else if (message == ("look at light switch 4"))
		{
		std::cout << "You see a small lightswitch with the letter ""S"" under it." << std::endl;
		}

		//Reset Switch
		else if (message == ("reset switches"))
		{
			switch1 = 0;
			switch2 = 0;
			switch3 = 0;
			switch4 = 0;
			std::cout << "You flip all the switches back down." << std::endl;
		}

		//Open door
		else if (message == "open door")
		{
		std::cout << "The door is locked" << std::endl;
		}
		else if (message == "open door with key" && key == 1 && doorOpened == 0)
		{
		std::cout << "You open the door with the key" << std::endl;
		doorOpened = 1;
		}
		else if (message == "use key on door" && key == 1 && doorOpened == 0)
		{
		std::cout << "You open the door with the key" << std::endl;
		doorOpened = 1;
		}
		else if (message == "open door" && doorOpened == 1)
		{
		std::cout << "The door is already opened" << std::endl;
		}

		//Walk through door
		else if (message == "walk through door" && doorOpened == 1)
		{
			std::cout << "As you walk through the door to the next room you seek a sparkplug sitting next to the switches." << std::endl;
			std::cout << "You pick it up and proceed to the next room." << std::endl;
			gameplay = 0;
		}
		else
		{
		std::cout << "I don't understand what you are saying" << std::endl;
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

			else if (message == ("look at switch 1"))
			{
			std::cout << "You see a small lightswitch with the letter ""T"" under it." << std::endl;
			}
			else if (message == ("look at lightswitch 1"))
			{
			std::cout << "You see a small lightswitch with the letter ""T"" under it." << std::endl;
			}
			else if (message == ("look at light switch 1"))
			{
			std::cout << "You see a small lightswitch with the letter ""T"" under it." << std::endl;
			}

			//Switch 2
			else if (message == ("flip switch 2") && switch2 == 0)
			{
			switch2 = 1;
			std::cout << "You flipped switch 2" << std::endl;
			}
			else if (message == ("flip lightswitch 2") && switch2 == 0)
			{
			switch2 = 1;
			std::cout << "You flipped switch 2" << std::endl;
			}
			else if (message == ("flip light switch 2") && switch2 == 0)
			{
			switch2 = 1;
			std::cout << "You flipped switch 2" << std::endl;
			}

			else if (message == ("look at switch 2"))
			{
			std::cout << "You see a small lightswitch with the letter ""A"" under it." << std::endl;
			}
			else if (message == ("look at lightswitch 2"))
			{
			std::cout << "You see a small lightswitch with the letter ""A"" under it." << std::endl;
			}
			else if (message == ("look at light switch 2"))
			{
			std::cout << "You see a small lightswitch with the letter ""A"" under it." << std::endl;
			}

			//Switch 3
			else if (message == ("flip switch 3") && switch3 == 0)
			{
			switch3 = 1;
			std::cout << "You flipped switch 3" << std::endl;
			}
			else if (message == ("flip lightswitch 3") && switch3 == 0)
			{
			switch3 = 1;
			std::cout << "You flipped switch 3" << std::endl;
			}
			else if (message == ("flip light switch 3") && switch3 == 0)
			{
			switch3 = 1;
			std::cout << "You flipped switch 3" << std::endl;
			}

			else if (message == ("look at switch 3"))
			{
			std::cout << "You see a small lightswitch with the letter ""N"" under it." << std::endl;
			}
			else if (message == ("look at lightswitch 3"))
			{
			std::cout << "You see a small lightswitch with the letter ""N"" under it." << std::endl;
			}
			else if (message == ("look at light switch 3"))
			{
			std::cout << "You see a small lightswitch with the letter ""N"" under it." << std::endl;
			}

			//Switch 4
			else if (message == ("flip switch 4") && switch4 == 0)
			{
			switch4 = 1;
			std::cout << "You flipped switch 4" << std::endl;
			}
			else if (message == ("flip lightswitch 4") && switch4 == 0)
			{
			switch4 = 1;
			std::cout << "You flipped switch 4" << std::endl;
			}
			else if (message == ("flip light switch 4") && switch4 == 0)
			{
			switch4 = 1;
			std::cout << "You flipped switch 4" << std::endl;
			}

			else if (message == ("look at switch 4"))
			{
			std::cout << "You see a small lightswitch with the letter ""S"" under it." << std::endl;
			}
			else if (message == ("look at lightswitch 4"))
			{
			std::cout << "You see a small lightswitch with the letter ""S"" under it." << std::endl;
			}
			else if (message == ("look at light switch 4"))
			{
			std::cout << "You see a small lightswitch with the letter ""S"" under it." << std::endl;
			}

			//Reset Switch
			else if (message == ("reset switches"))
			{
			switch1 = 0;
			switch2 = 0;
			switch3 = 0;
			switch4 = 0;
			std::cout << "You flip all the switches back down." << std::endl;
			}

			 //Help
			 if (message == ("help"))
			 {
				 std::cout << "Use verbs such as look at, walk to, pick up, or flip" << std::endl;
				 std::cout << "Some helpful nouns would be note, switch, inventory, and door" << std::endl;
				 std::cout << "Make sure to type everything in lowercase" << std::endl;
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

				 else if (message == ("look at switch 1"))
				 {
					 std::cout << "You see a small lightswitch with the letter ""T"" under it." << std::endl;
				 }
				 else if (message == ("look at lightswitch 1"))
				 {
					 std::cout << "You see a small lightswitch with the letter ""T"" under it." << std::endl;
				 }
				 else if (message == ("look at light switch 1"))
				 {
					 std::cout << "You see a small lightswitch with the letter ""T"" under it." << std::endl;
				 }

				 //Switch 2
				 else if (message == ("flip switch 2") && switch2 == 0)
				 {
					 switch2 = 1;
					 std::cout << "You flipped switch 2" << std::endl;
				 }
				 else if (message == ("flip lightswitch 2") && switch2 == 0)
				 {
					 switch2 = 1;
					 std::cout << "You flipped switch 2" << std::endl;
				 }
				 else if (message == ("flip light switch 2") && switch2 == 0)
				 {
					 switch2 = 1;
					 std::cout << "You flipped switch 2" << std::endl;
				 }

				 else if (message == ("look at switch 2"))
				 {
					 std::cout << "You see a small lightswitch with the letter ""A"" under it." << std::endl;
				 }
				 else if (message == ("look at lightswitch 2"))
				 {
					 std::cout << "You see a small lightswitch with the letter ""A"" under it." << std::endl;
				 }
				 else if (message == ("look at light switch 2"))
				 {
					 std::cout << "You see a small lightswitch with the letter ""A"" under it." << std::endl;
				 }

				 //Switch 3
				 else if (message == ("flip switch 3") && switch3 == 0)
				 {
					 switch3 = 1;
					 std::cout << "You flipped switch 3" << std::endl;
				 }
				 else if (message == ("flip lightswitch 3") && switch3 == 0)
				 {
					 switch3 = 1;
					 std::cout << "You flipped switch 3" << std::endl;
				 }
				 else if (message == ("flip light switch 3") && switch3 == 0)
				 {
					 switch3 = 1;
					 std::cout << "You flipped switch 3" << std::endl;
				 }

				 else if (message == ("look at switch 3"))
				 {
					 std::cout << "You see a small lightswitch with the letter ""N"" under it." << std::endl;
				 }
				 else if (message == ("look at lightswitch 3"))
				 {
					 std::cout << "You see a small lightswitch with the letter ""N"" under it." << std::endl;
				 }
				 else if (message == ("look at light switch 3"))
				 {
					 std::cout << "You see a small lightswitch with the letter ""N"" under it." << std::endl;
				 }

				 //Switch 4
				 else if (message == ("flip switch 4") && switch4 == 0)
				 {
					 switch4 = 1;
					 std::cout << "You flipped switch 4" << std::endl;
				 }
				 else if (message == ("flip lightswitch 4") && switch4 == 0)
				 {
					 switch4 = 1;
					 std::cout << "You flipped switch 4" << std::endl;
				 }
				 else if (message == ("flip light switch 4") && switch4 == 0)
				 {
					 switch4 = 1;
					 std::cout << "You flipped switch 4" << std::endl;
				 }

				 else if (message == ("look at switch 4"))
				 {
					 std::cout << "You see a small lightswitch with the letter ""S"" under it." << std::endl;
				 }
				 else if (message == ("look at lightswitch 4"))
				 {
					 std::cout << "You see a small lightswitch with the letter ""S"" under it." << std::endl;
				 }
				 else if (message == ("look at light switch 4"))
				 {
					 std::cout << "You see a small lightswitch with the letter ""S"" under it." << std::endl;
				 }

				 //Reset Switch
				 else if (message == ("reset switches"))
				 {
					 switch1 = 0;
					 switch2 = 0;
					 switch3 = 0;
					 switch4 = 0;
					 std::cout << "You flip all the switches back down." << std::endl;
				 }

				 //Help
				 if (message == ("help"))
				 {
					 std::cout << "Use verbs such as look at, walk to, pick up, or flip" << std::endl;
					 std::cout << "Some helpful nouns would be note, switch, inventory, and door" << std::endl;
					 std::cout << "Make sure to type everything in lowercase" << std::endl;
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

					 else if (message == ("look at switch 1"))
					 {
						 std::cout << "You see a small lightswitch with the letter ""T"" under it." << std::endl;
					 }
					 else if (message == ("look at lightswitch 1"))
					 {
						 std::cout << "You see a small lightswitch with the letter ""T"" under it." << std::endl;
					 }
					 else if (message == ("look at light switch 1"))
					 {
						 std::cout << "You see a small lightswitch with the letter ""T"" under it." << std::endl;
					 }

					 //Switch 2
					 else if (message == ("flip switch 2") && switch2 == 0)
					 {
						 switch2 = 1;
						 std::cout << "You flipped switch 2" << std::endl;
					 }
					 else if (message == ("flip lightswitch 2") && switch2 == 0)
					 {
						 switch2 = 1;
						 std::cout << "You flipped switch 2" << std::endl;
					 }
					 else if (message == ("flip light switch 2") && switch2 == 0)
					 {
						 switch2 = 1;
						 std::cout << "You flipped switch 2" << std::endl;
					 }

					 else if (message == ("look at switch 2"))
					 {
						 std::cout << "You see a small lightswitch with the letter ""A"" under it." << std::endl;
					 }
					 else if (message == ("look at lightswitch 2"))
					 {
						 std::cout << "You see a small lightswitch with the letter ""A"" under it." << std::endl;
					 }
					 else if (message == ("look at light switch 2"))
					 {
						 std::cout << "You see a small lightswitch with the letter ""A"" under it." << std::endl;
					 }

					 //Switch 3
					 else if (message == ("flip switch 3") && switch3 == 0)
					 {
						 switch3 = 1;
						 std::cout << "You flipped switch 3" << std::endl;
					 }
					 else if (message == ("flip lightswitch 3") && switch3 == 0)
					 {
						 switch3 = 1;
						 std::cout << "You flipped switch 3" << std::endl;
					 }
					 else if (message == ("flip light switch 3") && switch3 == 0)
					 {
						 switch3 = 1;
						 std::cout << "You flipped switch 3" << std::endl;
					 }

					 else if (message == ("look at switch 3"))
					 {
						 std::cout << "You see a small lightswitch with the letter ""N"" under it." << std::endl;
					 }
					 else if (message == ("look at lightswitch 3"))
					 {
						 std::cout << "You see a small lightswitch with the letter ""N"" under it." << std::endl;
					 }
					 else if (message == ("look at light switch 3"))
					 {
						 std::cout << "You see a small lightswitch with the letter ""N"" under it." << std::endl;
					 }

					 //Switch 4
					 else if (message == ("flip switch 4") && switch4 == 0)
					 {
						 switch4 = 1;
						 std::cout << "You flipped switch 4" << std::endl;
					 }
					 else if (message == ("flip lightswitch 4") && switch4 == 0)
					 {
						 switch4 = 1;
						 std::cout << "You flipped switch 4" << std::endl;
					 }
					 else if (message == ("flip light switch 4") && switch4 == 0)
					 {
						 switch4 = 1;
						 std::cout << "You flipped switch 4" << std::endl;
					 }

					 else if (message == ("look at switch 4"))
					 {
						 std::cout << "You see a small lightswitch with the letter ""S"" under it." << std::endl;
					 }
					 else if (message == ("look at lightswitch 4"))
					 {
						 std::cout << "You see a small lightswitch with the letter ""S"" under it." << std::endl;
					 }
					 else if (message == ("look at light switch 4"))
					 {
						 std::cout << "You see a small lightswitch with the letter ""S"" under it." << std::endl;
					 }

					 //Reset Switch
					 else if (message == ("reset switches"))
					 {
						 switch1 = 0;
						 switch2 = 0;
						 switch3 = 0;
						 switch4 = 0;
						 std::cout << "You flip all the switches back down." << std::endl;
					 }

					 //Help
					 if (message == ("help"))
					 {
						 std::cout << "Use verbs such as look at, walk to, pick up, or flip" << std::endl;
						 std::cout << "Some helpful nouns would be note, switch, inventory, and door" << std::endl;
						 std::cout << "Make sure to type everything in lowercase" << std::endl;
					 }
					 while (switch1 == 1 && switch2 == 1 && switch3 == 1 && switch4 == 1 && roomBeaten == 0)
					 {
						 roomBeaten = 1;
						 std::cout << "You flip the final switch and the door to the birdcage swings open" << std::endl;
					 }
				 }
			 }
		 }

	}
	if (gameplay == 0)
	{
		return;
	}
}