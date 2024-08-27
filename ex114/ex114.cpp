#include <iostream>
#include <string>

class Info{
    public:
        std::string name_;
        int year_;

};

class GoodKing : public Info {
    public:
        GoodKing(const std::string country) : country_(country) {};
        void Display(){
            std::cout << country_ << " " << name_ << "연도 : " << year_ << std::endl; 
        }

    private:
        std::string country_;

};

int main(){
    GoodKing king("고조선");
    king.name_ = "단군왕검";
    king.year_ = 2333;

    king.Display();
    return 0;
}
