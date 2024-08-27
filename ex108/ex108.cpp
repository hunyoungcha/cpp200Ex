#include <iostream>
#include <string>

class TmpClass{
    public:
        TmpClass() : number1(10), number2(20), name("나운 : 이름") {}
        
        void Print(){
            std::cout << number1 << number2 << number3 << name << std::endl;
        }
    
    private:
        int number1 = 1;
        const int number2 = 2;
        static const int number3 = 3;
        std::string name = "조다 : 아들";
};

int main(){
    TmpClass tc;
    tc.Print();

    return 0;
}