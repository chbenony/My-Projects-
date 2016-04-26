/* Name: Chelsea Benony
Date: October 20, 2015
Section: 08 
Assignment: 4 
Due Date: October 19, 2015
About this project: A program that simulates a dice rolling game. The user bets money on whether 
                   the dice will roll to a total of 7.  
Assumptions: The user will input an integer dollar amount. 

All work below was performed by Chelsea Benony */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void welcome();
void roll(int&, int&, int&);
int WinOrLose(int&, int&, int&);

int main()
{
	welcome();                                                               //function to welcome user to game
	srand(time(0));                                                          //used to seed values
	int num1, num2, num3;                                                    //the random numbers that are generated
	const int start_value = 500;                                            //the user starts with $500.
	int user_value;                                                         //user enters how much he/she wants to bet
	int user_total = 0;                                                    //the total dollar amount gained after bet has been placed

	cout<<"You have $"<<start_value<<" remaining"<<endl;             //user has constant value of $500 here
	cout<<"Place your bet: $";                                      
	cin>>user_value;                                             //user bets money here                                 
	cout<<endl;        
	user_total = user_total + start_value;                       //to determine total amount after the game has been played initially
    
    
    if (user_value < 0)                                      //if user enters negative number, the game exits
    {
        cout<<"Thank you for playing!"<<endl;
    }
    
    else                                                     //if not, the game commences here
    {
        while (user_value > 0 || user_value < user_total)
        {
            while (user_value > user_total)             //if user enters amount higher than the total they have, another value is needed
            {
            cout<<"You can't bet more than you have!"<<endl;
            cout<<"You have $"<<user_total<<" remaining."<<endl;
            cout<<"Place your bet: $";
            cin>>user_value;
            cout<<endl;
            }

			if (user_value == 0)             //the user can't bet zero dollars. They must bet a number between 1 and the total amount
			{
				cout<<"You can't bet nothing!"<<endl;
				cout<<"You have $"<<user_total<<" remaining."<<endl;
				cout<<"Place your bet: $";
				cin>>user_value;
				cout<<endl;
			}
            
            if (user_value < 0)                                 //if user enters a negative number, the game ends here
	        {
	            cout<<"Thank you for playing!"<<endl;
	            break;
	        }
	        
	        roll(num1, num2, num3);                          //if user enters a valid amount, the game commences
	        cout<<"You have rolled a "<<num1<<" and a "<<num2<<" which = "<<num3<<endl;
	        if (WinOrLose(num1,num2,num3) == true)        //if the user rolls a seven, they win
	        {
		        cout<<"Congratulations! You win!"<<endl;
		        user_total += user_value;            //they receive their money back, plus the money they bet
	        }
	        else if (WinOrLose(num1,num2,num3) == false) //if the user rolls a number other than seven, they lose
	        {
		        cout<<"I'm sorry! You lose!"<<endl;
		        user_total -= user_value;            //they lose their money and it is subtracted from the total cost
	        }
	        
	        if (user_total == 0)                    //if the user loses all their money, the game ends here
	        {
	            cout<<"I'm sorry! You're broke!"<<endl; 
	            cout<<"Thank you for playing!"<<endl;
	            break;
	        }
	        
	        cout<<"You have $"<<user_total<<" remaining!"<<endl; //or else, the game continues, until no money is left
	        cout<<"Place your bet: $";
	        cin>>user_value;
	        cout<<endl;
        }
    }
    
	return 0;
}

void welcome()                                                                              //function to welcome user to game
{
	cout<<"***** Welcome to SEVENS! ***** "<<endl;
	cout<<"Wager whatever you'd like. If you roll a 7, you win whatever you bet!"<<endl;
	cout<<"But beware, if you don't roll a 7, you lose your wager."<<endl;
	cout<<"Enter a negative bet to quit."<<endl;
	cout<<"LET'S BEGIN!!!!"<<endl;
}

void roll(int& die1, int& die2, int& result)                                        //function to simulate dice roll
{
	die1 = rand() % 6 + 1;                                                        //generates random integer between 1 and 6
	die2 = rand() % 6 + 1;                                                       //also generates random integer between 1 and 6
	result = die1 + die2;                                                        //adds two values together for a possible sum of 12

}

int WinOrLose(int& die1, int& die2, int& result)                            //function to determine whether the user won or lost
{
	if (result == 7)
	{
		return true;
	}
	else
	{
		return false;
	}

}
