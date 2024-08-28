#include <iostream>
#include <string>

class Ondal{
    public :
        friend void GetYear(Ondal ondal) { std::cout << "연도 : " << ondal.year_ <<std::endl; };

        void SetYear(int year) {
            year_ = year;
        };

    private:
        int year_;
    
};

int main(){
    Ondal ondal;
    ondal.SetYear(590);

    GetYear(ondal);

    return 0;
}