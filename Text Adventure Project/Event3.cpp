#include "Event3.h"

Event3::Event3()
{
	{
    int playerDecision;

    cout << "In the center of the room there is a table on the computer with it. You notice that it is running some sort of video game right now. You take a look at the door and notice that it has some sort of complex locking mechanism." << endl;
    cout << "1.) Try to pick the lock of the door" << endl;
    cout << "2.) Play the video game." << endl;
    cin >> playerDecision;
 
if (playerDecision == 1)
{
    //Number of rounds a player must go through
    int rounds = 5;
    int lockPuzzle;
    srand(int (time(0)));
    cout << "You approach the door to the next room and examine the lock. You think you can pick the lock with two paperclips." << endl;
    cout << "You place both paperclips into the locking mechanism." << endl;
    

        for (int i = 1; i <= rounds; i++)
        {
            lockPuzzle = rand()%32+1;
            cout << "1.) Move your paper clips a centimeter higher." << endl;
            cout << "2.) Move your paperclips a centimeter lower." << endl;
            cout << "3.) Twist the paperclips around." << endl;
            cin >> playerDecision;
            if (playerDecision > lockPuzzle)
            {
                cout << "Your paperclips gets stuck!" << endl;
                i--;
            }
            
            else if (playerDecision < lockPuzzle)
            {
                cout << "Your fingers cramp up and you make no progress!" << endl;
                i--;
            }
            
            else if (playerDecision == lockPuzzle)
            {
                cout << "You feel as though you are making progress..." << endl;
            }

        }
        cout << "You have successfully picked the lock to the door! You open it and it leads into a closet housing a car battery. Just what you need! There appears to be another door in the closet. You open it and enter the next room..." << endl;
    
    
}
    
if (playerDecision == 2)
{
    //Player character's name
    string playerName;
    //Player's HP & Damage Multipliers
    int playerHP = 100;
    srand(int (time(0))); //Seed randomizer for damage
    int swordAttack;
    int powerAttack;
    //Enemy Combatant HP & Damage Multipliers
    int goblinElder_HP = 60;
    int goblinDamage;
    
    cout << "You approach the computer and take a seat." << endl << endl << endl;
    cout << "'WELCOME TO OGRE HUNTER. IF YOU WANT TO ESCAPE THIS ROOM, THEN YOU WILL HAVE TO BEAT THIS GAME.' " << endl;
    cout << "Please enter your username: ";
    cin >> playerName;
    cout << endl << endl;
    cout << "Welcome to Ogre Hunter, " << playerName << "." << endl << endl;
    cout << "You are a knight of the Five Realms. As you are resting in your quarters, your squire awakens you to alert you of the king's presence. The King walks up to you and speaks, 'You must rescue my daughter from Sir Mordred and his evil knights. Do so, and you will be rewarded handsomely. But you must go alone. I do not want you to attract too much attention.'" << endl << endl << endl;
    cout << "You make haste and find yourself in the Haunted Valley, the land of the goblins." << endl;
    cout << "You stumble upon an elderly goblin in your path." << endl << endl << endl;
    cout << "Goblin Elder: 'Answer my riddle and I shall move.' " << endl;
    cout << "1.) 'I accept your challenge! Give me the riddle!' " << endl;
    cout << "2.) 'I don't have time for this. Die!' " << endl;
    cin >> playerDecision;
    
        if (playerDecision == 1)
        {
            cout << "GOBLIN ELDER: 'Weight in my belly, trees on my back, nails in my ribs, feet I do lack. What am I?'" << endl;
            cout << "1.) Ship" << endl;
            cout << "2.) Toolbox" << endl;
            cout << "3.) House" << endl;
            cin >> playerDecision;
            cout << endl << endl;
    
    
            while (playerDecision != 1)
            {
                cout << "GOBLIN ELDER: 'Wrong! You're pretty bad at this. Why don't you try again?'" << endl << endl;
                cin >> playerDecision;
            }
    
            if (playerDecision == 1)
            {
                cout << "GOBLIN ELDER: 'You humans never learn! You should never trust a goblin!'" << endl << endl;
            }
            goblinDamage = rand()%11+1;
            cout << "The goblin punches you and you take " << goblinDamage << " damage. ";
            playerHP = playerHP - goblinDamage;
            cout << "You have " << playerHP << " health left." << endl;

            while (goblinElder_HP > 0)
            {
                cout << "1.) Sword Attack " << endl;
                cout << "2.) Raise Shield " << endl;
                cout << "3.) Power Attack " << endl;
                cin >> playerDecision;
            
                if (playerDecision == 1)
                {
                    swordAttack = rand()%11+10;
                    cout << "You strike the goblin with your sword and deal " << swordAttack << " damage. ";
                    goblinElder_HP = goblinElder_HP - swordAttack;
                    cout << "The goblin has " << goblinElder_HP << " health left." << endl << endl;
                
                    if (goblinElder_HP > 0)
                    {
                        goblinDamage = rand()%11+1;
                        cout << "The goblin punches you and you take " << goblinDamage << " damage. ";
                        playerHP = playerHP - goblinDamage;
                        cout << "You have " << playerHP << " health left." << endl;
                    }
                }
            
                if (playerDecision == 2)
                {
                    cout << "You raise your shield in defense and take no damage. ";
                    cout << "You have " << playerHP << " health left." << endl << endl;
                }
            
                if (playerDecision == 3)
                {
                    powerAttack = rand()%16+15;
                    cout << "You swing a power attack at the goblin and deal " << powerAttack << " damage. ";
                    goblinElder_HP = goblinElder_HP-powerAttack;
                    cout << "The goblin has " << goblinElder_HP << " health left." << endl << endl;
                    if (goblinElder_HP > 0)
                    {
                        goblinDamage = rand()%11+1;
                        cout << "The goblin punches you and you take " << goblinDamage << " damage. ";
                        playerHP = playerHP - goblinDamage;
                        cout << "You have " << playerHP << " health left." << endl;
                    }
                }
            
                if (goblinElder_HP == 0 || goblinElder_HP < 0)
                {
                    cout << "CONGRATULATIONS. GAME OVER." << endl << endl << endl << endl;
                    cout << "As you take your eyes off the screen and blink, you notice a new car battery right beside you. Perhaps someone must have set it there while you were playing the game. You then hear the locking mechanism to the door click and the door the next room opens..." << endl;
                }
            
            }
        
        }
    
        if (playerDecision == 2)
        {
            while (goblinElder_HP > 0)
            {
                cout << "1.) Sword Attack " << endl;
                cout << "2.) Raise Shield " << endl;
                cout << "3.) Power Attack " << endl;
                cin >> playerDecision;
                
                if (playerDecision == 1)
                {
                    swordAttack = rand()%11+10;
                    cout << "You strike the goblin with your sword and deal " << swordAttack << " damage. ";
                    goblinElder_HP = goblinElder_HP - swordAttack;
                    cout << "The goblin has " << goblinElder_HP << " health left." << endl << endl;
                    
                    if (goblinElder_HP > 0)
                    {
                        goblinDamage = rand()%11+1;
                        cout << "The goblin punches you and you take " << goblinDamage << " damage. ";
                        playerHP = playerHP - goblinDamage;
                        cout << "You have " << playerHP << " health left." << endl;
                    }
                }
                
                if (playerDecision == 2)
                {
                    cout << "You raise your shield in defense and take no damage. ";
                    cout << "You have " << playerHP << " health left." << endl << endl;
                }
                
                if (playerDecision == 3)
                {
                    powerAttack = rand()%16+15;
                    cout << "You swing a power attack at the goblin and deal " << powerAttack << " damage. ";
                    goblinElder_HP = goblinElder_HP-powerAttack;
                    cout << "The goblin has " << goblinElder_HP << " health left." << endl << endl;
                    if (goblinElder_HP > 0)
                    {
                        goblinDamage = rand()%11+1;
                        cout << "The goblin punches you and you take " << goblinDamage << " damage. ";
                        playerHP = playerHP - goblinDamage;
                        cout << "You have " << playerHP << " health left." << endl;
                    }
                }
                
                if (goblinElder_HP == 0 || goblinElder_HP < 0)
                {
                    cout << "CONGRATULATIONS. GAME OVER." << endl << endl << endl << endl;
                    cout << "As you take your eyes off the screen and blink, you notice a new car battery right beside you. Perhaps someone must have set it there while you were playing the game. You then hear the locking mechanism to the door click and the door the next room opens..." << endl;
                }
                
            }
        }
    
    cout << "[Placeholder Text] - Testing..." << endl;
}
	
}

void Event3::runEvent()
{
	std::cout << "Running event 3" << std::endl;
}
