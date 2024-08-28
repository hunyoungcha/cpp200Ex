#include <iostream>
#include <string>

class Good;
class Bad;

class Info{
    friend class Good;

    public:
        Info() { };

    private:
        std::string achieve;

};

class Good : Info {
    public:
        Good() { achieve = "근초고왕";};
        void Display(){
            std::cout << achieve << std::endl;
        }
};

class Bad : public Info {
    public:
        Bad(){};
        void Display(){
            //
        }

};

int main(){
    Good king1;
    king1.Display();

    Bad king2;
    king2.Display();

    return 0;
}