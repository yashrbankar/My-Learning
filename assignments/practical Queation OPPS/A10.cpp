#include<iostream>
using namespace std;
template<class T>
void selection(T arr[],int n){
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(arr[j]<arr[i]){
			T temp;
			temp=arr[j];
			arr[j]=arr[i];
			arr[i]=temp;
			}
			
		}
	}
}


int main(){
	int arr[5]={33,6,5,2,1};
	selection(arr,5);
	cout<<"SORTED INTEGER DATA TYPE ARRAY : ";
	for(int i=0;i<5;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	float arr1[5]={5.1,4.3,1.1,2.7,4.2};
	selection(arr1,5);
	cout<<"SORTED FLOAT DATA TYPE ARRAY : ";
	
	for(int i=0;i<5;i++){
		cout<<arr1[i]<<" ";
	}
	return 0;
}
