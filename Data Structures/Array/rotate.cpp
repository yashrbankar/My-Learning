#include<bits/stdc++.h>
using namespace std;

int gcd(int ro , int si)
{
	if(si==0)
	{
       return ro;
	   // this testing 
	}
	else
	{
		return gcd(ro,ro%si);
	}

}
void rotate(int arr[] , int d , int n)
{
	d=d%n;
   int g_c_d=gcd(d , n);

   for (int i = 0; i < g_c_d; i++)
   {
	   int temp=arr[i];
	   int j=i;
	   while (1)
	   {
		   int k=j+d;
		   if(k>=n)
		   {
			   k=k-n;
		   }
		   if(k==i)
		   {
             break;
		   }
		   arr[j]=arr[k];
		   j=k;
	   }
	   arr[j]=temp;
   }
}
int main()
{

	int arr[]={1,2,3,4,5,6,7};
	int n=sizeof(arr)/sizeof(int);
    
	rotate(arr , 7, n);
	for (int i = 0; i <n; i++)
	{
		cout<<" "<<arr[i];
	}
   return 0;
}