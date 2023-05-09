#include <iostream>
#include <iomanip>
#include "Rectangle.h"
#include "Box.h"

Box::Box() {
	height = 0;
}

Box::Box(double l, double w, double h) : Rectangle(l, w) {
	if (h >= 0)
		height = h;
	else
		height = 0;
}

void Box::setDimension(double l, double w, double h) {
	Rectangle::setDimension(l, w);
	if (h >= 0)
		height = h;
	else
		height = 0;
}

double Box::getHeight() const {
	return height;
}

double Box::calcArea() const {
	return 2 * ((Rectangle::getLength() * Rectangle::getWidth() + Rectangle::getLength() * height + Rectangle::getWidth() * height));
}

double Box::calcVolume() const {
	return Rectangle::getLength() * Rectangle::getWidth() * height;
}

void Box::print() const {
	// Output formatting
	std::cout << std::fixed << std::showpoint << std::setprecision(2);
	const int w = 10;

	Rectangle::print();
	std::cout << "Height:       " << std::setw(w) << height << std::endl;
	std::cout << "Volume:       " << std::setw(w) << calcVolume() << std::endl;
	std::cout << "Surface Area: " << std::setw(w) << calcArea() << std::endl;
}