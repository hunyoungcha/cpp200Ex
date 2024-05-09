#include <string>
#include <iostream>

using namespace std;

int main(){
    string my_country = "korea";
    string my_job = "dev";

    cout << "country : " << my_country << endl;
    cout << "job : " << my_job << endl;
    string my_info = my_country + ", " + my_job;
    cout << "my info " <<  my_info << endl;


    return 0;
}