#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    //creating a file
    ofstream File("newfile.txt");
    File<<"Hello my name is Snobbar";

    File.close();
    //Reading data from the file
    string text;
    ifstream readFile("newFile.txt");

    while(getline(readFile,text));
    cout<<text;

    readFile.close();

}
