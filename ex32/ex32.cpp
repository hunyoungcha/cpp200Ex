#include <iostream>

using namespace std;

int main(){
    int number1 = 100;
    int number2 = 6;

    if(number1 < number2)
        cout << "num1 < num2" << endl;
    else if(number1 > number2)
        cout << "num1 > num2" << endl;
    else
        cout << "num1 == num2 " << endl;

    if (number2 < 7)
        if (number2 > 3)
            {
                if(number2 == 4 )
                    cout << "number2 == 4" << endl;
                else if(number2 == 5)
                    cout << "number2 == 5" << endl;
                else 
                    cout << "number2 == 6" << endl;
            }
        else{
            if (number2 ==3)
                cout << "number2 == 3" << endl;
            else if (number2 ==2 )
                cout << "number2 == 2" << endl;
            else 
                cout << "number2 <= 1" << endl;
        }

    return 0;
}