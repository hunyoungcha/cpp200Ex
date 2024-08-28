#include <iostream>
#include <string>

template <typename T1, typename T2>

std::string TmpFunc(T1 x, T2 y){
    std::conditional<std::is_same<T1,T2>::value, int, double>::type type1;

    return typeid(type1).name();
}

int main(){
    std::string type = TmpFunc(1, 22.3);

    if(type == "double"){
        std::cout << "double" <<std::endl;
    }
    else{
        std::cout << "not double" << std::endl;
    }

    return 0;
}