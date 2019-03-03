/*
*	Manuel Corral Ledezma	
*	mcorralledezma@dmacc.edu
*	January 31, 2019
*
*/


#include <iostream>
using namespace std;

void dungeonRoom1(){
	//A bool that shall help decide when to close out of the program
	bool quit = false;
	
	//This int shall store 
	int choice = 0;
	
	std::cout << "You enter the room in front of you is a door above the door you find the words " << endl;
	std::cout<< "WELCOME PREPARE YOURSELF FOR A REALLY HARD PUZZLE" << endl << endl;
	
	//Sentinal value DEBUGGING to see if the program works
	while(choice!=-999){
	
		if(quit==false){
		
		std ::cout << "In front of you is a door , and two keys, one blue,  and one green, what do you do?" << endl;
		std::cout << "Press 1 to try the door, Press two to pick up the blue key, press three to pick up the green key " << endl << endl;
		std::cin >> choice;
	
		if(choice==1){	
			std::cout << "You try the door, Suddenly you are thrown off your feet and slam against the wall, you fall unconcious, The End for now!" << endl;
			std::cout << "Try again" << endl << endl;
			
		}
		
		else if (choice==2){
			std::cout << "You somehow get the courage to pick up the blue key" << endl;
			std::cout << "\"Now what?\" you ask yourself. " << endl << endl;
			std::cout << "Well as the Master of this specific room i shall give you options" << endl;
			std::cout << "press 1 to try to the door, or press two to do nothing" << endl;
			std::cin >> choice;
			
			if(choice==1){
				
				//A vhs tape that the player must pick up to continue
				bool vhsTape = false;
			
				
				std::cout << "You use the key on the door, the door swings wide open to a well lit room, you walk in" << endl;
				std::cout << "You look around the room to see an old CRT tv, a vhs tap sitting in front of and a blank wall" << endl;
				std::cout << "What do you wanna do now?" << endl << endl;
				
				while(choice!=-999){
					if(vhsTape==false){
					std::cout << "Press 1 to walk to the TV, 2 to pick up the VHS, 3 to look at the blank wall" << endl;
					}
					else if (vhsTape == true){
						std::cout << "Press 1 to walk to the TV, 3 to look at the blank wall " << endl;
					}
					std::cin >> choice;
				
				if(choice==1){
					
					std::cout << "You walk to the TV" << endl;
					
					//If the user does not have the vhs tape nothing happens to continue the story
					if(vhsTape==false){
						std::cout << "With nothing to do you return to the entrance of the room" << endl;
						std::cout << "Now what?" << endl << endl;
					}
					//Checks to see if the user has the vhs to begin the ending sequence 
					if(vhsTape==true){
						std::cout << "With the VHS on hand you insert it to the TV "<< endl;
						std::cout << "You hear a slight click and a whirr as the VHS starts to play" << endl << endl;
						std::cout << "suddenly the lights cut out, you hear the slight whir of a VHS spinning up " << endl << endl;
						std::cout << "all of the sudden the tv turns to purple almost like black light, but this light has some magical powers" << endl;
						std::cout <<"you black out instantly without a seconds notice" << endl;
						std::cout << "You wake up in front of a door with a Car Muffler In Hand" << endl;
						std::cout << "You open the door and proceed to the next room and you realized that " << endl;
						quit = true;
						break;
						
					}
				
				}
				
				else if (choice==2){
					std::cout << "You pick up the VHS tape, written on it says INSERT ME" << endl;
					std::cout << "What do you wanna do now?" << endl << endl;
					vhsTape = true;
				}
				
				else if(choice==3){
					std::cout << "You look at the wall and nothing happens, but you get this feeling you should do something first"<< endl;
					std::cout << "What do you wanna do now?" << endl ;
					
				
				}
				
				else{
					std::cout << "Try again that wasn't even an option" << endl;
				}
			}
				
				
				
			}
			
			else if (choice == 2){
				std::cout << "You give up, you lose all will to keep going and decide to do nothing but hold this blue key, congrats?" << endl;
				std::cout << "GAME OVER" << endl << endl;
				
				
			}
			
			}
			
		else if(choice ==3){
			std::cout << "You pick up the green key, try the door and nothing happens" << endl;
			std::cout << "try something else" << endl << endl;
		
			
		}
		
		else{
			std::cout << "Wow you really screwed that up try again " << endl << endl;
			
		}
	}
	//Once the boolean quit equals true from the ending sequence the rooms ends
	else if(quit == true){
		break;
	}
}
	
	
};

int main(){
	
	
	
	
	
	dungeonRoom1();
	
	
	
	return 0;
}
