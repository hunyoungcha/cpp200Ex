#include <iostream>

using namespace std;

int main(){
    int x=1;
    int y=2;
    int z=0;

    z= x > y ? x : y;

    cout << "num is " << z << endl;
    return 0;
}