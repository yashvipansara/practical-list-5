#include <iostream>
using namespace std;

class Box 
{
	private:
	    double length;
	    double width;
	    double height;
	
	public:
	    void setLength(double len) 
		{
	        this->length = len;
	    }
	
	    void setWidth(double wid) 
		{
	        this->width = wid;
	    }
	
	    void setHeight(double hei) 
		{
	        this->height = hei;
	    }
	
	    double getVolume() 
		{
	        return this->length * this->width * this->height;
	    }
	};

int main() 
{
    Box box1;
    box1.setLength(5.0);
    box1.setWidth(3.0);
    box1.setHeight(2.0);

    cout << "Volume of Box 1: " << box1.getVolume() << endl;

    return 0;
}

