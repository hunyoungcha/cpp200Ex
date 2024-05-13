#include <iostream>
#include <string>

using namespace std;

void func1(int &arg){

    cout << "변경 전 : " << arg << endl;
    arg += 10;
    cout << "변경 후 : " << arg << endl;
}

void func2(string &info){

    info += "981년";
}

int main(){
    int year = 10;
    func1(year);

    cout << "func1 함수 종료 후 : " << year << endl;

    string kinginfo = "고려 성종 즉위년 " ;
    func2(kinginfo);

    cout << kinginfo << endl;

    return 0;
}