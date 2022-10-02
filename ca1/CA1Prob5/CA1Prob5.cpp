#include <iostream>

using namespace std;

class rectangle {
private:
	double width;
	double length;
	double perimeter;
	double area;

public:
	// Constructor, automatically compute the perimeter and area once it is OK.
	rectangle(double wd, double lg);
	// Set the dimension and automatically update the perimeter and area.
	void setDimension(double wd, double lg);
	// Set the width and automatically update the perimeter and area.
	void setWidth(double wd);
	// Set the length and automatically update the perimeter and area.
	void setLength(double lg);
	// Return the width of the rectangle.
	double getWidth();
	// Return the length of the rectangle.
	double getLength();
	// Return the perimeter of the rectangle.
	double getPerimeter();
	// Return the area of the rectangle.
	double getArea();
	// True, if width = length.
	bool isSquare();
};

rectangle::rectangle(double wd, double lg) {
	width = wd;
	length = lg;
}

void::rectangle::setDimension(double wd, double lg) {
	width = wd;
	length = lg;
}

void::rectangle::setWidth(double wd) {
	width = wd;
}

void::rectangle::setLength(double lg) {
	length = lg;
}

double::rectangle::getWidth() {
	return width;
}

double::rectangle::getLength() {
	return length;
}

double::rectangle::getPerimeter() {
	return (width + length) * 2;
}

double::rectangle::getArea() {
	return width * length;
}

bool::rectangle::isSquare() {
	return width == length ? true : false;
}

int main() {
	rectangle rect1{ 3, 8 };
	rectangle rect2{ 5,10 };

	cout << rect1.getWidth() << "," << rect1.getLength() << "," << rect1.getPerimeter() << "," << rect1.getArea() << "," << rect1.isSquare() << endl;
	cout << rect2.getWidth() << "," << rect2.getLength() << "," << rect2.getPerimeter() << "," << rect2.getArea() << "," << rect2.isSquare() << endl;

	rect1.setWidth(8);
	cout << rect1.getWidth() << "," << rect1.getLength() << "," << rect1.getPerimeter() << "," << rect1.getArea() << "," << rect1.isSquare() << endl;

	return 0;
}