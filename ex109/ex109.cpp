#include <iostream>
#include <vector>

class TempClass{
    public:
        TempClass() {
            std::cout << "생성자 호출" << std::endl;
        }

        ~TempClass(){
            std::cout << "소멸자 호출" << std::endl;
        }
};

int main(){
    TempClass *temp_class = new TempClass();

    delete temp_class;
    temp_class = nullptr;

    return 0;
}