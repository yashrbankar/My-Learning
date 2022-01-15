#include<iostream>
#include<fstream>
using namespace std;
int main(){
	int count=0;
	char data[50];
	
	ofstream out;
	out.open("STORY.TXT");
	if(!out)
		cout<<"Error in file writing";
	else{
		cout<<"FILE CREATED SUCCESSFULLY...."<<endl;
		cout<<"Enter the Data to the file -  "<<endl;
		out<<"The roses are red"<<endl;
		out<<"A girl is playing there"<<endl;
		out<<"There is a playground"<<endl;
		out<<"An aeroplane is in the sky"<<endl;
		out<<"Numbers are not allowed in password"<<endl;
		out<<"The function should display output as 3";
		
	}
	out.close();
	
	ifstream in;
	in.open("STORY.TXT");
	while(!in.eof())
	{
		in.getline(data,50);
		if(data[0]!='A')
			count++;
		
	}
	cout<<"Number of lines without A : "<<count<<endl;

	in.close();
	return 0;
}
