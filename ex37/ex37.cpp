#include <iostream>

using namespace std;

int main(){
    int number = 0;
    cin >> number ; 
    
    switch (number) {
        case 1:
            cout << "number is 1" << endl;
            break;

        case 2:
            cout << "number is 2" << endl;
            break;

        case 3:
            cout << "number is 3" << endl;
            break;

        default :
            cout << "Not Found Number" << endl;
            break;
    }


    return 0;
}