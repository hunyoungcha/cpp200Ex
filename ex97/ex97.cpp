//g++ -std=c++17 ex97.cpp -o ex97 -lstdc++fs

#include <iostream>
#include <filesystem> 

using namespace std;
namespace fs = std::filesystem;

int main(){
    cout << "Directory: " << fs::current_path() << endl;

    return 0;
}
