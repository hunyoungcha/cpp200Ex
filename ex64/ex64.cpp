#include <iostream>
#include <sstream>

using namespace std;

int main(){
    stringstream ss;
    
    double num1=0.0;

    ss << "1.2,2.6-3.8!4.7=8.9";
    cout << "== string to double == " << endl;

    while (!ss.eof()){

        ss >> num1;
        ss.ignore();

        cout << num1 << ", ";
    }

    ss.clear();
    ss.str("");
    ss << "1," << "2" << 3 << " " << 4;

    int num2 =0;

    cout << endl << "== string to int ==" << endl;
    while (!ss.eof()){
        ss >> num2;
        ss.ignore();

        cout << num2 << ", " ;
    }


    return 0;
}