#include <iostream>

using namespace std;

int main(){
    int number= 0;

    do {
        number ++;

        if (number %3 == 0)
            continue;
        else   
            cout << "number is " << number << endl;
    }
    while (number < 10);

    return 0;
}