#include <iostream>

using namespace std;

void func1(int arr[2][2]){

    arr[0][0] = 1000;
}

void func2(int arr[][2], int row){
    arr[row-2][1]=2000;
}

void func3(int *arr, int row, int col){
    *((arr + row -1 ) + col -1) = 3000;
}

int main(){
    int data[2][2] {{1,2}, {3,4}};
    func1(data);
    func2(data,2);
    func3(*data,2,2);

    cout << "==결과==" <<endl;

    for (int i=0; i< 2; i++){
        for (int j=0; j<2; j++){
            cout << data[i][j] << endl;
        }
    }

    return 0;
}