#include <iostream>
#include <string>

class KingInfo{
    public:
        KingInfo() { };

    public:
        void SetValue(const std::string value){
            if(value.empty() == false){
                value_ = value;
            }
            else{
                std::cout << "잘못된 인자" << std::endl;
            }
        }

        std::string GetValue() const {
            if(value_.empty() == false){
                return value_;
            }
            else {
                return "설정을 먼저 해주세요";
            }
        }

    private:
        std::string value_;
        int number_;

};

int main(){
    KingInfo king_info1;
    king_info1.SetValue("이역");

    KingInfo king_info2;
    king_info2.SetValue("이호");

    std::cout << king_info1.GetValue()<< std::endl;
    std::cout << king_info2.GetValue()<< std::endl;

    return 0;
}