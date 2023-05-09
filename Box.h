#ifndef BOX_H
#define BOX_H

// boxType inherits from the rectangleType class

class Box : Rectangle
{
public:
	
	void setDimension(double l, double w, double h);
	// Function to set the length, width, and height of the box
	// Postconditino: length = l; width = w; height = h;

	double getHeight() const;
	// Function to return the height of the box
	// Postcondition: The value of height is returned.

	double calcArea() const;
	// Function to return the surface area of the box.
	// Postcondition: The surface area of the box is calculated and returned.

	double calcVolume() const;
	// Function to return the volume of the box.
	// Postcondition: The volume of the box is calculated and returned.

	void print() const;
	// Function to output the length, width, and height of a box

	Box(); // Default constructor
	Box(double l, double w, double h);

private:
	double height;
	double volume;
	double surfaceArea;
};

#endif
