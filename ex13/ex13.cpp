#include <iostream>

using namespace std;

namespace silla{
    int year = 935;
    
    void Centr(){
        cout << "ky" << endl;
    }
}

namespace baekjae{
    int year=660;
    void Centr(){
        cout << "ch" << endl;
    }
}

using namespace silla;
using namespace baekjae;

int main(){
    cout << "silla : ";
    silla::Centr(); 
    cout << "end : ";
    cout << silla::year << endl;

    cout << "baekjae : ";
    baekjae::Centr();
    cout << "end : ";
    cout << baekjae::year << endl;
    
    return 0;
}