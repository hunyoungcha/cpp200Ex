#include <iostream>

using namespace std;

int main(){
    int num = 7;
    for (int i = 0; i < 10; i++){
        if (i % 3 ==0)
            continue;
        else if (i == num)
            break;
        else
            cout << "i : " << i << endl;
    }

    return 0;
}