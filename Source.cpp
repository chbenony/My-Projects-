#include <iostream>
#include <string>


#include "BMI.h"

using namespace std;


int main()
{
	string name;
	int height;
	double weight;

	cout << "Please enter your name here: ";
	cin >> name;
	cout << endl;
	cout << "Enter your height here (in inches) : ";
	cin >> height;
	cout << endl;
	cout << "Enter your weight here (in pounds) : ";
	cin >> weight;
	cout << endl;

	BMI Student_1(name, height, weight);
	cout << endl << "Patient name: " << Student_1.getName() << endl;
	cout<<endl<<"Patient height: " << Student_1.getHeight () <<" inches"<< endl; 
	cout << endl << "Patient Weight: " << Student_1.getWeight() << " lb"<< endl;
	cout << endl << "Patient Body Mass Index: " << Student_1.calculateBMI() << endl<<endl;

	cout << "Please enter your name here: ";
	cin >> name;
	cout << endl;
	cout << "Enter your height here (in inches) : ";
	cin >> height;
	cout << endl;
	cout << "Enter your weight here (in pounds) : ";
	cin >> weight;
	cout << endl;

	BMI Student_2;
	Student_2.setName(name);
	Student_2.setHeight(height);
	Student_2.setWeight(weight);

	/*BMI Student_2(name, height, weight);*/
	cout << endl << "Patient name: " << Student_2.getName() << endl;
	cout<<endl<<"Patient height: " << Student_2.getHeight ()<< " inches"<<endl;
	cout << endl << "Patient Weight: " << Student_2.getWeight() << " lb "<< endl<<endl;
	cout << endl << "Patient Body Mass Index (BMI): " << Student_2.calculateBMI() << endl;
	
	cout << endl << "Patient 1 Name: "<<Student_1.getName() << endl;



	return 0;
}