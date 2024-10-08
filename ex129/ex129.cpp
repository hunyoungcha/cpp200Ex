#include <iostream>
#include <stdarg.h>

int Sum(int arg, ...){
    va_list ap;
    va_start(ap, arg);

    int sum = 0;

    for(int i=0; i < arg; i++){
        sum += va_arg(ap,int);
    }

    va_end(ap);

    return sum;
}

int main(){
    int number = Sum(5,1,2,3,4,5);

    std::cout << number << std::endl;

    return 0;
}