#include <iostream>

using namespace std;

enum Status{
    normal =0,
    abnormal ,
    disconnect = 100,
    close
};

enum class MachStatus : char{
    normal = 'n',
    abnormal,
    disconnect = 100,
    close
};

int main(){
    MachStatus mach = MachStatus::abnormal;

    if (mach == MachStatus::normal)
        cout << "normal" << endl;
    else if (mach == MachStatus::abnormal)
        cout << "abnormal" << endl;
    else if (mach == MachStatus::disconnect)
        cout << "disconnect" << endl;
    else 
        cout << "close" << endl;

    cout << "mach : " << static_cast<int>(mach) << ", " << static_cast<char>(mach) << endl;

    return 0;
}