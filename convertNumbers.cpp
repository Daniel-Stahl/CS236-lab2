#include "convertNumbers.hpp"

int DecimalToBinary(int decimal) {
    if (decimal == 0) {
        return 0;
    } else {
        return decimal % 2 + 10 * (DecimalToBinary(decimal/2));
    }
}

string DecimalToHexadecimal(int decimal) {
    string ret;
    
    return ret;
}

int BinaryToDecimal(string binary) {
    int ret = 0;
    
    return ret;
}

int HexadecimalToDecimal(string hex) {
    int ret = 0;
    
    return ret;
}


// HELPER FUNCTIONS //

string HexChecker(char hex) {
    // Check hex char and return binary value
    
    string ret;
    
    return ret;
}
