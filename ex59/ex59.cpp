#include <iostream>
#include <string>


using namespace std;

int main(){
    string sent= "i hate coding";
    sent.erase(0,7);
    cout << "i like " << sent << endl;

    return 0;
}