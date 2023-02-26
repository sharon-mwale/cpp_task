#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{

    ofstream myWriteFile("filename.txt");

    myWriteFile << "Love can be hard to find some times!";
    myWriteFile.close();

    string myText;

    ifstream MyReadFile("filename.txt");

    while (getline(MyReadFile, myText))
    {
        cout << myText;
    }

    MyReadFile.close();
}