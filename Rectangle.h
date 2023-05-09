#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
public:
	void setDimension(double l, double w);
	double getLength() const;
	double getWidth() const;
	double area() const;
	double perimeter() const;
	void print() const;
	Rectangle();
	Rectangle(double l, double w);

private:
	double length;
	double width;
};


#endif
