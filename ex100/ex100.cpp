#include <iostream>
#include <filesystem>
#include <fstream>


using namespace std;
namespace fs = std::filesystem;

int main(){
    fs::create_directory("temp");
    fs::copy("temp","temp_copy");
    fs::remove("temp");
    fs::remove("temp_copy");

    return 0;
}