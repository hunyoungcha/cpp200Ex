#include <iostream>

template <typename T>
T Plus(T x, T y, T z=1){
    return x+y+z;
}

int main(){
    int num1 = Plus(1,2);
    int num2 = Plus(1,2,3);
    
    double num3 = Plus(1.1, 2.2);
    double num4 = Plus(1.1, 2.2, 3.3);

    std::cout << num1 << " " << num2 << " " << num3 << " " << num4 << std::endl;

    return 0;
}