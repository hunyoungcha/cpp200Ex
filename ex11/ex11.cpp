#include <iostream>

using namespace std;

void miinus(const int x, const int y){
    cout << "x - y = " << x-y << endl;
}

int pluss(const int x, const int y){
    return x+y;
}

int main(){

    miinus(10,5);
    cout << "x + y = " << pluss(10,5) << endl;


    return 0;
}