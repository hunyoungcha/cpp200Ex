#include <iostream>

using namespace std;


int main(){
    int num1= 100;
    int num2= 200;
    int num3= 300;

    if (num1 > num2 && num1 > num3)
        cout << "num1 : " << num1 << endl;
    else if (num2 > num1 && num2 > num3)
        cout << "num2 : " << num2 << endl;
    else if (num3 > num1 && num3 > num2 )
        cout << "num3 : " << num3 << endl;
    else 
        cout << "NotFound" << endl;


    return 0;
}