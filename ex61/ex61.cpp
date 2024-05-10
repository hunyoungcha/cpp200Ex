#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
    string sent = "i like coding";
    sent.erase(remove(sent.begin(), sent.end(), ' '),sent.end());

    cout << sent << endl;

    return 0;
}