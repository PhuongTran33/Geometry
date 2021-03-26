// Author:			PhuongTran	
// Source file:		Geometry.cpp
// Description:		Part I will produce 2 files:
// Geometry.h file is the Geometry class with its members and functions.
// main cpp file tests all the code in the Geometry class.
// Compiler used:	Visual Studio 2017


#include <iostream> 
using namespace std;
#include "Geometry.h"

int main()
{
	//Set up values for testing and change as needed
	int lenght = 0, width = 0, side = 0;
	//Add code to test setLength, setWidth, setSide Display 10.4
	Geometry test, rec,cube ;
	cout << " Testing to set VALUE" << endl;
	test.setLength(); 
	test.setWidth();
	test.setSide();
	//Add code to instantiate the constructor for the rectangle Display 10.6
	rec=Geometry(8, 10);
	//Test getLength and getWidth
	cout << "\n Testing to instantiate the constructor for the RECTANGLE" << endl;
	int a =rec.getLength();
	int b =rec.getWidth();
	cout << "The rectangle length is " << a << endl;
	cout << "The rectangle width is " << b << endl;
	//Test getArea
	int Area =rec.getArea(a,b);
	cout << "The rectangle area is " << Area << endl;
	//Test getPerimeter
	int Perimeter = rec.getPerimeter(a, b);
	cout << "The rectangle perimeter is " << Perimeter << endl;
	//Add code to instantiate the constructor for the cube Display 10.6
	cube= Geometry(5);
	//Test getSide
	cout << "\n Testing to instantiate the constructor for the CUBE" << endl;
	int c = cube.getSide();
	cout << "The cube side is " << c << endl;
	//Test getSurfaceArea
	int Surface = cube.getSurfaceArea(c);
	cout << "The cube surface area is " << Surface << endl;
	//Test default constructor Display 10.6
	test = Geometry();
	cout << "\n Testing to instantiate the constructor for the DEFAULT" << endl;
	cout << "The default variables \nThe length is " << test.getLength() << "\nThe width is " << test.getWidth() << "\nThe side is " << test.getSide() << endl;
		
	system("pause");
	return 0;
}