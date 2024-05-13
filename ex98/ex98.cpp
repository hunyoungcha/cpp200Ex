#include <iostream>
#include <filesystem>

using namespace std;
namespace fs = std::filesystem;

int main(){
    if(fs::exists("C:\\Target") == true)
        cout << "존재" << endl;
    else
        cout << "없음" << endl;

    return 0;
}