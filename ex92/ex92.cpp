#include <iostream>
#include <string>

using namespace std;

struct Info{
    string coun;

    struct Who{
        string name;
        string nickname;
    }who;
};

int main(){
    Info chuck = {"고려", {"장군", "마스터"}};
    Info anjang = {"고구려", "안장왕", "한주"};

    cout << chuck.coun << ", " << chuck.who.name << ", " << chuck.who.nickname << endl;
    cout << anjang.coun << ", " << anjang.who.name << ", " << anjang.who.nickname << endl;

    return 0; 
}