#include <iostream>

enum TmpEnum{ };
enum class TmpEnumClass : int { };

int main(){
    std::cout << std::boolalpha;

    std::cout << "== is_integral == " <<std::endl;
    std::cout << std::is_integral<TmpEnum>::value <<std::endl;
    std::cout << std::is_integral<TmpEnumClass>::value << std::endl;
    std::cout << std::is_integral<signed int>::value <<std::endl;
    std::cout << std::is_integral<unsigned int>::value <<std::endl;
    std::cout << std::is_integral<double>::value <<std::endl;
    std::cout << std::is_integral<bool>::value <<std::endl;

    std::cout << "== is_enum == " << std::endl;
    std::cout << std::is_enum<TmpEnum>::value <<std::endl;
    std::cout << std::is_enum<TmpEnumClass>::value <<std::endl;
    std::cout << std::is_enum<int>::value <<std::endl;

    std::cout << "== is_signed == "<< std::endl;
    std::cout << std::is_signed<TmpEnum>::value <<std::endl;
    std::cout << std::is_signed<TmpEnumClass>::value <<std::endl;
    std::cout << std::is_signed<unsigned int>::value <<std::endl;

    std::cout << "== is_unsigned == "<< std::endl;
    std::cout << std::is_unsigned<TmpEnum>::value <<std::endl;
    std::cout << std::is_unsigned<TmpEnumClass>::value <<std::endl;
    std::cout << std::is_unsigned<unsigned int>::value <<std::endl;

    return 0;

}