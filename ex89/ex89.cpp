#include <iostream>
#include <string>

using namespace std;

struct Prin{
    string name;
    string father;
    string birthday;
}jungso;

void Print(Prin *who){
    cout << "jungso.name = " << jungso.name << endl;
    cout << "jungso.father = " << jungso.father << endl;
    cout << "jungso.birthday = " << jungso.birthday << endl;
    
}

int main(){
    jungso.name="정소공주";
    jungso.father="조선 태종";
    jungso.birthday = "1412년";

    Print(&jungso);

    return 0;
}