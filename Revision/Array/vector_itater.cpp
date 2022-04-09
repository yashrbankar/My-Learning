// C++ program to illustrate the
// iterators in vector
#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int>v1;
	
	for (int i=1; i<5;i++)
	{
	  v1.push_back(i*10);
	}
	
	cout<<"begin to end itater :: ";
	for(auto i=v1.begin();i<v1.end();i++)
	{
	   cout<<" "<<*i;
	}
	
	cout<<"\n end & begin in iters :: ";
	for(auto i=v1.rbegin();i<v1.rend();i++)
	{
	   cout<<" "<<*i;
	}
	
	
	return 0;
}


