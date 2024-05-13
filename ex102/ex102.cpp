#include <iostream>
#include <fstream>

using namespace std;

int main(){
    ifstream stream;
    stream.open("../ex101/(복사)전설.txt");

    if(stream.good()==true)
        cout << "존재" << endl;
    else
        cout << "없음" << endl;

    stream.close();

    return 0;
}