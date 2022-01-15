#include<iostream>
using namespace std;
class personal{
	protected:
	char name[20];
	char surname[20];
	char dob[10];
	int age;
};
class profession{
	protected:
		char experience[10];
		char domain[10];
};
class academics{
	protected:
		char degree[10];
	    float marks;
};
class Biodata:public personal,public profession ,public academics{
	public:
		void getdata(){
			cout<<"Enter your name - "<<endl;
			cin>>name>>surname;
			
			cout<<"Enter your date of birth  - "<<endl;
			cin>>dob;
			cout<<"Enter your age - "<<endl;
			cin>>age;
			cout<<"Enter your experience( years ) - "<<endl;
			cin>>experience;
			cout<<"Enter your domain - "<<endl;
			cin>>domain;
			cout<<"Enter your degree - "<<endl;
			cin>>degree;
			cout<<"Enter your marks - "<<endl;
			cin>>marks;
		}
		void display();
};
void Biodata::display(){
	cout<<".....BIODATA......"<<endl;
	cout<<"Name : "<<name<<" "<<surname<<endl;
	cout<<"Date of birth : "<<dob<<endl;
	cout<<"Age : "<<age<<endl;
	cout<<"Experience : "<<experience<<endl;
	cout<<"Domain : "<<domain<<endl;
	cout<<"Degree : "<<degree<<endl;
	cout<<"MarKs : "<<marks<<endl;
}

int main(){
	Biodata obj;
	obj.getdata();
	obj.display();
	return 0;
}

