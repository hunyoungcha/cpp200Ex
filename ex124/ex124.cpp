#include <iostream>
#include <map>

struct TmpStruct{
    int x =0;
};

class TmpClass {

};

int main(){
    std::cout << std::boolalpha;

    std::cout << "== is_empty == " << std::endl;
    std::cout << std::is_empty<TmpStruct>::value <<std::endl;
    std::cout << std::is_empty<TmpClass>::value <<std::endl;
    
    std::cout << "== is_array == " << std::endl;
    std::cout << std::is_array<TmpStruct>::value <<std::endl;
    std::cout << std::is_array<std::map<int,double>>::value <<std::endl;
    std::cout << std::is_array<TmpStruct>::value <<std::endl;

    std::cout << "== is_same == " << std::endl;
    std::cout << std::is_same<TmpStruct, TmpClass>::value << std::endl;
    std::cout << std::is_same<int, signed int>::value << std::endl;
    std::cout << std::is_same<int, bool>::value << std::endl;
    std::cout << std::is_same<char, unsigned char>::value << std::endl;
    
    return 0;
}