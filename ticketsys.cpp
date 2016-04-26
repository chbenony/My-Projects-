/*Name: Chelsea Benony
Date: September 10, 2015
Assignment: Assignment # 1
Due Date: September 10, 2015
About this project: 
Assumptions: The user will input a number

All work below was performed by Chelsea Benony */

#include <iostream>
using namespace std;
int main ()

{
	const double adult_tickets = 28.50;							//adult defined between age 13 and 59
	const double child_tickets = 12.50;							//child defined as age 12 and under
	const double senior_tickets = 16.50;						//senior defined as age 60 and above
	const double tax = 0.075;									//tax rate in Tallahassee, FL
	double total, cost, total_tax;								//to calculate the overal cost of tickets
	double total_adult, total_child, total_senior;				//to calculate overall cost per group
	int numadult, numchild, numsenior;							//total number of adults, children, and seniors, input by the user
	
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);


	cout << "Welcome to the FSU Football Ticketing System! \n";
	cout << "Please enter the number of: \n" << "\n";
	cout << "Adult tickets: -->  ";
	cin >> numadult;
	total_adult = numadult * adult_tickets;


	cout << "Child (12 and under) tickets: -->  ";
	cin >> numchild;
	total_child = numchild * child_tickets;

	cout << "Senior (60 and above) tickets: -->  ";
	cin >> numsenior;
	cout<< "----------------------------------------------" <<"\n";
	total_senior = numsenior * senior_tickets;
	total = total_adult + total_child + total_senior;


	cout << "Total cost (before tax) : $" << total << '\n';
	total_tax = total * tax;
	

	cout << "Tax: $" << total_tax << '\n';
	cost = total_tax + total;
	cout << "Final total: $" << cost << '\n';
	cout<<"\n";
	cout<<"\n";
	cout << "Thank you for using the FSU Football Ticketing System! We hope to see you again!";

return 0;


}

