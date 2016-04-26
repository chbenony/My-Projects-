// Header ==> Function Declaration will Go
#include <iostream>
#include <string>

using namespace std;

#ifndef BMI_H
#define BMI_H

class BMI
{
public:
	//Default Constructor
	BMI();

	//Overload Constructor
	BMI(string, int, double);

	//Destructor
	~BMI();

	//Accessor Functions
	string getName() const;
		//getName - returns name of patient
	int getHeight() const;
		//getHeight - returns height of patient
	double getWeight() const;
		//getWeight - returns weight of patient

	//Mutator Functions
	void setName(string);
		//setName - sets Name of patient
		//@param string nameofpatient
	void setHeight(int);
		//setHeight - sets Height of patien
		//@param int height of patient
	void setWeight(double);
		//setWeight - sets Weight for patient
		//@param double weight of patient
	double calculateBMI();
		//Calculates the BMI of patient
		//@param double - BMI of student

private:
	//Header Variables
	string newname;
	int newheight;
	double newweight;

};

#endif
