#include <iostream>
#include <string>


using namespace std;

int main(){

    int num1 =10;
    double num2 =67.8;

    string str1= to_string(num1);
    string str2 = to_string(num2);

    cout << "num1 : " << str1 << endl;
    cout << "num2 : " << str2 << endl;

    return 0;
}