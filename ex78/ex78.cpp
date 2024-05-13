#include <iostream>

using namespace std;

int main(){
    int num1 = 10;
    int num2 = 20;

    int const *ptr1;
    ptr1= &num1;
    ptr1= &num2;

    int *const ptr2 = &num1;
    *ptr2 = num2;


    return 0;
}