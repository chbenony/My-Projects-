/*Name: Chelsea Benony
Date: September 18, 2015
Assignment: Assignment # 2
Due Date: September 18, 2015
About this project: A game where the user can see if loose change matches a dollar amount.
Assumptions: The user will not input a negative number.

All work below was performed by Chelsea Benony */

#include <iostream>
using namespace std;
int main()

{
	char answer;										//variable to store "y" for yes and "n" for no
	double dollar_amount;								//dollar amount that user wants to match, input by the user
	int halfdollar_amount,quarter_amount;				//number of coins the user is currently holding
	int dime_amount,nickel_amount,penny_amount;			
	double halfdollar_value,quarter_value;				//the numerical value of each coin
	double dime_value,nickel_value,penny_value;			
	double total_value;									//the total numberical value of the change the user is holding

	cout<<"Welcome to Coin Game!"<<'\n';				
	cout<<"Would you like to play (y or n)? ";
	cin>>answer;
	if (answer == 'y')
	{
		cout<<"Ok! What dollar amount would you like to match? "<<"$";
	}
	else if (answer == 'n')
	{
		cout<<"Well that's too bad!"<<'\n';
	}
	else
	{
		cout<<"Please answer 'y' for 'yes' or 'n' for 'no'!"<<'\n';
	}

	while (answer == 'y')
	{
		cin>>dollar_amount;
		cout<<"Enter the number of:"<<'\n';

		cout<<'\t'<<"Half Dollars: ";
		cin>>halfdollar_amount;
		if (halfdollar_amount < 0)
		{
			cout<<"You can't enter a negative number! Aborting game!"<<'\n';		//does not allow user to input negative value
		}

		cout<<'\t'<<"Quarters: ";
		cin>>quarter_amount;
		if (quarter_amount < 0)
		{
			cout<<"You can't enter a negative number! Aborting game!"<<'\n';
		}

		cout<<'\t'<<"Dimes: ";
		cin>>dime_amount;
		if (dime_amount < 0)
		{
			cout<<"You can't enter a negative number! Aborting game!"<<'\n';
		}

		cout<<'\t'<<"Nickels: ";
		cin>>nickel_amount;
		if (nickel_amount < 0)
		{
			cout<<"You can't enter a negative number! Aborting game!"<<'\n';
		}

		cout<<'\t'<<"Pennies: ";
		cin>>penny_amount;
		if (penny_amount < 0)
		{
			cout<<"You can't enter a negative number! Aborting game!"<<'\n';
		}

		halfdollar_value = halfdollar_amount * 0.50;						//to calculate numberical value of each coin
		quarter_value = quarter_amount * 0.25;
		dime_value = dime_amount * 0.10;
		nickel_value = nickel_amount * 0.05;
		penny_value = penny_amount * 0.01;

		total_value = halfdollar_value + quarter_value + dime_value + nickel_value + penny_value; 

		if (dollar_amount == total_value)					//used to determine if user won game or lost game
		{
			cout<<"Congratulations! You're a winner!"<<'\n';
			cout<<"Your amount is: "<<total_value<<endl;
		}
			else
		{
			cout<<"I'm sorry! You LOSE!!!"<<'\n';
			cout<<"Your amount is: "<<total_value<<endl;
		}
	}
	return 0;
}