#include <iostream>
#include <vector>

int main(){
    std::vector<int> data;
    int number = 0;

    try{
        number= data.at(10);
    }

    catch (std::exception e) {
        std::cout << e.what() << std::endl;
    }

    return 0;
}