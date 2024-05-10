#include <iostream>
#include <string>

using namespace std;

int main(){
    string sent= "i like coding";
    string findstr="coding";
    string replacestr="history";

    sent.replace(sent.find(findstr), findstr.length(),replacestr);
    cout << sent << endl;

    return 0;
}