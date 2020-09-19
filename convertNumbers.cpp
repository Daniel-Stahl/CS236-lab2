enum HexValues {A = 10, B = 11, C = 12, D = 13, E = 14, F = 15};

#include "convertNumbers.hpp"

int DecimalToBinary(int decimal) {
    if (decimal == 0) {
        return 0;
    } else {
        return decimal % 2 + 10 * (DecimalToBinary(decimal/2));
    }
}

void DecimalToHexadecimal(int decimal) {
    string ret;
    int tempNum = 0;
    char tempChar;
    
    if (decimal == 0) {
        return;
    } else {
        DecimalToHexadecimal(decimal / 16);
        cout << HexCheck(decimal % 16);
        return;
    }
}

int BinaryToDecimal(int binary, int ret) {
    int temp = 0;
    int base = 1;
    
    if (binary == 0) {
        return 0;
    } else {
        base = base * 2;
        temp = binary % 10;
        ret += temp * base;
        BinaryToDecimal(binary / 10, ret);
        
        
        
        return ret;
        
    }
}

int HexadecimalToDecimal(string hex) {
    int ret = 0;
    
    return ret;
}


// HELPER FUNCTIONS //

char HexCheck(int decimal) {
    // Check hex char and return binary value
    if (decimal < 10) {
        return 48 + decimal;
    } else {
        return 55 + decimal;
    }
}
