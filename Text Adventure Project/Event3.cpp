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
	
//This is Daniel Beenk's room. The player is presented with two choices when entering the room, they can pick the lock to the door or they can play the computer game in the center of the room.
//If the player tries picking the lock, the player will play a tedious but shorter puzzle, they will play an immersive game of guess that random number between 1 and 5. If a player succeeds, they will proceed to the next round.
//In the computer game, the player will be going through a more laidback but longer game of some sorts, there will be puzzles. However, the puzzles will be shorter and more basic. There is combat in the computer game which uses randomly generated numbers. After the player beats the game, they will proceed to the next room.
//Daniel Beenk, February 28 2019, djbeenk@dmacc.edu

	{
		        int playerDecision; //Declararation for player decisions. Player will be giving several prompts and will pick a number based on the decision they wish to make.

    std::cout << "In the center of the room there is a table on the computer with it. You notice that it is running some sort of video game right now. You take a look at the door and notice that it has some sort of complex locking mechanism." << std::endl;
    std::cout << "1.) Try to pick the lock of the door" << std::endl;
    std::cout << "2.) Play the video game." << std::endl;
    std::cin>> playerDecision;
    clear();
 
if (playerDecision == 1) //If player picks decision 1, initiate the lock-picking puzzle
{
    int rounds = 5; //Number of rounds a player must go through
    int lockPuzzle; //Declaration for lock puzzle which will be used to store a randomly generated number 
    srand(int (time(0))); //Seed random generator
    std::cout << "You approach the door to the next room and examine the lock. You think you can pick the lock with two paperclips." << std::endl;
    std::cout << "You place both paperclips into the locking mechanism." << std::endl;
    lockPuzzle = rand()%5+1; //Generate random number between 1 to 5

    for (int i = 1; i <= rounds;) //For statement, for rounds is less than five, continue playing game
        {
            std::cout << "1.) Twist your paperclip by ONE centimeter." << std::endl;
            std::cout << "2.) Twist your paperclip by TWO centimeters." << std::endl;
            std::cout << "3.) Twist the paperclips by THREE degrees around." << std::endl;
            std::cout << "4.) Twist the paperclips counterclockwise FOUR centimeters." << std::endl;
            std::cout << "5.) Twist paperclips FIVE centimeters clockwise." << std::endl;
            std::cin >> playerDecision;
            std::cout << std::endl << std::endl;
            clear();

            if (playerDecision == 1) //If player moves paperclip by 1 centimeter, give output
            {
                std::cout << "You decide to twist the paperclisp by one centimeter...";
            }
            
            if (playerDecision == 2) //If player moves paperclip by 2 centimeters, give output
            {
                std::cout << "You decide to twist your paperclips by two centimeters...";
            }
            
            if (playerDecision == 3) //If player moves paperclip by 3 centimeters, give output
            {
                std::cout << "You decide to twist your paperclips three degrees around...";
            }
            
            if (playerDecision == 4) //If player moves paperclip by 4 centimeters, give output
            {
                std::cout << "You decide to twist your paperclips counterclockwise four centimeters...";
            }
            
            if (playerDecision == 5) //If player moves paperclip by 5 centimeters, give output
            {
                std::cout << "You decide to twist your paperclips clockwise by five centimeters... ";
            }
            if (playerDecision > lockPuzzle) //If paperclip is less than the randomly generated number, alert player that the number they picked is too big and to go lower
            {
                std::cout << "Your paperclips gets stuck! Try lowering the amount of centimeters you're adjusting with your paperclip." << std::endl;
            }
            
            else if (playerDecision < lockPuzzle) //If paperclip is bigger than randomly generated number, alert player that the number they picked is too small and to go bigger
            {
                std::cout << "Your fingers cramp up and you make no progress! Try raising the amount of centimeters you're adjusting with your paperclip." << std::endl;
            }
            
            else if (playerDecision == lockPuzzle) //If player chooses correct randomly generated number, move up to next round and generate new number
            {
                std::cout << "You feel as though you are making progress." << std::endl;
                i++;
                lockPuzzle = rand()%5+1;
            }
        }
    	//After completing five rounds, output final message for user and they may proceed to next room
        std::cout << "You have successfully picked the lock to the door! You open it and it leads into a closet housing a car battery. Just what you need! There appears to be another door in the closet. You open it and enter the next room..." << std::endl;
}
    
if (playerDecision == 2) //If player makes decision 2, initiate the second part of the group which is the computer video game
{
    std::string playerName; //String for player character's name
    int playerHP = 100; //Player character's health points
    srand(int (time(0))); //Seed randomizer for damage
    int swordAttack; //Declaration for basic sword attack which will be used to store a randomly generated number during combat encounters
    int powerAttack; //Declaration for a power attack which will be used to store a randomly generated number during combat encounters
    int powerCharge = 3; //Amount of times a player may use a power attack in a combat encounter
    //Enemy Combatant HP & Damage Multipliers
    int goblinElder_HP = 60; //health points for goblin
    int goblinDamage; //declaration for amount of damage a goblin will do, will store randomly generated number
    int ghost_HP = 80; //health points for ghost
    int ghostDamage; //Declaration for amount of damage a ghost will do
    int trollHP = 150; //health points for troll
    int trollDamage; //Amount of damage a troll will do
    int trollPowerAttack = 0; //Every few rounds, the troll will make an attack, this keeps track of each round before a troll attacks the player
    int king_HP = 120; //health points for king
    int kingDamage; //Amount of damage the king will do
    int kingPowerAttack = 0; //Every few rounds, the king will make a magic attack, this keeps track of each round before king makes magic attack
    int ghostDecision; //When the player encounters the ghost, they will make a crucial decision on whether their power charges raises to 5 or decreases to 2, this stores their decision so I can make a proper if-statement for any future combat encounters
    
    std::cout << "You approach the computer and take a seat." << std::endl << std::endl << std::endl;
    std::cout << "'WELCOME TO CRUSADE QUEST. IF YOU WANT TO ESCAPE THIS ROOM, THEN YOU WILL HAVE TO BEAT THIS GAME.' " << std::endl;
    std::cout << "Please enter your username: ";

    std::cin >> playerName; //Have player enter username
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
    
        if (playerDecision == 1) //If accepts goblin's riddle, have goblin give out the riddle
        {
            std::cout << "GOBLIN ELDER: 'Weight in my belly, trees on my back, nails in my ribs, feet I do lack. What am I?'" << std::endl;
            std::cout << "1.) Ship" << std::endl;
            std::cout << "2.) Toolbox" << std::endl;
            std::cout << "3.) House" << std::endl;
            std::cin >> playerDecision;
            std::cout << std::endl << std::endl;

            while (playerDecision != 1) //If player's decision is not 1.) Ship, have goblin tell player to try again
            {
                std::cout << "GOBLIN ELDER: 'Wrong! You're pretty bad at this. Why don't you try again?'" << std::endl << std::endl;
                std::cin >> playerDecision;
            }
    
            if (playerDecision == 1) //If player's decision is 1.)Ship, have goblin taunt player before attacking them
            {
                std::cout << "GOBLIN ELDER: 'You humans never learn! You should never trust a goblin!'" << std::endl << std::endl;
            }
            goblinDamage = rand()%11+1; //Goblin will do random amount of damage to player
            std::cout << "The goblin punches you and you take " << goblinDamage << " damage. ";
            playerHP = playerHP - goblinDamage;
            std::cout << "You have " << playerHP << " health left." << std::endl;

            while (goblinElder_HP > 0) //While goblin's health is over zero, continue the combat encounter
            {
                std::cout << "1.) Sword Attack " << std::endl;
                std::cout << "2.) Raise Shield " << std::endl;
                std::cout << "3.) Power Attack " << std::endl;
                std::cin >> playerDecision;
                clear();

                if (playerDecision == 1) //If player makes decision 1, do basic sword attack 
                {
                    swordAttack = rand()%11+10;
                    std::cout << "You strike the goblin with your sword and deal " << swordAttack << " damage. ";
                    goblinElder_HP = goblinElder_HP - swordAttack; //Subtract damage from sword attack from goblin health
                    std::cout << "The goblin has " << goblinElder_HP << " health left." << std::endl << std::endl;

                    if (goblinElder_HP > 0) //If goblin's health is greater than one, have goblin attack player
                    {
                        goblinDamage = rand()%11+1;
                        std::cout << "The goblin punches you and you take " << goblinDamage << " damage. ";
                        playerHP = playerHP - goblinDamage; //Subtract goblin damage from player health
                        std::cout << "You have " << playerHP << " health left." << std::endl;
                    }
                }
            
                if (playerDecision == 2) //If player makes decision 2, take no damage
                {
                    std::cout << "You raise your shield in defense and take no damage. ";
                    std::cout << "You have " << playerHP << " health left." << std::endl << std::endl;
                }
            
                if (playerDecision == 3) //If player makes decision 3, initiate power attack sequence
                {
                    powerCharge = powerCharge-1; //Subtract power charge after making decision 3
                    if (powerCharge > 0) //As long as power charge is greater than zero, continue power attack sequence
                    {
                        powerAttack = rand()%16+15; //Bigger random generated number means bigger damage!
                        std::cout << "You swing a power attack at the goblin and deal " << powerAttack << " damage. ";
                        goblinElder_HP = goblinElder_HP-powerAttack;
                        std::cout << "You have " << powerCharge << " power attacks left." << std::endl;
                        std::cout << "The goblin has " << goblinElder_HP << " health left." << std::endl << std::endl;
                        if (goblinElder_HP > 0) //If goblin HP is greater than zero, have goblin attack player
                        {
                            goblinDamage = rand()%11+1;
                            std::cout << "The goblin punches you and you take " << goblinDamage << " damage. ";
                            playerHP = playerHP - goblinDamage;
                            std::cout << "You have " << playerHP << " health left." << std::endl;
                        }
                    }
                    
                    if (powerCharge <= 0) //If power attack is less than or equal to zero, tell player that they are too exhausted to use more power attacks
                    {
                        std::cout << "You are too exhausted to use the power attack! You may recharge once you get a chance to rest." << std::endl;
                    }
                }
            
                if (goblinElder_HP == 0 || goblinElder_HP < 0) //If goblin health reaches zero or less than zero, tell player that they have won
                {
                    std::cout << "Congratulations! You have defeated the goblin elder. You loot the goblin's backpack and find some alchemical ingredients. This might be useful later. You may now proceed to the next area." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
                }
            }
        }
    
        if (playerDecision == 2) //If player decides to attack goblin instead of hearing its riddle, initiate the combat sequence.
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
    powerCharge = 3; //Reset power charges
    playerHP = 100; //Reset player health points
    
    std::cout << "You awaken to the sound of a twig snapping. You trace the sound to some bushes." << std::endl;
    std::cout << "1.) Attack the bushes." << std::endl;
    std::cout << "2.) Ignore the sound." << std::endl;
    std::cin >> playerDecision;
    clear();
    
    if (playerDecision == 1) //If player attacks bushes, they will lose 15 hp
    {
        std::cout << "You attack the bushes and you find yourself pricked by some thorny undergrowth! You lose 15 HP." << std::endl;
        playerHP = 85;
    }
    
    if (playerDecision == 2) //If player ignores the bushes, they will not lose any health points
    {
        std::cout << "You decide to ignore the bushes and investigate later in the morning. Upon awakening, you discover that the bushes were covered in thorns. You are glad you did not attack the bushes last night." << std::endl;
    }
    
    std::cout << "You find yourself in the Creaking Woods, the land of liars and supernatural." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
    
    std::cout << "You come across the ghost. The ghost looks at you and waves his hand at you. You are not sure if he is hostile or friendly. You best make a decision quickly!" << std::endl;
    
    std::cout << "1.) Attack the ghost." << std::endl;
    std::cout << "2.) See what the ghost wants." << std::endl;
    std::cin >> playerDecision;
    clear();
    
    if (playerDecision == 1) //If player attacks ghost, initiate the combat sequence
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
                playerHP = 100; //Restore player health points to full
                powerCharge = 5; //Raise power charges to 5 because player has defeated the ghost and was rewarded with new knowledge
                ghostDecision = 1; //Store this decision as '1' so any future combat encounters will require an if-statement that keeps the power charges at 5 rather than 3
            }
        }
    }
    
    if (playerDecision == 2) //If player makes decision 2, they will lose a power charge permanently for being too trusting
    {
        std::cout << "The ghost continues waving his hand at you." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
        std::cout << " 'Thank you for not attacking me. However, you should know by now that you are in the land of liars and backstabbers! Now you will suffer the consequences!' " << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
        std::cout << "The ghost drains your power attack. Your maximum power attack charge of 3 now drops to 2. Before you are able to react, the ghost disappears." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
        powerCharge = 2; //Power charge permanently set to 2
        ghostDecision = 2; //Store decision as '2' so any future combat encounters will require an if-statement that keeps track of power charges at 2 rather than 3
    }
    
    std::cout << "As you make your way through the forest, you arrive in front of an ancient stone door on the side of a mountain." << std::endl;
    
    std::cout << "1.) Examine the door." << std::endl;
    std::cout << "2.) Punch the door." << std::endl;
    std::cin >> playerDecision;
    clear();
    
    if (playerDecision == 1) //If player examines puzzle, they will not take damage
    {
        std::cout << "The door looks like it is locked with an intricate puzzle. You read the inscriptions on the door and decipher it. It appears as though you can unlock it with some basic chemical compounds." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
    }
    
    if (playerDecision == 2) //If player punches puzzle, they will take 10 damage
    {
        std::cout << "You trigger the chemical trap on the door and you take 10 damage!" << std::endl;
        std::cout << "However, you believe the door can be unlocked with some basic chemical compounds." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
        int trapDamage = 10; //Store amount of damage the trap does to trapDamage
        playerHP = playerHP-trapDamage; //Subtract trap damage from player health
    }
    
    std::cout << "The inscription on the door reads 'S_di_m Clor_de'...It looks like you will have to mix two incredits together and pour it on the door to unlock it." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
    std::cout << "You reach into the backpack you looted from the goblin earlier and pull out the chemicals you think are relevant. However, the incredits are labelled in abbrieviations instead of their scientific name. You will have to think carefully because you will likely take damage if you are wrong!" <<std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
    std::cout << "You divide the six chemicals into two sections. Three of them are solids and the other three appear to be liquid." <<std::endl;

    int chemicalCompound = 0; //EAch chemical compound has a different number. This will store the different compounds' numbers
    int chemicalDamage = 3; //Store amount of damage the chemicals do to chemicalDamage and set it to 3 damage
    int attempts = 0; //Store number of attempts a player makes. If a player makes a certain number of attempts without success, give out different hints based on number of attempts
    
    while (chemicalCompound != 2) //While chemical compound is not 2, continue the puzzle
    {
        std::cout << "The door inscription reads: ''S_di_m Clor_de' " << std::endl << std::endl;
        std::cout << "1.) Na" << std::endl;
        std::cout << "2.) Fe" << std::endl;
        std::cout << "3.) K" <<  std::endl;
        std::cin >> playerDecision;
        clear();
        
        if (playerDecision == 1) //If player chooses Na, they will have to mix it with a physical chemical to create a new compound
        {
            std::cout << "What chemical would you like to mix 'Na' with?" << std::endl;
            std::cout << "4.) Fl" << std::endl;
            std::cout << "5.) Cl" << std::endl;
            std::cout << "6.) Br" << std::endl;
            std::cin >>playerDecision;
            clear();
            
            if (playerDecision == 4) //If player mixes Na with Fl, they will take damage 
            {
                std::cout << "You mix Na and Fl together and create NaFl. You pour it into the door and take 3 damage! Try again." << std::endl;
                chemicalCompound = 1; //NaFl is represented by 1
                playerHP = playerHP - chemicalDamage;
                attempts = attempts+1; //Raise number of attempts by 1
            }
            
            if (playerDecision == 5) //If player mixes Na with Cl, the door will unlock
            {
                std::cout << "You mix Na and Cl together and create NaCl. You pour it into the door and it unlocks!" << std::endl;
                chemicalCompound = 2; //NaCl is represented by 2 in chemicalCompound
                attempts = 0;
            }
            
            if (playerDecision == 6) //If player mixes Na with Br, they will take damage
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
            std::cin >>playerDecision;
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
            std::cin >>playerDecision;
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
        
        if (attempts == 3) //If player makes 3 attempts without beating puzzle, give out first hint
        {
            std::cout << "You seem to be having a trouble! You take a step back and recall that 'K' is Potassium. Don't give up!" << std::endl;
        }
        
        if (attempts == 4) //Give out second hint
        {
            std::cout << "You seem to be having a trouble! You take a step back and recall that 'Fe' is Iron. Don't give up!" << std::endl;
        }
        
        if (attempts == 5) //Give out third hint
        {
            std::cout << "You seem to be having a trouble! You take a step back and recall that 'Cl' is Chloride. Don't give up!" << std::endl;
        }
        
        if (attempts == 6) //Give out fourth hint
        {
            std::cout << "You seem to be having a trouble! You take a step back and recall that 'Br' is Bromide. Don't give up!" << std::endl;
        }
    }
    
    std::cout << "You open the door and traverse through the tunnels of the mountain. You reach the exit and arrive at the Princess' Tower." <<std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
    
    std::cout << "Then you notice the troll. The troll is wearing the princess' dress." <<std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
    
    std::cout << "1.) 'Hand over the princess!' " << std::endl;
    std::cout << "2.) 'Why are you wearing the princess' dress?!' " << std::endl;
    std::cin >> playerDecision;
    clear();
    
    if (playerDecision == 1 || playerDecision == 2) //Regardless of player's decision, the troll will say the same thing
    {
        std::cout << " 'Foolish knight. There is no princess. Your king has betrayed you. Now you will die!' " <<std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
    }
    
    while (trollHP > 0) //Initiate the troll combat sequence
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
                if (trollPowerAttack < 4) //The troll is a slow and lumbering beast and can only attack once every 4 times
                {
                    std::cout << "The troll seems exhausted and his conserving his energy for his attack!" << std::endl;
                    std::cout << "You have " << playerHP << " health left." << std::endl;
                    trollPowerAttack = trollPowerAttack + 1;
                }
                
                if (trollPowerAttack == 4) //After 4 rounds, the troll will deal deadly damage.
                {
                    trollDamage = rand()%12+10;
                    std::cout << "The troll attacks you and you take " << trollDamage << " damage.";
                    playerHP = playerHP - trollDamage;
                    std::cout << "You have " << playerHP << " health left." << std::endl;
                    trollPowerAttack = 0;
                }
            }
        }
        
        if (playerDecision == 2) //Raise shield. If player times this right, they can completely negate damage.
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
        
        if (playerDecision == 3) //Initiate power attack sequence.
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
            
            if (ghostDecision == 1) //If you attacked ghost from earlier, you will have five power charges
            {
                powerCharge = 5;
            }
            
            if (ghostDecision == 2) //If you listened to what the ghost had to say instead of attacking, you will have two power charges
            {
                powerCharge = 2;
            }
        }
        
        if(playerHP <0 || playerHP == 0) //Since this combat encounter might actually result in player death, resurrect the player character.
        {
            std::cout << "Despite losing all of your HP, you feel as though a mysterious force beyond your control wishes for you to continue your quest. Your HP is replenished to 100." << std::endl;
            playerHP = 100;
            
            if (ghostDecision == 1) //If you attacked the ghost from earlier, you will have five power charges
            {
                powerCharge = 5;
            }
            
            if (ghostDecision == 2) //If you listened to what the ghost had to say earlier, you will have two power charges
            {
                powerCharge = 2;
            }
        }
    }

    std::cout << "You defeat the troll and begin your long journey back to your Kingdom to confront the King for his betryal." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
    
    std::cout << "None of the King's knights stop you and you are allowed passage to the King's throne room. You approach your King." << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
    
    std::cout << " 'Welcome home, " << playerName << ". I believe you have many questions. It took decades for me to finally take on the mantle of King. Then I found out you were the true heir. I will not allow some incompotent fool take all of this away from me!" << std::endl << std::endl << std::endl << std:: endl << std::endl << std::endl;
    
    
    while (king_HP > 0) //Initiate combat encounter with the King for as long as the King has more health than zero
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
            
            if (king_HP > 0) //If King's health is greater than zero, initiate the king's combat attack
            {
                if (kingPowerAttack < 3)
                {
                    kingDamage = rand()%10+1;
                    std::cout << "The King swings his sceptre and you take " << kingDamage << " damage." << std::endl;
                    playerHP = playerHP - kingDamage;
                    std::cout << "You have " << playerHP << " health left." << std::endl;
                    kingPowerAttack = kingPowerAttack + 1; //The king will also deal magical damage along with physical damage every 4 rounds
                }
                
                if (kingPowerAttack == 4) //Once the 4th round occurs, the king will deal magic damage to the player
                {
                    kingDamage = rand()%12+5;
                    std::cout << "The King uses his arcane knowledge and deals " << kingDamage << " magic damage.";
                    playerHP = playerHP - kingDamage;
                    std::cout << "You have " << playerHP << " health left." << std::endl;
                    kingPowerAttack = 0; //Reset the round to 0 and repeat
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
        
        if(playerHP <0 || playerHP == 0) //Since this combat encounter may be difficult, resurrect the player character
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

