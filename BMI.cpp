//Function Definitions

#include "BMI.h"

BMI::BMI()
{
	newheight = 0;
	newweight = 0.0;
}

BMI::BMI(string name, int height, double weight)
{
	newname = name;
	newheight = height;
	newweight = weight;
}

BMI::~BMI()
{

}
string BMI::getName() const
{
	return newname;
}

int BMI::getHeight() const
{
	return newheight;
}

double BMI::getWeight() const
{
	return newweight;
}

void BMI::setName(string name)
{
	newname = name;
}
void BMI::setHeight(int height)
{
	newheight = height;
}

void BMI::setWeight(double weight)
{
	newweight = weight;
}

double BMI::calculateBMI()
{
	double newBMI = ((newweight * 703) / (newheight*newheight));
	return newBMI;
}
