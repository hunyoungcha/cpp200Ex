#include <iostream>
#include <bitset>

using namespace std;

int main(){
    bitset<8> bit1;
    bit1.reset();
    bit1 = 127;

    bitset<8> bit2;
    bit2.reset();
    bit2 = 0x20;

    bitset<8> bit3= bit1 & bit2; //and
    bitset<8> bit4= bit1 | bit2; //or
    bitset<8> bit5= bit1 ^ bit2; //xor
    bitset<8> bit6= ~bit1; //not 
    bitset<8> bit7= bit2 << 1; //shift
    bitset<8> bit8= bit2 >> 1; //shift

    cout <<  bit3 << "," << bit3.to_ulong() << endl;
    cout <<  bit4 << "," << bit4.to_ulong() << endl;
    cout <<  bit5 << "," << bit5.to_ulong() << endl;
    cout <<  bit6 << "," << bit6.to_ulong() << endl;
    cout <<  bit7 << "," << bit7.to_ulong() << endl;
    cout <<  bit8 << "," << bit8.to_ulong() << endl;

    return 0;
}