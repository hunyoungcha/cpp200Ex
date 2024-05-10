#include <iostream>


using namespace std;

int main(){
    const int ksize=3;

    int numbers[ksize] = {10,20,30};
    int *ptr1 = numbers;

    int no1 = 1;
    int no2 = 2;
    int no3 = 3;
    int *ptr2[ksize] = {&no1, &no2, &no3};

    for (int i =0; i< ksize; i++){
        cout << "pointer1[" << i << "] = " << (*ptr1 +i) << endl;
    }       

    for (int i =0; i< ksize; i++){
        cout << "pointer2[" << i << "] = " << (*ptr2[i]) << endl;
    }       

    return 0;
}