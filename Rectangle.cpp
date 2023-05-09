#include <iostream>
#include <iomanip>
#include "Rectangle.h"

Rectangle::Rectangle() {
    length = 0;
    width = 0;
}

Rectangle::Rectangle(double l, double w) {
    setDimension(l, w);
}

void Rectangle::setDimension(double l, double w) {
    if (l >= 0) {
        length = l;
    }
    else {
        length = 0;
    }
        
    if (w >= 0) {
        width = w;
    }
    else {
        width = 0;
    }

}

double Rectangle::getLength() const {
    return length;
}

double Rectangle::getWidth() const {
    return width;
}

double Rectangle::area() const {
    return length * width;
}

double Rectangle::perimeter() const {
    return 2 * (length + width);
}

void Rectangle::print() const {
    // Output formatting
    std::cout << std::fixed << std::showpoint << std::setprecision(2);
    const int w = 10;

    std::cout << "Length:       " << std::setw(w) << length << std::endl;
    std::cout << "Width:        " << std::setw(w) << width << std::endl;
    //std::cout << "Area:      " << area() << std::endl;
    //std::cout << "Perimeter: " << perimeter() << std::endl;
}