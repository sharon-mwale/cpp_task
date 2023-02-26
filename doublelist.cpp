"""
ID: 477486/10/1
course: secure progamming
Program: computer science
Name: Sharon Mwale
year: 3rd, term 1
"""

#Q1
#include <iostream>
#include <fstream>

string myText;

fstream
MyReadFile("filename.txt");

while(getline(MyReadFile, myText)) {
    cout << myText;
}

MyReadFile.close();

Q2
#include <iostream>
#include <fstream>

int main()
{
    std::ofstream file("hello.txt");
    file << "Her name is Neria "; 
    file.close(); 
    return 0;
}


Q3
#include <cstdlib>
#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    struct node
    {
        int data;
        node *next;
        node *prev;
    };

    node *head;
    node *tail;
    node *n;

    n = new node;
    n->data = 1;
    n->prev = NULL;
    head = n;
    tail = n;

    n = new node;
    n->data = 2;
    n->prev = tail;
    tail->next = n;
    tail = n;

    n = new node;
    n->data = 3;
    n->prev = tail;
    tail->next = n;
    tail = n;

    n = new node;
    n->data = 4;
    n->prev = tail;
    tail->next = n;
    tail = n;
    tail->next = NULL;
}