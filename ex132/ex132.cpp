#include <iostream>
#include <vector>

int main(){
    std::vector<int> data;
    data.push_back(1);

    try{
        if(data.empty() ==true){
            throw "empty";
        }

        if(data.size() <2) {
            throw 99;
        }

    }
    catch (char* e){
        std::cout << "char e" << e <<std::endl;
    }
    catch (int e){
        std::cout << "int e" << e << std::endl;
    }

    return 0;
}