#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cmath>
using namespace std;


int main()
{
	//random number generator
			srand(static_cast<unsigned int>(time(0)));

			

	//welcome the player
	char playerName[100]; 
	cout << "Welcome Arena, Gladiator! Please choose your name!" << endl << ">";
	//get player input
	cin.getline(playerName,sizeof(playerName));
	
	//setup game variables
	int health = 10; 
	int attack;
	int block;
	int rounds = 0;
	string enemyName = "Cassius Falconius";
	int enemyHealth = 10;

	
	
	

	/*player choosing difficulty --- COMPLETE - Note to self - IMPLEMENT PLAYER ATTACKING
	  cout << "\nDifficulty Levels\n" << endl;
	  cout << "1 - Easy" << endl;
	  cout << "2 - Normal" << endl;
	  cout << "3 - Hard" << endl;
	  int choice;
	  cout << "Choice: ";
	  cin >> choice;
	*/
	
	/*difficulty settings ---  COMPLETE - Note to self - IMPLEMENT PLAYER ATTACKING
		if (choice==1)
		{
	 		cout << "You picked Easy, your enemy will have 10 health." << endl;
		}
		else if (choice==2)
	 	{
			cout << "You picked Normal, your enemy will have 12 health." << endl;
		}
		else if(choice==3)
	 	{
			cout << "You picked Hard, your enemy will have 15 health." << endl;
		}
		else if (choice > 3 || choice < 1) 
	 	{
			cout << "Trust me, you dont want that level. Defaulting to Normal" << endl;
		}
	*/
		
	//start of loop --- Note to self - IMPLEMENT PLAYER ATTACKING 
			cout << "Good luck in your battle against " << enemyName << ", " << playerName << "." << endl;
		
		do 
		{
			int randomHit=rand();
			int hit = (randomHit%4)+1;
			int randomBlock=rand();
			int block = (randomBlock%4)+1;

			cout <<  enemyName << " attacks you! His hit rolls a " << hit << "!" << endl;
			cout << playerName << " attempts to block! They roll a " << block << "!" << endl; 
						
			if (health < 1)
			{
				cout << "Your health has dropped below 0. You died." << endl;

			}	
			else if (block >= hit)
			{
				health=health-0;
				cout << "The block was successful! You took 0 damage!" << endl;
			}
			else if (hit > block)
			{
				health=health-hit; 
				cout << "The block was unsuccessful! You took " << hit << " damage from that attack" << endl;

			}

			++rounds;
			cout << "You have " << health << " health remaining" << endl;


		} while(health >= 1 && rounds < 4);
			
		if (health > 0)
		{
			cout << "Congratulations " << playerName << ", you survived the arena. You are todays champion!" << endl;
		}
	
	return 0;
}