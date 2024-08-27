#include <iostream>

class Landload{
    public:
        void IamLandload() {
            std::cout << "건물주 입니다." << std::endl;
        }

};

class MaleMonkey{
    public:
        void Favorite() {
            std::cout << "Favorite : Female Monkey" << std::endl;
        }
};

class Nation : public Landload {
    public:
        void who(){
            std::cout << "안녕하세요" ;
            IamLandload();
        }
};

int main(){
    Nation nation;
    nation.who();

    return 0;
}