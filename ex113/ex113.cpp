#include <iostream>
#include <string>

class KingInfo{
    public:
        KingInfo() { };
    
    public:
        void SetValue(const std::string name, const std::string son){
            name_=name;
            son_=son;
        }

        std::string GetNameSon() const {
            return name_ + "의 아들 " + son_;
        }

    private:
        std::string name_;
        std::string son_;
        
};

int main(){
    KingInfo king_info;
    king_info.SetValue("name","son");
    
    std::cout << king_info.GetNameSon() << std::endl;

    return 0;
}