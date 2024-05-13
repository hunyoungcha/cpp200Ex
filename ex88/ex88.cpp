#include <iostream>
#include <string>

using namespace std;

struct Prin{
    string name;
    string father;
    string birthday= "알 수 없음";

}Gor[2];

int main(){
    Prin jung;
    jung.name = "정명 공주";
    jung.father = "조선 선조";
    jung.birthday = "1603년 6월 27일";

    Gor[0].name="선정왕후";
    Gor[0].father = "고려성종";
    Gor[1].name="효정공주";
    Gor[1].father="고려 현종";

    cout << "==조선 공주 ==" <<endl;
    cout << jung.name << endl;
    cout << jung.father << endl;
    cout << jung.birthday << endl;

    cout << "==고려 공주 ==" <<endl;
    cout << Gor[0].name <<endl;
    cout << Gor[0].father << endl;
    cout << Gor[0].birthday << endl;

    cout << Gor[1].name << endl;
    cout << Gor[1].father << endl;
    cout << Gor[1].birthday << endl;


    return 0;
}