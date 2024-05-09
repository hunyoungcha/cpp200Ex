#include <iostream>

using namespace std;

class temp {
    int no;
    bool is_on;
};


int main(){
    cout << "char : " << sizeof('p') << endl;
    cout << "int : " << sizeof(10) << endl;
    cout << "double : " << sizeof(10.0) << endl;
    cout << "class : " << sizeof(temp)<< endl;

    return 0;
}