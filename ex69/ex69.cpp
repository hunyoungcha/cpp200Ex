#include <iostream>


using namespace std;

int main(){
    int num1 = 10;
    int *ptr1 = &num1;

    double num2 = 23.4;
    double *ptr2 = &num2;

    
    cout << "num1 : " << num1 << " (size : " << sizeof(num1) << ")" << endl;
    cout << "ptr1 : " << ptr1 << " (size : " << sizeof(ptr1) << ")" << endl;
    
    cout << "num2 : " << num2 << " (size : " << sizeof(num2) << ")" << endl;
    cout << "ptr2 : " << ptr2 << " (size : " << sizeof(ptr2) << ")" << endl;


    

    return 0;
}