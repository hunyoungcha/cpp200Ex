#include <iostream>
#include <string>

void Type1(std::string msg, int no, double value){
    std::cout << msg << no << value << std::endl;
}


void Type2(int no, double value){
    std::cout << no << value << std::endl;
}

template<typename... T>
void Printlog(T... arg0){
    // Type1(arg0...);
    Type2(arg0...);
    
}

int main(){
    // Printlog<std::string, int, double>("Warning", 100, 22.5);
    Printlog<int, double>(101, 55.6);
    return 0;
}