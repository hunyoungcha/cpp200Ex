#include <iostream>
#include <string>

using namespace std;

class KingInfo{

public:
    KingInfo(){
        value_ = "조선~~";
    };

    KingInfo(const string value){
        value_=value;
    };

    KingInfo(const int value){
        value_="연산군~~";
        value_+=to_string(value);
    };

public:
    string GetValue() const {
        return value_;
    }

private:
    string value_;

};

int main(){
    KingInfo info1;
    KingInfo info2("조선 연산군~~");
    KingInfo info3(1494);

    cout << info1.GetValue() << endl;
    cout << info2.GetValue() << endl;
    cout << info3.GetValue() << endl;

    return 0;
}