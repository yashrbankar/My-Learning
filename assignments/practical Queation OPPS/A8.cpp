#include<iostream>
#include<fstream>
#include<cstring>
using namespace std;
int main(){
	
	string text;
	ofstream out("WRITE.txt");
	out<<"Coding is an intresting thing to do but it requires practise ";
	
	out.close();
	ifstream in("WRITE.txt");
	while(getline(in,text)){
		cout<<text;
	}
	in.close();
	return 0;
}

