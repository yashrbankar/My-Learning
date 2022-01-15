// C++ program to explain destructors

#include <bits/stdc++.h>
using namespace std;
class Geeks
{
	public:
	int id; // 7 4 3 2 1 
	
	//Definition for Destructor
	~Geeks()
	{
		cout << "Destructor called for id: " << id <<endl;
	}
};

int main()
{
	Geeks obj1;
	obj1.id=7;
	int i = 0;
	Geeks obj2;
	while ( i < 3 )
	{
		obj2.id=i;
		i++;	
	} 
    obj1.~Geeks();
    obj2.~Geeks();

	return 0;
} // Scope for obj1 ends here
