// C++ program to demonstrate read/write of class
// objects in C++.
#include <bits/stdc++.h>
using namespace std;

// Class to define the properties
class Contestant
{
public:
    // Instance variables
    string Name;
    int Age, Ratings;

    // Function declaration of input() to input info
    int input();

    // Function declaration of output_highest_rated() to
    // extract info from file Data Base
    int output_highest_rated();
};

// Function definition of input() to input info
int Contestant::input()
{
    // Object to write in file
    fstream file_obj;

    // Opening file in append mode
    file_obj.open("gfg3.txt", ios::out);

    // Object of class contestant to input data in file
    Contestant obj;

    // Feeding appropriate data in variables
    string str = "Michael";
    int age = 18, ratings = 2500;

    // Assigning data into object
    obj.Name = str;
    obj.Age = age;
    obj.Ratings = ratings;

    // Writing the object's data in file
    // file_obj.write((char*)&obj, sizeof(obj));
    file_obj << obj.Name << "," << obj.Age << "," << obj.Ratings << "\n";

    // Feeding appropriate data in variables
    str = "Terry";
    age = 21;
    ratings = 3200;

    // Assigning data into object
    obj.Name = str;
    obj.Age = age;
    obj.Ratings = ratings;

    // Writing the object's data in file
    // file_obj.write((char*)&obj, sizeof(obj));
    file_obj << obj.Name << "," << obj.Age << "," << obj.Ratings << "\n";
    
    // Feeding appropriate data in variables
    str = "yash";
    age = 21;
    ratings = 3300;

    // Assigning data into object
    obj.Name = str;
    obj.Age = age;
    obj.Ratings = ratings;

    // Writing the object's data in file
    // file_obj.write((char*)&obj, sizeof(obj));
    file_obj << obj.Name << "," << obj.Age << "," << obj.Ratings << "\n";

    file_obj.close();

    return 0;
}

// Function definition of output_highest_rated() to
// extract info from file Data Base
int Contestant::output_highest_rated()
{
    // Object to read from file
    fstream file_obj;

    // Opening file in input mode
    file_obj.open("gfg3.txt", ios::in);

    // Object of class contestant to input data in file
    Contestant obj;
    string line, word;
    // string array[5];
    vector<string> array;

    // Reading from file into object "obj"
    getline(file_obj, line, '\n');
    stringstream obj1(line); // convert separt
    array.clear();
    for (int i = 0; i < 3; i++)
    {
        getline(obj1, word, ',');
        //    array[i]=word;
        array.push_back(word);
    }
    int var = stoi(array[2]);
    // cout << var;

    // max to store maximum ratings
    int max = 0;

    // Highest_rated stores the name of highest rated contestant
    string Highest_rated;

    // Checking till we have the feed
    string check_line , rating;
    vector<string>store;

    while (!file_obj.eof())
    {
        store.clear();
       getline(file_obj ,check_line,'\n');
       stringstream r(check_line);
        while(getline(r ,rating,',')) // loop run till the empty new line
        {
           store.push_back(rating);  
        }
        int value;
        
        
        value=stoi(store[2]);
        if (max< value)
        {
            max=value;
            Highest_rated=store[0];   
        }
    }

    // Output is the highest rated contestant
    cout << Highest_rated;
    file_obj.close();
    return 0;
}

// Driver code
int main()
{
    // Creating object of the class
    Contestant object;

    // Inputting the data
    object.input();

    // Extracting the max rated contestant
    object.output_highest_rated();

    return 0;
}
