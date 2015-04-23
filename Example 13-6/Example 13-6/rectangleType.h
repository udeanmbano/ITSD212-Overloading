#include <iostream>
using namespace std;
class rectangleType
{
	friend ostream& operator<<(ostream&, const rectangleType &);
	friend istream& operator>>(istream&, rectangleType &);
public:
	void setDimension(double l, double w);
	double getLength() const;
	double getWidth() const;
	double area() const;
	double perimeter() const;

	rectangleType& setLength(double l);
	//Function to set the length.
	//Postcondition: length = l
	// After setting the length, a reference to the object,
	// that is, the address of the object, is returned.
	rectangleType& setWidth(double w);
	//Function to set the width.
	//Postcondition: width = w
	// After setting the width a reference to the object,
	// that is, the address of the object, is returned.
	rectangleType(double l = 0.0, double w = 0.0);
	rectangleType operator+(const rectangleType&) const;
	//Overload the operator +
	rectangleType operator* (const rectangleType&) const;
	//Overload the operator *
	bool operator==(const rectangleType&) const;
	//Overload the operator ==
	bool operator!=(const rectangleType&) const;
	//Overload the operator !=
private:
	double length;
	double width;
};