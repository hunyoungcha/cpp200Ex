#include <iostream>

using namespace std;

void func1(bool *is_on){
    cout << "call by address : " << sizeof(is_on) << endl; 
}

void func2(bool &is_on){
    cout << "call by reference : " << sizeof(is_on) << endl;
}

int main(){
    bool is_tmp=true;

    func1(&is_tmp);
    func2(is_tmp);

    return 0;
}