#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main(){
    const string filename="096.txt";

    ofstream fileout;
    fileout.open(filename, ifstream::out);

    fileout << "고구려 ... " << endl;
    fileout << "사랑의 ... " << endl;

    fileout.close();

    ifstream filein;
    filein.open(filename, ifstream::in);

    string line;

    while (getline(filein, line)){
        cout << line << endl; 
    }

    filein.close();

    return 0;
}