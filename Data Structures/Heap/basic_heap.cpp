#include<bits/stdc++.h>
using namespace std;

// creating max Heap;
class Heap
{
     public:
     vector<int>arr;
     Heap()
     {
         arr.push_back(-1);
     }
     void insert(int a)
     {
          arr.push_back(a);
          int index=arr.size()-1;
          
          while(index>1)
          {
              int parent =index/2;
             // cout<<index;
              if(arr[parent]<arr[index])
              {
                   swap(arr[parent],arr[index]);
                   index=parent;
              }
              else return ;
          }
     }
     void display()
     {
          for(int i=1;i<arr.size();i++)
          {
               cout<<arr[i]<<" ";
          }
     }
     
};

int main()
{
   Heap h;
   h.insert(10);
   h.insert(20);
   h.insert(30);
   h.insert(40);
   h.display();
}

