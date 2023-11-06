#include <iostream>
using namespace std;
class Shape 
{
	public:
	    virtual double area() 
		{
	        return 0;
	    }
};

class Rectangle : public Shape 
{
	public:
	    double length;
	    double breadth;
	
	    double area()override 
		{
	        return length * breadth;
	    }
};

class Circle : public Shape 
{
	public:
	    double radius;
	
	    double area()override 
		{
	        return 3.14 * radius * radius;
	    }
};

double calculateArea(Shape *shape) 
{
    return shape->area();
}

int main() {
    Rectangle rect;
    rect.length = 5;
    rect.breadth = 10;

    Circle circle;
    circle.radius = 5;

    Shape *shape1 = &rect;
    Shape *shape2 = &circle;

    std::cout << "Area of Rectangle: " << calculateArea(shape1) << std::endl;
    std::cout << "Area of Circle: " << calculateArea(shape2) << std::endl;

    return 0;
}

