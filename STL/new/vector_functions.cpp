#include <bits/stdc++.h>
using namespace std;

int main()
{

  vector<int> v={10,20,30,40,50};
  cout<<" size : "<<v.size(); // size of vector // no of element 
  v.resize(4); // resizing the vector size to 5 to 4
  cout<<"\n size : "<<v.size();
  cout<<"\n capcity :: "<<v.capacity(); // 5
  v.shrink_to_fit();
  cout<<"\n capcity :: "<<v.capacity(); // takes only size that required 
   
  
  if(v.empty())
  {
     cout<<"\n Vector is empty !";
  }
  else
  {
     cout<<"\n Vector is not empty ";
  }
  
  cout<<" \n element present at given index ::  "<<v.at(0);
  
  
  
}
