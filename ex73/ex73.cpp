#include <iostream>

using namespace std;

extern int g_num=100;

int func1(){

    return g_num++;
}

int func2(){

    return g_num++;
}

int main(){

    int num=g_num++;

    cout << "메인num : " << num << endl;
    cout << "Func1 num : " << func1() << endl;
    cout << "Func2 num : " << func2() << endl;
    
}