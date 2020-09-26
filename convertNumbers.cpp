#include "convertNumbers.hpp"

int DecimalToBinary(int decimal) {
    if (decimal == 0) {
        return 0;
    } else {
        return decimal % 2 + 10 * (DecimalToBinary(decimal/2));
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

int BinaryToDecimal(int binary) {
    if (binary == 0) {
        return 0;
    } else {
        return binary % 10 + 2 * BinaryToDecimal(binary/10);
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

// HELPER FUNCTIONS //
char HexConverter(int decimal) {
    if (decimal < 10) {
        return 48 + decimal;
    } else {
        return 55 + decimal;
    }
}
