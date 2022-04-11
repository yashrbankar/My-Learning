// C++ program to show unary operator overloading

#include <iostream>
using namespace std;


class Test{

	// Member Object
	int var1,var2;
public:

	// Constructor to initialize the object's value
	Test(int v1, int v2)
	{
		var1 = v1;
		var2 = v2;
	}

	// Overloading(-) operator to perform decrement
	// operation of Test object
	void operator--()
	{
		var1=var1+100;
		var2=var2*100;
	}
    void display()
    {
       cout << " Answer::" << var1 << " , " << var2; 
    }
};

int main()
{
	// Declare and Initialize the constructor
	Test d1(8, 9);

	// Use (--) unary operator by single operand
    // we can any operator for instend of the -- 
	--d1;
	// **d1;
    d1.display();
    
	return 0;
}
