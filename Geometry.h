#pragma once


class Geometry
{
public:
	//Constructors
	Geometry(int length, int width);
	Geometry(int side);
	Geometry();

	//Function Definitions
	void setLength();
	void setWidth();
	void setSide();
	int getLength();
	int getWidth();
	int getSide();
	int getArea(int length, int width);
	int getPerimeter(int length, int width);
	int getSurfaceArea(int side);

private:
	//Private members
	int length;
	int width;
	int side;
	//Private function
	void checkNum(int a);

};

Geometry::Geometry(int NewLength, int NewWidth)
{
	length = NewLength;
	width = NewWidth;
	checkNum(length);
	checkNum(length);

}

Geometry::Geometry(int NewSide)
{
	side = NewSide;
	checkNum(side);
}

Geometry::Geometry() : length(0), width(0), side(0)
{

}

void Geometry::setLength()
{
	cout << "Enter the length: ";
	cin >> length;
	checkNum(length);
}

void Geometry::setWidth()
{
	cout << "Enter the width: ";
	cin >> width;
	checkNum(width);
}
void Geometry::setSide()
{
	cout << "Enter the side: ";
	cin >> side;
	checkNum(side);
}

int Geometry::getLength()
{
	return length;
}

int Geometry::getWidth()
{
	return width;
}

int Geometry::getSide()
{
	return side;
}

int Geometry::getArea(int length, int width)
{
	return length * width;
}

int Geometry::getPerimeter(int length, int width)
{
	return 2 * (length + width);
}

int Geometry::getSurfaceArea(int side)
{
	return 6 * side*side;
}

void Geometry::checkNum(int a)
{
	if (a <= 0)
	{
		cout << "Wrong value.Aborting program.\n";
		exit(1);
	}

}

