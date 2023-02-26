#include <iostream>
#include <fstream>

int main()
{
    std::ofstream file("hello.txt");
    file << "Her name is Neria "; 
    file.close(); 
    return 0;
}