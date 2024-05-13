#include <iostream>
#include <string>

using namespace std;

class KingInfo{

public:
    KingInfo(){
        name_= "조선~~";
    };

public:
    string GetName() const{
        return name_;
    }

private:
    string name_;

};


int main(){
    KingInfo king;
    cout << king.GetName() <<endl;

    return 0;
}