#include <iostream> 

using namespace std;
#include "Geometry.h" //Includes the code from Geometry.h
class Pricing : public Geometry //Pricing is derived from the Geometry class
{
public:
	// Constructor
	Pricing(int length, int width);
		
	// Functions
	double getSodCost(int length, int wide);
	
	double getFenceCost(int length, int wide);
	
private:
	
}; 

Pricing::Pricing(int length, int width) :  Geometry( length,  width)
{
 
}

double Pricing::getSodCost(int length, int width)
{
	const double SOD = 0.47;
	double Area = getArea(length, width);
	return Area * SOD;
}

double Pricing::getFenceCost(int length, int width)
{
	const double FENCE = 22.50;
	double Perimeter = getPerimeter(length, width);
	return Perimeter * FENCE;
}
