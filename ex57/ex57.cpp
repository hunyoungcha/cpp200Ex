#include <iostream>
#include <string>

using namespace std;

int main(){
    string king = "조선 세종";
    string fav1 = "고기" ;
    string fav2 = "야근";

    string kinginfo = "";
    kinginfo += king;
    kinginfo += "은";
    kinginfo += fav1;
    kinginfo += "와";
    kinginfo += fav2;
    kinginfo += "를 좋아함";

    cout << kinginfo << endl;

    return 0;
}