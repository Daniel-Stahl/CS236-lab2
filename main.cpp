/*
Stahl, Daniel
CS236, Section #25704
Fall 2020
*/

#include "convertNumbers.hpp"

bool CheckDecimalNum(string decimal);
bool CheckBinaryNum(string binary);
bool CheckHexNum(string hex);

int main() {
    string decimalNum;
    int decimal = 0;
    string hexNum;
    
    // Decimal to Binary & Hex
    cout << "Convert decimal integer to binary and hex\n";
    cout << "Enter a positive decimal integer: ";
    cin >> decimalNum;
    
    while (!CheckDecimalNum(decimalNum)) {
        cin.clear();
        cin.ignore(200, '\n');

        cout << "Wrong input, please enter a positive number: ";
        cin >> decimalNum;
    }
    
    stringstream userInput(decimalNum);
    userInput >> decimal;
    
    cout << decimalNum << " is binary " << DecimalToBinary(decimal) << "\n";
    cout << decimalNum << " is Hex ";
    DecimalToHexadecimal(decimal);
    cout << "\n";
    
    
    // Binary to Decimal
    cout << "\nConvert a binary number to decimal integer\n";
    cout << "Enter a binary number: ";
    cin >> decimalNum;
    
    while (!CheckDecimalNum(decimalNum) || !CheckBinaryNum(decimalNum)) {
        cin.clear();
        cin.ignore(200, '\n');

        cout << "Wrong input, please enter a binary number: ";
        cin >> decimalNum;
    }
    
    cout << decimalNum << " is decimal " << BinaryToDecimal(decimalNum, 0);
    cout << "\n";
    
    // Hex to Decimal
    cout << "\nConvert a hexadecimal number to decimal integer\n";
    cout << "Enter a hex number: ";
    cin >> hexNum;
    
    while (!CheckHexNum(hexNum)) {
        cin.clear();
        cin.ignore(200, '\n');

        cout << "Wrong input, please enter a hex number with capitol letters: ";
        cin >> hexNum;
    }
    
    cout << hexNum << " is decimal " << HexadecimalToDecimal(hexNum);
}

bool CheckDecimalNum(string decimal) {
    int x = 0;
    int stringSize = decimal.size();

    while (x < stringSize) {
        if (!isdigit(decimal.at(x))) {
            return false;
        }
        
        x++;
    }
    
    return true;
}

bool CheckBinaryNum(string binary) {
    int x = 0;
    int binarySize = binary.size();
    
    while (x < binarySize) {
        if (binary.at(x) < '0' || binary.at(x) > '1') {
            return false;
        }
        
        x++;
    }
    
    return true;
}

bool CheckHexNum(string hex) {
    int x = 0;
    int hexSize = hex.size();
    
    while (x < hexSize) {
        if (hex.at(x) >= 71) {
            return false;
        }
        
        x++;
    }
    
    return true;
}
