#include <iostream>
#include <vector>
#include <string>

class InputError : public std::runtime_error{
    public:
        InputError(int idx, std::string msg) : runtime_error(""){
            std::cout << idx << msg << std::endl;
        }
};

int main(){
    std::vector<int>data;
    data.push_back(1);

    int idx=10;
    int value=20;

    try{
        if(idx >= data.size()){
            throw InputError(idx, std::to_string(value));
            data.at(idx) = 99;
        }
    }
    catch(InputError e){
            std::cout << e.what();
    }
    return 0;
}