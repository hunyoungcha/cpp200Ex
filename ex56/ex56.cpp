#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main(){
    string silla = "divided into the Three Kingdoms";
    string joseon = "Yi Seong-gye, established Joseon in 1392";

    
    transform(silla.begin(),silla.end(),silla.begin(),tolower_l);
    cout << silla << endl;

    return 0;
}