#include <iostream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = std::filesystem;

int main(){
    string dict= "/";

    for (auto& name : fs::directory_iterator(dict))
        std::cout << name << '\n';

    return 0;
}