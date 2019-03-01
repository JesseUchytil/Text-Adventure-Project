#include "Event3.h"

Event3::Event3()
{
	
}

/**
 The clear function that wipes the screen after each output to make it look cleaner is credited to the user "Handge" (c. 2017) where it was used in his ACII text-based adventure game that was uploaded to Code Review.
    https://codereview.stackexchange.com/questions/172170/ascii-text-based-rpg-game-in-c
*/
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

    for (int i = 1; i <= rounds;)
        {
            std::cout << "1.) Twist your paperclip by ONE centimeter." << std::endl;
            std::cout << "2.) Twist your paperclip by TWO centimeters." << std::endl;
            std::cout << "3.) Twist the paperclips by THREE degrees around." << std::endl;
            std::cout << "4.) Twist the paperclips counterclockwise FOUR centimeters." << std::endl;
            std::cout << "5.) Twist paperclips FIVE centimeters clockwise." << std::endl;
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
    int ghost_HP = 80;
    int ghostDamage;
    int trollHP = 150;
    int trollDamage;
    int trollPowerAttack = 0;
    int king_HP = 120;
    int kingDamage;
    int kingPowerAttack = 0;
    int ghostDecision;
    
    std::cout << "You approach the computer and take a seat." << std::endl << std::endl << std::endl;
    std::cout << "'WELCOME TO CRUSADE QUEST. IF YOU WANT TO ESCAPE THIS ROOM, THEN YOU WILL HAVE TO BEAT THIS GAME.' " << std::endl;
    std::cout << "Please enter your username: ";

    std::cin >> playerName;
    clear();
    std::cout << "Welcome to Crusade Quest, " << playerName << "." << std::endl << std::endl;

    std::cout << "You are a knight of the Five Realms. Your mission is to rescue the king's daughter from an evil troll. If you succeed, you will be rewarded." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;


    std::cout << "You make haste and find yourself in the Haunted Valley, the land of the goblins." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;

    std::cout << "You stumble upon an elderly goblin in your path." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;

    std::cout << " 'Answer my riddle and I shall move.' " << std::endl;

    std::cout << "1.) 'I accept your challenge! Give me the riddle!' " << std::endl;
    std::cout << "2.) 'I don't have time for this. Die!' " << std::endl;

    std::cin >> playerDecision;
    clear();
    
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
                clear();

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
                    std::cout << "Congratulations! You have defeated the goblin elder. You loot the goblin's backpack and find some alchemical ingredients. This might be useful later. You may now proceed to the next area." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
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
                clear();

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
                    std::cout << "Congratulations! You have defeated the goblin elder. You loot the goblin's backpack and find some alchemical ingredients. This might be useful later. You may now proceed to the next area." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
                }
            }
        }
    std::cout << "After travelling for several hours, you decide to make camp and rest. Your HP and power attacks have been replenished." << std::endl;
    powerCharge = 3;
    playerHP = 100;
    
    std::cout << "You awaken to the sound of a twig snapping. You trace the sound to some bushes." << std::endl;
    std::cout << "1.) Attack the bushes." << std::endl;
    std::cout << "2.) Ignore the sound." << std::endl;
    std::cin >> playerDecision;
    clear();
    
    if (playerDecision == 1)
    {
        std::cout << "You attack the bushes and you find yourself pricked by some thorny undergrowth! You lose 15 HP." << std::endl;
        playerHP = 85;
    }
    
    if (playerDecision == 2)
    {
        std::cout << "You decide to ignore the bushes and investigate later in the morning. Upon awakening, you discover that the bushes were covered in thorns. You are glad you did not attack the bushes last night." << std::endl;
    }
    
    std::cout << "You find yourself in the Creaking Woods, the land of liars and supernatural." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
    
    std::cout << "You come across the ghost. The ghost looks at you and waves his hand at you. You are not sure if he is hostile or friendly. You best make a decision quickly!" << std::endl;
    
    std::cout << "1.) Attack the ghost." << std::endl;
    std::cout << "2.) See what the ghost wants." << std::endl;
    std::cin >> playerDecision;
    clear();
    
    if (playerDecision == 1)
    {
        while (ghost_HP > 0)
        {
            std::cout << "1.) Sword Attack " << std::endl;
            std::cout << "2.) Raise Shield " << std::endl;
            std::cout << "3.) Power Attack " << std::endl;
            std::cin >> playerDecision;
            clear();

            if (playerDecision == 1)
            {
                swordAttack = rand()%11+10;
                std::cout << "You strike the ghost with your sword and deal " << swordAttack << " damage. ";
                ghost_HP = ghost_HP - swordAttack;
                std::cout << "The ghost has " << ghost_HP << " health left." << std::endl << std::endl;
                
                if (ghost_HP > 0)
                {
                    ghostDamage = rand()%15+1;
                    std::cout << "The ghost attacks you and you take " << ghostDamage << " damage. ";
                    playerHP = playerHP - ghostDamage;
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
                    std::cout << "You swing a power attack at the ghost and deal " << powerAttack << " damage. ";
                    ghost_HP = ghost_HP-powerAttack;
                    std::cout << "You have " << powerCharge << " power attacks left." << std::endl;
                    std::cout << "The ghost has " << ghost_HP << " health left." << std::endl << std::endl;
                    if (ghost_HP > 0)
                    {
                        ghostDamage = rand()%15+1;
                        std::cout << "The ghost punches you and you take " << ghostDamage << " damage. ";
                        playerHP = playerHP - ghostDamage;
                        std::cout << "You have " << playerHP << " health left." << std::endl;
                    }
                }
                
                if (powerCharge <= 0)
                {
                    std::cout << "You are too exhausted to use the power attack! You may recharge once you get a chance to rest." << std::endl;
                }
            }
            
            if (ghost_HP == 0 || ghost_HP < 0)
            {
                std::cout << "Congratulations! You have defeated the ghost. The ghost appears to have dropped a book. You read it and gain the useful knowledge within it. Your maximum power attack charges raises from 3 to 5! You may now proceed to the next area." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
                
                std::cout << "After the battle, you eat some rations from your backpack and replenish your health and power attack charges." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
                playerHP = 100;
                powerCharge = 5;
                ghostDecision = 1;
            }
        }
    }
    
    if (playerDecision == 2)
    {
        std::cout << "The ghost continues waving his hand at you." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
        std::cout << " 'Thank you for not attacking me. However, you should know by now that you are in the land of liars and backstabbers! Now you will suffer the consequences!' " << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
        std::cout << "The ghost drains your power attack. Your maximum power attack charge of 3 now drops to 2. Before you are able to react, the ghost disappears." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
        powerCharge = 2;
        ghostDecision = 2;
    }
    
    std::cout << "As you make your way through the forest, you arrive in front of an ancient stone door on the side of a mountain." << std::endl;
    
    std::cout << "1.) Examine the door." << std::endl;
    std::cout << "2.) Punch the door." << std::endl;
    std::cin >> playerDecision;
    clear();
    
    if (playerDecision == 1)
    {
        std::cout << "The door looks like it is locked with an intricate puzzle. You read the inscriptions on the door and decipher it. It appears as though you can unlock it with some basic chemical compounds." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
    }
    
    if (playerDecision == 2)
    {
        std::cout << "You trigger the chemical trap on the door and you take 10 damage!" << std::endl;
        std::cout << "However, you believe the door can be unlocked with some basic chemical compounds." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
        int trapDamage = 10;
        playerHP = playerHP-trapDamage;
    }
    
    std::cout << "The inscription on the door reads 'S_di_m Clor_de'...It looks like you will have to mix two incredits together and pour it on the door to unlock it." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
    std::cout << "You reach into the backpack you looted from the goblin earlier and pull out the chemicals you think are relevant. However, the incredits are labelled in abbrieviations instead of their scientific name. You will have to think carefully because you will likely take damage if you are wrong!" <<std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
    std::cout << "You divide the six chemicals into two sections. Three of them are solids and the other three appear to be liquid." <<std::endl;

    int chemicalCompound = 0;
    int chemicalDamage = 3;
    int attempts = 0;
    
    while (chemicalCompound != 2)
    {
        std::cout << "The door inscription reads: ''S_di_m Clor_de' " << std::endl << std::endl;
        std::cout << "1.) Na" << std::endl;
        std::cout << "2.) Fe" << std::endl;
        std::cout << "3.) K" <<  std::endl;
        cin >> playerDecision;
        clear();
        
        if (playerDecision == 1)
        {
            std::cout << "What chemical would you like to mix 'Na' with?" << std::endl;
            std::cout << "4.) Fl" << std::endl;
            std::cout << "5.) Cl" << std::endl;
            std::cout << "6.) Br" << std::endl;
            cin >>playerDecision;
            clear();
            
            if (playerDecision == 4)
            {
                std::cout << "You mix Na and Fl together and create NaFl. You pour it into the door and take 3 damage! Try again." << std::endl;
                chemicalCompound = 1;
                playerHP = playerHP - chemicalDamage;
                attempts = attempts+1;
            }
            
            if (playerDecision == 5)
            {
                std::cout << "You mix Na and Cl together and create NaCl. You pour it into the door and it unlocks!" << std::endl;
                chemicalCompound = 2;
                attempts = 0;
            }
            
            if (playerDecision == 6)
            {
                std::cout << "You mix Na and Br together and create NaBr. You pour it into the door and take 3 damage! Try again." << std::endl;
                chemicalCompound = 3;
                playerHP = playerHP - chemicalDamage;
                attempts = attempts+1;
            }
        }
        
        if (playerDecision == 2)
        {
            std::cout << "What chemical would you like to mix 'Fe' with?" << std::endl;
            std::cout << "4.) Fl" << std::endl;
            std::cout << "5.) Cl" << std::endl;
            std::cout << "6.) Br" << std::endl;
            cin >>playerDecision;
            clear();

            if (playerDecision == 4)
            {
                std::cout << "You mix Fe and Fl together and create FeFl. You pour it into the door and take 3 damage! Try again." << std::endl;
                chemicalCompound = 4;
                playerHP = playerHP - chemicalDamage;
                attempts = attempts+1;
            }
            
            if (playerDecision == 5)
            {
                std::cout << "You mix Fe and Cl together and create FeCl. You pour it into the door take 3 damage! Try again." << std::endl;
                chemicalCompound = 5;
                playerHP = playerHP - chemicalDamage;
                attempts = attempts+1;
            }
            
            if (playerDecision == 6)
            {
                std::cout << "You mix Fe and Br together and create FeBr. You pour it into the door and take 3 damage! Try again." << std::endl;
                chemicalCompound = 6;
                playerHP = playerHP - chemicalDamage;
                attempts = attempts+1;
            }
        }
        
        if (playerDecision == 3)
        {
            std::cout << "What chemical would you like to mix 'K' with?" << std::endl;
            std::cout << "4.) Fl" << std::endl;
            std::cout << "5.) Cl" << std::endl;
            std::cout << "6.) Br" << std::endl;
            cin >>playerDecision;
            clear();

            if (playerDecision == 4)
            {
                std::cout << "You mix K and Fl together and create KFl. You pour it into the door and take 3 damage! Try again." << std::endl;
                chemicalCompound = 7;
                playerHP = playerHP - chemicalDamage;
                attempts = attempts+1;
            }
            
            if (playerDecision == 5)
            {
                std::cout << "You mix K and Cl together and create KCl. You pour it into the take 3 damage! Try again." << std::endl;
                chemicalCompound = 8;
                playerHP = playerHP - chemicalDamage;
                attempts = attempts+1;
            }
            
            if (playerDecision == 6)
            {
                std::cout << "You mix K and Br together and create KBr. You pour it into the door and take 3 damage! Try again." << std::endl;
                chemicalCompound = 9;
                playerHP = playerHP - chemicalDamage;
                attempts = attempts+1;
            }
        }
        
        if (attempts == 3)
        {
            std::cout << "You seem to be having a trouble! You take a step back and recall that 'K' is Potassium. Don't give up!" << std::endl;
        }
        
        if (attempts == 4)
        {
            std::cout << "You seem to be having a trouble! You take a step back and recall that 'Fe' is Iron. Don't give up!" << std::endl;
        }
        
        if (attempts == 5)
        {
            std::cout << "You seem to be having a trouble! You take a step back and recall that 'Cl' is Chloride. Don't give up!" << std::endl;
        }
        
        if (attempts == 6)
        {
            std::cout << "You seem to be having a trouble! You take a step back and recall that 'Br' is Bromide. Don't give up!" << std::endl;
        }
    }
    
    std::cout << "You open the door and traverse through the tunnels of the mountain. You reach the exit and arrive at the Princess' Tower." <<std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
    
    std::cout << "Then you notice the troll. The troll is wearing the princess' dress." <<std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
    
    std::cout << "1.) 'Hand over the princess!' " << std::endl;
    std::cout << "2.) 'Why are you wearing the princess' dress?!' " << std::endl;
    cin >> playerDecision;
    clear();
    
    if (playerDecision == 1 || playerDecision == 2)
    {
        std::cout << " 'Foolish knight. There is no princess. Your king has betrayed you. Now you will die!' " <<std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
    }
    
    while (trollHP > 0)
    {
        std::cout << "1.) Sword Attack " << std::endl;
        std::cout << "2.) Raise Shield " << std::endl;
        std::cout << "3.) Power Attack " << std::endl;
        std::cin >> playerDecision;
        clear();
        
        if (playerDecision == 1)
        {
            swordAttack = rand()%11+10;
            std::cout << "You strike the troll with your sword and deal " << swordAttack << " damage. ";
            trollHP = trollHP - swordAttack;
            std::cout << "The troll has " << trollHP << " health left." << std::endl << std::endl;
            
            if (trollHP > 0)
            {
                if (trollPowerAttack < 4)
                {
                    std::cout << "The troll seems exhausted and his conserving his energy for his attack!" << std::endl;
                    std::cout << "You have " << playerHP << " health left." << std::endl;
                    trollPowerAttack = trollPowerAttack + 1;
                }
                
                if (trollPowerAttack == 4)
                {
                    trollDamage = rand()%12+10;
                    std::cout << "The troll attacks you and you take " << trollDamage << " damage.";
                    playerHP = playerHP - trollDamage;
                    std::cout << "You have " << playerHP << " health left." << std::endl;
                    trollPowerAttack = 0;
                }
            }
        }
        
        if (playerDecision == 2)
        {
            if (trollHP > 0)
            {
                if (trollPowerAttack < 4)
                {
                    std::cout << "The troll seems exhausted and his conserving his energy for his attack!" << std::endl;
                    std::cout << "You have " << playerHP << " health left." << std::endl;
                    trollPowerAttack = trollPowerAttack + 1;
                }
                
                if (trollPowerAttack == 4)
                {
                    std::cout << "The troll attacks you...However, you raised your shield just in time!" << std::endl;
                    std::cout << "You have " << playerHP << " health left." << std::endl;
                    trollPowerAttack = 0;
                }
            }
        }
        
        if (playerDecision == 3)
        {
            powerCharge = powerCharge-1;
            if (powerCharge > 0)
            {
                powerAttack = rand()%16+15;
                std::cout << "You swing a power attack at the troll and deal " << powerAttack << " damage. ";
                trollHP = trollHP-powerAttack;
                trollDamage =  rand()%12+10;
                std::cout << "You have " << powerCharge << " power attacks left." << std::endl;
                std::cout << "The troll has " << trollHP << " health left." << std::endl << std::endl;
                if (trollHP > 0)
                {
                    if (trollPowerAttack < 4)
                    {
                        std::cout << "The troll seems exhausted and his conserving his energy for his attack!" << std::endl;
                        std::cout << "You have " << playerHP << " health left." << std::endl;
                        trollPowerAttack = trollPowerAttack + 1;
                    }
                    
                    if (trollPowerAttack == 4)
                    {
                        trollDamage = rand()%12+10;
                        std::cout << "The troll attacks you and you take " << trollDamage << " damage.";
                        playerHP = playerHP - trollDamage;
                        std::cout << "You have " << playerHP << " health left." << std::endl;
                        trollPowerAttack = 0;
                    }
                }
            }
            
            if (powerCharge <= 0)
            {
                std::cout << "You are too exhausted to use the power attack! You may recharge once you get a chance to rest." << std::endl;
            }
        }
        
        if (trollHP == 0 || trollHP < 0)
        {
            std::cout << "Congratulations! You have defeated the troll." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
            
            std::cout << "After the battle, you eat some rations from your backpack and replenish your health and power attack charges." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
            playerHP = 100;
            
            if (ghostDecision == 1)
            {
                powerCharge = 5;
            }
            
            if (ghostDecision == 2)
            {
                powerCharge = 2;
            }
        }
        
        if(playerHP <0 || playerHP == 0)
        {
            std::cout << "Despite losing all of your HP, you feel as though a mysterious force beyond your control wishes for you to continue your quest. Your HP is replenished to 100." << std::endl;
            playerHP = 100;
            
            if (ghostDecision == 1)
            {
                powerCharge = 5;
            }
            
            if (ghostDecision == 2)
            {
                powerCharge = 2;
            }
        }
    }

    std::cout << "You defeat the troll and begin your long journey back to your Kingdom to confront the King for his betryal." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
    
    std::cout << "None of the King's knights stop you and you are allowed passage to the King's throne room. You approach your King." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
    
    std::cout << " 'Welcome home, " << playerName << ". I believe you have many questions. It took decades for me to finally take on the mantle of King. Then I found out you were the true heir. I will not allow some incompotent fool take all of this away from me!" << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
    
    
    while (king_HP > 0)
    {
        std::cout << "1.) Sword Attack " << std::endl;
        std::cout << "2.) Raise Shield " << std::endl;
        std::cout << "3.) Power Attack " << std::endl;
        std::cin >> playerDecision;
        clear();
        
        if (playerDecision == 1)
        {
            swordAttack = rand()%11+10;
            std::cout << "You strike the King with your sword and deal " << swordAttack << " damage. ";
            king_HP = king_HP - swordAttack;
            std::cout << "The King has " << king_HP << " health left." << std::endl << std::endl;
            
            if (king_HP > 0)
            {
                if (kingPowerAttack < 3)
                {
                    kingDamage = rand()%10+1;
                    std::cout << "The King swings his sceptre and you take " << kingDamage << " damage." << std::endl;
                    playerHP = playerHP - kingDamage;
                    std::cout << "You have " << playerHP << " health left." << std::endl;
                    kingPowerAttack = kingPowerAttack + 1;
                }
                
                if (kingPowerAttack == 4)
                {
                    kingDamage = rand()%12+5;
                    std::cout << "The King uses his arcane knowledge and deals " << kingDamage << " magic damage.";
                    playerHP = playerHP - kingDamage;
                    std::cout << "You have " << playerHP << " health left." << std::endl;
                    kingPowerAttack = 0;
                }
            }
        }
        
        if (playerDecision == 2)
        {
            if (king_HP > 0)
            {
                if (kingPowerAttack < 3)
                {
                    std::cout << "The King swings his sceptre...However, you raised your shield just in time!" << std::endl;
                    std::cout << "You have " << playerHP << " health left." << std::endl;
                    kingPowerAttack = kingPowerAttack + 1;
                }
                
                if (kingPowerAttack == 3)
                {
                    std::cout << "The king uses his magic attack...However, you raised your shield just in time!" << std::endl;
                    std::cout << "You have " << playerHP << " health left." << std::endl;
                    kingPowerAttack = 0;
                }
            }
        }
        
        if (playerDecision == 3)
        {
            powerCharge = powerCharge-1;
            if (powerCharge > 0)
            {
                powerAttack = rand()%16+15;
                std::cout << "You swing a power attack at the King and deal " << powerAttack << " damage. ";
                king_HP = king_HP-powerAttack;
                std::cout << "You have " << powerCharge << " power attacks left." << std::endl;
                std::cout << "The King has " << king_HP << " health left." << std::endl << std::endl;
                if (king_HP > 0)
                {
                    if (kingPowerAttack < 3)
                    {
                        kingDamage = rand()%10+1;
                        std::cout << "The King swings his sceptre and you take " << kingDamage << " damage." << std::endl;
                        playerHP = playerHP - kingDamage;
                        std::cout << "You have " << playerHP << " health left." << std::endl;
                        kingPowerAttack = kingPowerAttack + 1;
                    }
                    
                    if (kingPowerAttack == 4)
                    {
                        kingDamage = rand()%12+5;
                        std::cout << "The King uses his arcane knowledge and deals " << kingDamage << " magic damage.";
                        playerHP = playerHP - kingDamage;
                        std::cout << "You have " << playerHP << " health left." << std::endl;
                        kingPowerAttack = 0;
                    }
                }
            }
            
            if (powerCharge <= 0)
            {
                std::cout << "You are too exhausted to use the power attack! You may recharge once you get a chance to rest." << std::endl;
            }
        }
        
        if (king_HP == 0 || king_HP < 0)
        {
            std::cout << "Congratulations! You have defeated the King." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
            playerHP = 100;
            powerCharge = powerCharge;
        }
        
        if(playerHP <0 || playerHP == 0)
        {
            std::cout << "Despite losing all of your HP, you feel as though a mysterious force beyond your control wishes for you to continue your quest. Your HP is replenished to 100." << std::endl;
            playerHP = 100;
        }
    }
    

     std::cout << "CONGRATULATIONS. GAME OVER." << std::endl << std::endl << std::endl << std::endl;
     std::cout << "As you take your eyes off the screen and blink, you notice a new car battery right beside you. Perhaps someone must have set it there while you were playing the game. You then hear the locking mechanism to the door click and the door the next room opens..." << std::endl;
}
		
}
}
}
