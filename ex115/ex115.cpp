#include <iostream>

class Rent{
    public:
        void Payment() {std::cout<<" 임대료 받습니다." <<std::endl;}
};

class Landload : public Rent {
    public : 
        void GetMoney(){
            std::cout << "건물주라서" ;
            Payment();
        }
};

int main(){
    Landload master;
    master.GetMoney();
}