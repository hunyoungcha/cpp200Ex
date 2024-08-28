#include <iostream>

class Base{
    public:
        void Display(){
            std::cout << "예종" << std::endl;
        }
};

class Derived : Base {
    public:
        void Display(){
            std::cout << "인종" << std::endl;
        }
};

int main(){
    Derived child;
    child.Display();

    return 0;
}