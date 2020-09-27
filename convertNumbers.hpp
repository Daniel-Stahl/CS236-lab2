#include <string>
#include <iostream>
#include <sstream>
using namespace std;

string DecimalToBinary(int decimal);
void DecimalToHexadecimal(int decimal);
int BinaryToDecimal(string binary, int x);
int HexadecimalToDecimal(string hex);

// HELPER FUNCTIONS //

char HexConverter(int decimal);
