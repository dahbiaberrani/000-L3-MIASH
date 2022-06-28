#include <iostream>
using namespace std;
#define PACKET_TYPE_MASK  (char) 0xFF;
#include <iomanip>
#include <bitset>



int main() {
    // typedef bitset<8> BYTE;
    // BYTE 
    char data = 0x55; //0101 
    string a = "toto";
    char packetPtype = data && PACKET_TYPE_MASK;
    cout << "data = " << hex <<  data << endl;
    cout << "packetPtype = " << bitset<8>(packetPtype)  << endl;
}
