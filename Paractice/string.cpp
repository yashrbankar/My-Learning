#include<bits/stdc++.h>
using namespace std;
// ALL in one String STL Function
int main()
{
    //string str ="This the yash Bankar";
    // Printing the 
   // cout<<str;

/////////////////////////////////////////////

    // input string
    /*
     cout<<"String input 1 ::";
     cin>>str; // int take single word as input
     cout<<"Hello "<<str;
    */
//////////////////////////////////////////////

     // getline
     /*
    cout<<"String input 2 ::";
    getline(cin,str); // use instead of cin<<
    cout<<"Hello "<<str;
    */
////////////////////////////////////////

     // swap of to string
     /*
     string a="yash",b="satyam";
     cout<<a<<" "<<b<<endl;
     a.swap(b);
     cout<<a<<" "<<b<<endl;
     */
 /////////////////////////////////////////////////   

    // Find :: Find sub string in string
    /*
    string main="This is yash" ,sub="yash";
    cout<<"starting index  is : "<<main.find(sub);
    cout<<"\n starting character is :: "<<main[main.find(sub)];
    */
//////////////////////////////////////////////

   // Replace in string
   /*
     string str ="I love you yashb";
     str.replace(10,5,"");
     cout<<str;
   */
//////////////////////////////////////

  // Sub string 
  /*
      string str="I love you yash";
      cout<<str.substr(7,3);
  */

/////////////////////////////////

   // erase
   /*
    string str("yash bankar");
    cout<<str.erase(4 , 3);
   */
///////////////////////////////

 //  abc 
 // abc acb bca bac cab cba
 // string hashing
 string s="yash";
 int arr[26]={0};
 for (int i = 0; i <s.size(); i++)
 {
    // lowercase
    int index;
    if('a'<=s[i]&&s[i]<='z')
    {
        index=s[i]-'a';
        arr[index]++;
    }
    // uppercase
    if('A'<=s[i]&&s[i]<='Z')
    {
        index=s[i]-'A';
        arr[index]++;
    }
 }
 
 sort(s.begin(),s.end());

cout<<"Thank you!";
   return 0;
}