#include <iostream>

inline int Max(int x, int y){
    return x > y? x: y;
}

int main(){
    for (int i = 0; i < 5; i++){
        std::cout << Max(i, i+10) <<std::endl;
    }

    return 0;
}