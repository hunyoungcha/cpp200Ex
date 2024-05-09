#include <string>
#include <iostream>

using namespace std;

int main(){

    string publ ="publ";
    string lang = "c++";

    int x= 10;
    int y= 10;

    if (publ != lang )
        cout << "x != y" << endl;
    else
        cout << "x == y" << endl;
    
    if (x > y)
        cout << "x >=y" << endl;
    else 
        cout << "x <= y" << endl;

    if (x<=20)
        cout << "x <= 20" << endl;
    else
        cout << "x >= 20" << endl;

    return 0;
}