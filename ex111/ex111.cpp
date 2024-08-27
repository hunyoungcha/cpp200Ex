#include <iostream>

static class Calculator{
    public:
        int Plus(const int x, const int y) const {
            return x+y;
        }
} calc;

int main(){
    std::cout << "1+2 = " << calc.Plus(1,2) << std::endl;

    return 0;
}