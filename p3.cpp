#include <iostream>
using namespace std;
class Shape 
{
   public:
    void displayShape() 
	{
        cout << "This is a shape." << endl;
    }
};
class Color 
{
   public:
    void displayColor() 
	{
        cout << "This shape is colored." << endl;
    }
};

class ColoredShape : public Shape, public Color
{
   public:
    void displayColoredShape()
	{
        cout << "This is a colored shape." << endl;
    }
};

int main()
{  
    ColoredShape cs;
    
    cs.displayShape();
    cs.displayColor();
    cs.displayColoredShape();

    return 0;
}

