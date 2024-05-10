#include <iostream>

using namespace std;

int temp1(const int arg){
    int num =20;
    return num + 1;
}

int temp2(const int arg){
    int num = arg;
    return num+1;
}

int main(){
    int num=10;

    int rtn1= temp1(num);
    int rtn2= temp2(num);

    cout << "main num : " << num << endl;
    cout << "temp1 num : " << rtn1 << endl;
    cout << "temp2 num : " << rtn2 << endl;


    return 0;
}