#include <iostream>
#include <filesystem>
#include <string>

using namespace std;
namespace fs = std::filesystem;

int main(){
    fs::copy("전설.txt","(복사)전설.txt");
    fs::remove("전설.txt");

    return 0;
}