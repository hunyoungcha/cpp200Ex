#include <iostream>

using namespace std;

int x = 10;

int func1(){
    int y= x+ 10;
    return y;
}

int func2(){
    int x= 100;
    return x;
}

int main(){
    cout << "y= " << func1() << endl;
    cout << "x= " << func2() << endl;
    cout << "x= " << x << endl;

    return 0;
}