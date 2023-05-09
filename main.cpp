#include <iostream>
#include "Rectangle.h"
#include "Box.h"

using namespace std;


int main() {
	
	double length = 10;
	double width = 6.4;
	double height = 12.7;

	Rectangle rectangle;

	cout << "Rectangle\n";
	rectangle.setDimension(length, width);
	rectangle.print();
	cout << endl;

	Box box;

	cout << "Rectangular Prism\n";
	box.setDimension(length, width, height);
	box.print();
	cout << endl;

	return 0;
}