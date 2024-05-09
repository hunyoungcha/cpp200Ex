#include <iostream>

using namespace std;

int main(){
    int x = 10;
    int y = 20;

    bool isx=true;
    bool isy=false;

    if (isx == true && isy == true)
        cout << "x&&y" << "true" << endl;
    else
        cout <<  "x&&y" << false <<endl;

    if (x==10 || isx == false)
        cout << "x = 10 or x= true" << endl;
    else{
        cout << "x not 10 and isx not false" << endl;
    }

    if(!isy){
        cout << "isy false" << endl;
    }
    else {
        cout << "isy true" << endl;
    }

    return 0;
}