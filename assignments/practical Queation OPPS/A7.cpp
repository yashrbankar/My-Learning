#include<iostream>
using namespace std;
int main(){
	int age;
	float salary;
	string city;
	string vehicle;
	cout<<"Enter your age : ";
	cin>>age;
	cout<<endl;
	cout<<"Enter your salary : ";
	cin>>salary;
	cout<<endl;
	cout<<"Enter your city : ";
	cin>>city;
	cout<<endl;
	cout<<"vehicle(bike/car) : ";\
	cin>>vehicle;
	try{
		if(age<18||age>55){
			throw(1);
		}
		if(salary<50000||salary>100000){
			throw(2);
		}
		if((city!="pune")&&(city!="mumbai")&&(city!="chennai")&&(city!="banglore")){
			throw(3);
		}
		if(vehicle!="car"){
			throw (4);
		}
	}
	catch(int num){
		switch(num){
			case 1:
				cout<<"Exception due to age";
				break;
			case 2:
				cout<<"Exception due to salary";
				break;
			case 3:
				cout<<"Exception due to city";
				break;
			case 4:
				cout<<"Exception due to vehicle";
				break;
		}
	}
	return 0;
}
