#include <iostream>
#include <fstream>

std::string user_msg();

int main(){
   std::string user = user_msg();
   std::cout << user << std::endl;
}


std::string user_msg(){
    std::string usr = "Joseph";
    if (usr.compare("Joseph")){
        return "welcome " + usr;
    }else{
        return "failed";
    }
}