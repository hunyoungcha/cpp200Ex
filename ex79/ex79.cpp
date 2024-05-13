#include <iostream>

using namespace std;

enum Status{
    normal =0,
    abnormal ,
    disconnect = 100,
    close
};

int main(){
    Status number = close;

    if(number == Status:: normal)
        cout << "normal" << endl;
    else if (number == Status::abnormal)
        cout << "abnormal" << endl;
    else if (number == 101)
        cout << "disconnect" << endl;
    else 
        cout << "close" << endl;

    return 0;
}