class rectangleType
{
public:
	//The functions setDimension, getLength, getWidth, area,
	//perimeter, print, and the constructors are the same as before.
	rectangleType doubleDimensions();
	//Postcondition: length = 2 * length
	void setDimension(double l, double w);
	double getLength() const;
	double getWidth() const;
	double area() const;
	double perimeter() const;
	void print() const;
	rectangleType(double l = 0, double w = 0);
private:
	double length;
	double width;
};