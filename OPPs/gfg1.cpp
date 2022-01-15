#include <iostream>
 
/* fstream header file for ifstream, ofstream,
  fstream classes */
#include <fstream>
 
using namespace std;
 
// Driver Code
int main()
{
    // Creation of ofstream class object
    ofstream fout;
 
    string line;
 
    // by default ios::out mode, automatically deletes
    // the content of file. To append the content, open in ios:app
    // fout.open("sample.txt", ios::app)
    fout.open("gfg1.cvs");
 
    // Execute a loop If file successfully opened
    while (fout) {
 
        // Read a Line from standard input
        cout<<"enter the string :: ";
        getline(cin, line); // this used for seting value in the line string 
 
        // Press -1 to exit
        if (line == "-1")
            break;
        fout << line << endl; // Write line in file
    }
 
    // Close the File
    fout.close();
 
    // Creation of ifstream class object to read the file
    ifstream fin;
 
    // by default open mode = ios::in mode
    fin.open("gfg1.cvs");
 
    // Execute a loop until EOF (End of File)
    while (fin) {
 
        // Read a Line from File
        getline(fin, line);
 
        // Print line in Console
        cout << line << endl;
    }
 
    // Close the file
    fin.close();
 
    return 0;
}