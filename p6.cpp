#include <iostream>
using namespace std;
class Shape 
{
	public:
	    double area()
		{
	        return 0;
	    }
};

class Rectangle : public Shape 
{
	public:
	    double length;
	    double breadth;
	    double area() 
		{
	        return length * breadth;
	    }
};


class Circle : public Shape 
{
	public:
	    double radius;

		double area() 
		{
	        return 3.14 * radius * radius;
	    }
};

double calculateArea(Shape *shape) 
{
    return shape->area();
}

int main() 
{
    Rectangle rect;
    rect.length = 5;
    rect.breadth = 10;

    Circle circle;
    circle.radius = 5;

    double (*functionPtr)(Shape *);
    functionPtr = &calculateArea;
    std::cout << "Area of Rectangle: " << functionPtr(&rect) << std::endl;

    
    functionPtr = &calculateArea;
    std::cout << "Area of Circle: " << functionPtr(&circle) << std::endl;

    return 0;
}

