#include <iostream>
#include <string>

using namespace std;

int main(){
    string sent = "i coding";
    sent.insert(2, "hate ");
    cout << sent << endl;

    sent.insert(7, "or like");
    cout << sent << endl;

    return 0;
}