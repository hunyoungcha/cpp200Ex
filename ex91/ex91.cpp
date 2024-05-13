#include <iostream>

using namespace std;

struct Data1{
    int number;
};

struct Data2{
    Data1 data1;

    int number;
}data2;

int main(){

    Data1 data1 = { };
    Data2 data2 = {data1,10};
    cout << "data1 : " << data1.number << endl;
    cout << "data2 : " << data2.number << endl;

    return 0;
}