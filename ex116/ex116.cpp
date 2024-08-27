#include <iostream>

class Landload{
    public:
        void IamLandload() {
            std::cout << "건물주 입니다." << std::endl;
        }

};

class Tenant{
    public:
        void IamTenant(){
            std::cout << "세입자 입니다." << std::endl;
        }
    
};

class Nation : public Landload, public Tenant{
    public :
        void who(){
            std::cout << "저는";
            
            if (is_landload == true) {
                IamLandload();
            }
            else {
                IamTenant();
            }
        }
    public:
        bool is_landload;
};

int main(){
    Nation nation;
    nation.is_landload = true;
    nation.who();

    return 0;
}