#include "Event3.h"

Event3::Event3()
{
	
}

void clear()
{
    std::cout << std::string(100, '\n');
}

void Event3::runEvent()
{
//	std::cout << "Running event 3" << std::endl;

	{
		    int playerDecision;

    std::cout << "In the center of the room there is a table on the computer with it. You notice that it is running some sort of video game right now. You take a look at the door and notice that it has some sort of complex locking mechanism." << std::endl;
    std::cout << "1.) Try to pick the lock of the door" << std::endl;
    std::cout << "2.) Play the video game." << std::endl;
    std::cin >> playerDecision;
    clear();
 
if (playerDecision == 1)
{
    //Number of rounds a player must go through
    int rounds = 5;
    int lockPuzzle;
    srand(int (time(0)));
    std::cout << "You approach the door to the next room and examine the lock. You think you can pick the lock with two paperclips." << std::endl;
    std::cout << "You place both paperclips into the locking mechanism." << std::endl;
    lockPuzzle = rand()%5+1;
    clear();

    for (int i = 1; i <= rounds;)
        {
            std::cout << "1.) Twist your paperclip by one centimeter." << std::endl;
            std::cout << "2.) Twist your paperclip by two centimeters." << std::endl;
            std::cout << "3.) Twist the paperclips three degrees around." << std::endl;
            std::cout << "4.) Twist the paperclips counterclockwise four centimeters." << std::endl;
            std::cout << "5.) Twist paperclips five centimeters clockwise." << std::endl;
            std::cin >> playerDecision;
            std::cout << std::endl << std::endl;
            clear();

            if (playerDecision == 1)
            {
                std::cout << "You decide to twist the paperclisp by one centimeter...";
            }
            
            if (playerDecision == 2)
            {
                std::cout << "You decide to twist your paperclips by two centimeters...";
            }
            
            if (playerDecision == 3)
            {
                std::cout << "You decide to twist your paperclips three degrees around...";
            }
            
            if (playerDecision == 4)
            {
                std::cout << "You decide to twist your paperclips counterclockwise four centimeters...";
            }
            
            if (playerDecision == 5)
            {
                std::cout << "You decide to twist your paperclips clockwise by five centimeters... ";
            }
            if (playerDecision > lockPuzzle)
            {
                std::cout << "Your paperclips gets stuck! Try lowering the amount of centimeters you're adjusting with your paperclip." << std::endl;
            }
            
            else if (playerDecision < lockPuzzle)
            {
                std::cout << "Your fingers cramp up and you make no progress! Try raising the amount of centimeters you're adjusting with your paperclip." << std::endl;
            }
            
            else if (playerDecision == lockPuzzle)
            {
                std::cout << "You feel as though you are making progress." << std::endl;
                i++;
                lockPuzzle = rand()%5+1;
            }
        }
    
    /**
        std::cout << "You feel as though you can pick the rest of the lock by brute forstd::cing it now. However, a tiny mouse inside of the mechanism bites your finger and steals your paperclips!" << std::endl;
        std::cout << "1.) Raise your finger and try to grab him!" << std::endl;
        std::cout << "2.) Lower your finger and try to grab him!" << std::endl;
        std::cin >> playerDecision;

    */
        std::cout << "You have successfully picked the lock to the door! You open it and it leads into a closet housing a car battery. Just what you need! There appears to be another door in the closet. You open it and enter the next room..." << std::endl;
    
    
}
    
if (playerDecision == 2)
{
    //Player character's name
    std::string playerName;
    //Player's HP & Damage Multipliers
    int playerHP = 100;
    srand(int (time(0))); //Seed randomizer for damage
    int swordAttack;
    int powerAttack;
    int powerCharge = 3;
    //Enemy Combatant HP & Damage Multipliers
    int goblinElder_HP = 60;
    int goblinDamage;
    
    std::cout << "You approach the computer and take a seat." << std::endl << std::endl << std::endl;
    std::cout << "'WELCOME TO OGRE HUNTER. IF YOU WANT TO ESCAPE THIS ROOM, THEN YOU WILL HAVE TO BEAT THIS GAME.' " << std::endl;
    std::cout << "Please enter your username: ";

    std::cin >> playerName;
    std::cout << std::endl << std::endl;
    std::cout << "Welcome to Ogre Hunter, " << playerName << "." << std::endl << std::endl;

    std::cout << "You are a knight of the Five Realms. As you are resting in your quarters, your squire awakens you to alert you of the king's presence. The King walks up to you and speaks, 'You must rescue my daughter from Sir Mordred and his evil knights. Do so, and you will be rewarded handsomely. But you must go alone. I do not want you to attract too much attention.'" << std::endl << std::endl << std::endl;

    std::cout << "You make haste and find yourself in the Haunted Valley, the land of the goblins." << std::endl;

    std::cout << "You stumble upon an elderly goblin in your path." << std::endl << std::endl << std::endl;

    std::cout << "Goblin Elder: 'Answer my riddle and I shall move.' " << std::endl;

    std::cout << "1.) 'I accept your challenge! Give me the riddle!' " << std::endl;
    std::cout << "2.) 'I don't have time for this. Die!' " << std::endl;

    std::cin >> playerDecision;
    
        if (playerDecision == 1)
        {
            std::cout << "GOBLIN ELDER: 'Weight in my belly, trees on my back, nails in my ribs, feet I do lack. What am I?'" << std::endl;
            std::cout << "1.) Ship" << std::endl;
            std::cout << "2.) Toolbox" << std::endl;
            std::cout << "3.) House" << std::endl;
            std::cin >> playerDecision;
            std::cout << std::endl << std::endl;

            while (playerDecision != 1)
            {
                std::cout << "GOBLIN ELDER: 'Wrong! You're pretty bad at this. Why don't you try again?'" << std::endl << std::endl;
                std::cin >> playerDecision;
            }
    
            if (playerDecision == 1)
            {
                std::cout << "GOBLIN ELDER: 'You humans never learn! You should never trust a goblin!'" << std::endl << std::endl;
            }
            goblinDamage = rand()%11+1;
            std::cout << "The goblin punches you and you take " << goblinDamage << " damage. ";
            playerHP = playerHP - goblinDamage;
            std::cout << "You have " << playerHP << " health left." << std::endl;


            while (goblinElder_HP > 0)
            {
                std::cout << "1.) Sword Attack " << std::endl;
                std::cout << "2.) Raise Shield " << std::endl;
                std::cout << "3.) Power Attack " << std::endl;
                std::cin >> playerDecision;

            
                if (playerDecision == 1)
                {
                    swordAttack = rand()%11+10;
                    std::cout << "You strike the goblin with your sword and deal " << swordAttack << " damage. ";
                    goblinElder_HP = goblinElder_HP - swordAttack;
                    std::cout << "The goblin has " << goblinElder_HP << " health left." << std::endl << std::endl;

                    if (goblinElder_HP > 0)
                    {
                        goblinDamage = rand()%11+1;
                        std::cout << "The goblin punches you and you take " << goblinDamage << " damage. ";
                        playerHP = playerHP - goblinDamage;
                        std::cout << "You have " << playerHP << " health left." << std::endl;
                    }
                }
            
                if (playerDecision == 2)
                {
                    std::cout << "You raise your shield in defense and take no damage. ";
                    std::cout << "You have " << playerHP << " health left." << std::endl << std::endl;
                }
            
                if (playerDecision == 3)
                {
                    powerCharge = powerCharge-1;
                    if (powerCharge > 0)
                    {
                        powerAttack = rand()%16+15;
                        std::cout << "You swing a power attack at the goblin and deal " << powerAttack << " damage. ";
                        goblinElder_HP = goblinElder_HP-powerAttack;
                        std::cout << "You have " << powerCharge << " power attacks left." << std::endl;
                        std::cout << "The goblin has " << goblinElder_HP << " health left." << std::endl << std::endl;
                        if (goblinElder_HP > 0)
                        {
                            goblinDamage = rand()%11+1;
                            std::cout << "The goblin punches you and you take " << goblinDamage << " damage. ";
                            playerHP = playerHP - goblinDamage;
                            std::cout << "You have " << playerHP << " health left." << std::endl;
                        }
                    }
                    
                    if (powerCharge <= 0)
                    {
                        std::cout << "You are too exhausted to use the power attack! You may recharge once you get a chance to rest." << std::endl;
                    }
                }
            
                if (goblinElder_HP == 0 || goblinElder_HP < 0)
                {
                    std::cout << "CONGRATULATIONS. GAME OVER." << std::endl << std::endl << std::endl << std::endl;
                    std::cout << "As you take your eyes off the screen and blink, you notice a new car battery right beside you. Perhaps someone must have set it there while you were playing the game. You then hear the locking mechanism to the door click and the door the next room opens..." << std::endl;
                }
            
            }
        
        }
    
        if (playerDecision == 2)
        {
            while (goblinElder_HP > 0)
            {
                std::cout << "1.) Sword Attack " << std::endl;
                std::cout << "2.) Raise Shield " << std::endl;
                std::cout << "3.) Power Attack " << std::endl;
                std::cin >> playerDecision;

                if (playerDecision == 1)
                {
                    swordAttack = rand()%11+10;
                    std::cout << "You strike the goblin with your sword and deal " << swordAttack << " damage. ";
                    goblinElder_HP = goblinElder_HP - swordAttack;
                    std::cout << "The goblin has " << goblinElder_HP << " health left." << std::endl << std::endl;

                    if (goblinElder_HP > 0)
                    {
                        goblinDamage = rand()%11+1;
                        std::cout << "The goblin punches you and you take " << goblinDamage << " damage. ";
                        playerHP = playerHP - goblinDamage;
                        std::cout << "You have " << playerHP << " health left." << std::endl;
                    }
                }
                
                if (playerDecision == 2)
                {
                    std::cout << "You raise your shield in defense and take no damage. ";
                    std::cout << "You have " << playerHP << " health left." << std::endl << std::endl;
                }
                
                if (playerDecision == 3)
                {
                    powerCharge = powerCharge-1;
                    if (powerCharge > 0)
                    {
                        powerAttack = rand()%16+15;
                        std::cout << "You swing a power attack at the goblin and deal " << powerAttack << " damage. ";
                        goblinElder_HP = goblinElder_HP-powerAttack;
                        std::cout << "You have " << powerCharge << " power attacks left." << std::endl;
                        std::cout << "The goblin has " << goblinElder_HP << " health left." << std::endl << std::endl;

                        if (goblinElder_HP > 0)
                        {
                            goblinDamage = rand()%11+1;
                            std::cout << "The goblin punches you and you take " << goblinDamage << " damage. ";
                            playerHP = playerHP - goblinDamage;
                            std::cout << "You have " << playerHP << " health left." << std::endl;
                        }
                    }
                    
                    else if (powerCharge <= 0)
                    {
                        std::cout << "You are too exhausted to use the power attack! You may recharge once you get a chance to rest." << std::endl;
                    }
                }
                if (goblinElder_HP == 0 || goblinElder_HP < 0)
                {
                    std::cout << "CONGRATULATIONS. GAME OVER." << std::endl << std::endl << std::endl << std::endl;
                    std::cout << "As you take your eyes off the screen and blink, you notice a new car battery right beside you. Perhaps someone must have set it there while you were playing the game. You then hear the locking mechanism to the door click and the door the next room opens..." << std::endl;
                }
                
            }
        }
    
    std::cout << "[Placeholder Text] - Testing..." << std::endl;
}
		
}
}
}
