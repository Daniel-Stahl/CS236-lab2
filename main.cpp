/*
Stahl, Daniel
CS236, Section #25704
 Fall 2020
*/

#include "convertNumbers.hpp"

bool CheckBinaryNum(int binary);

int main() {
    int decimalNum;
    string hexNum;
    int hexSize = 0;
    int x = 0;
    bool notCapitol =  false;
    
    // Decimal to Binary & Hex
    cout << "Convert decimal integer to binary and hex\n";
    cout << "Enter a positive decimal integer: ";
    cin >> decimalNum;

    while (!isdigit(decimalNum) && decimalNum < 0) {
        cin.clear();
        cin.ignore(200, '\n');

        cout << "Wrong input, please enter a positive number: ";
        cin >> decimalNum;
    }

    cout << decimalNum << " is binary " << DecimalToBinary(decimalNum) << "\n";
    cout << decimalNum << " is Hex ";
    DecimalToHexadecimal(decimalNum);

    // Binary to Decimal
    cout << "\nConvert a binary number to decimal integer\n";
    cout << "Enter a binary number: ";
    cin >> decimalNum;
    
    while (!CheckBinaryNum(decimalNum)) {
        cin.clear();
        cin.ignore(200, '\n');

        cout << "Wrong input, please enter a binary number: ";
        cin >> decimalNum;
    }

    cout << decimalNum << " is decimal " << BinaryToDecimal(decimalNum);
    
    // Hex to Decimal
    cout << "\nConvert a hexadecimal number to decimal integer\n";
    cout << "Enter a hex number: ";
    cin >> hexNum;
    
    hexSize = hexNum.size();
    while (x < hexSize && !notCapitol) {
        notCapitol = false;
        
        if (hexNum.at(x) >= 97) {
            notCapitol = true;
            cin.clear();
            cin.ignore(200, '\n');
            cout << "Wrong input, please enter a hex number with capitol letters: ";
            cin >> hexNum;
            
            x = 0;
        }
        
        x++;
    }
    
    cout << hexNum << " is decimal " << HexadecimalToDecimal(hexNum);
}

bool CheckBinaryNum(int binary) {
    int tempNum;
    
    while (binary != 0) {
        tempNum = binary % 10;
        
        if (tempNum > 1) {
            return false;
        }
        
        binary /= 10;
    }
    
    return true;
}
