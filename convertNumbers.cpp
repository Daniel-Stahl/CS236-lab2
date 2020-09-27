#include "convertNumbers.hpp"

string DecimalToBinary(int decimal) {
    if (decimal == 0) {
        return "";
    } else {
        ostringstream num;
        num << decimal % 2;
        return DecimalToBinary(decimal/2) + num.str();
    }
}

void DecimalToHexadecimal(int decimal) {
    if (decimal == 0) {
        return;
    } else {
        DecimalToHexadecimal(decimal / 16);
        cout << HexConverter(decimal % 16);
        return;
    }
}

int BinaryToDecimal(string binary, int x) {
    int binarySize = binary.size();
    
    if (x == binarySize - 1) {
        return binary[x] - '0';
    } else {
        return ((binary[x] - '0') << (binarySize-x-1)) + BinaryToDecimal(binary, x+1);
    }
}

int HexadecimalToDecimal(string hex) {
    if (hex.empty()) {
        return 0;
    } else {
        char tempChar = hex.back();
        hex.pop_back();
        int hexNum = tempChar >= '0' && tempChar <= '9' ? tempChar - '0' : tempChar - 'A' + 10;
        return 16 * HexadecimalToDecimal(hex) + hexNum;
    }
}

char HexConverter(int decimal) {
    if (decimal < 10) {
        return 48 + decimal;
    } else {
        return 55 + decimal;
    }
}
