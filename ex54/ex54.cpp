#include <iostream>
#include <string>

using namespace std;

int main(){
    string bak= "백합벌 전투 : 백제 왕자 부여창의 일기토로 유명한 전투";
    int rtn = bak.find("부여창");

    if (rtn >0)
        cout << "문자열을 찾았습니다 : " << rtn << endl;
    else
        cout << "문자열을 찾지 못했습니다. " << endl;


    return 0;
}