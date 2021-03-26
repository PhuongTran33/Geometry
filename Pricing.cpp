// Author:			Phuong Tran 		
// Source file:		Pricing.cpp
// Description:		A program to cost out sodding and fencing for an area, given the length and
// width in feet. Part II will produce 2 files:
// Pricing.h file is the Pricing class (derived from the Geometry class - the parent class) with its members and functions.
// The main cpp file uses the code in the Pricing / Geometry classes.
// Compiler used:	Visual Studio 2017


#include <iostream> 
using namespace std;

#include "Pricing.h"
int main()
{
	
	//Fix the number to 2 decimals
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	
	
	//Initialize the value
	int length, width;
	
	cout << "        Parkton Landscaping" << endl;
	cout << "  Enter length: ";
	cin >> length;
	cout << "  Enter wide: ";
	cin >> width;
	Pricing order(length, width);

	//Calculate the cost
	cout << "\n\n      Landscaping costs" << endl;
	cout<< "    Sod = $"<<order.getSodCost(length, width) <<endl;
	cout << " Fence = $" << order.getFenceCost(length, width) << endl;
		
	system("pause");
	return 0;
}