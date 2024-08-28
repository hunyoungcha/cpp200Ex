#include <iostream>

int Getone() { return 1;}

int Plus(int x, int y = Getone(), int z=1){
    return x+y+z;
}

int main(){
    int num1 = Plus(1);
    int num2 = Plus(1,2);
    int num3 = Plus(1, 2, 3);

    std::cout << num1 << " " << num2 << " " << num3 << std::endl;

    return 0;
}