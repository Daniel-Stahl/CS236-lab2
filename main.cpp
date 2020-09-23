/*
Stahl, Daniel
CS236, Section #25704
 Fall 2020
*/

#include "convertNumbers.hpp"

int main() {
    int decimalNum;
    string hexNum;
    
    cout << "Convert decimal integer to binary and hex\n";
    cout << "Enter a positive decimal integer: ";
    cin >> decimalNum;
    
    while (!cin || decimalNum < 0) {
        cin.clear();
        cin.ignore(200, '\n');
        
        cout << "Wrong input, please enter a positive number: ";
        cin >> decimalNum;
        
    }
    
    cout << decimalNum << " is binary " << DecimalToBinary(decimalNum) << "\n";
    cout << decimalNum << " is Hex ";
    DecimalToHexadecimal(decimalNum);
    
    cout << "\nConvert a binary number to decimal integer\n";
    cout << "Enter a binary number: ";
    cin >> decimalNum;
    
    while (!cin || (decimalNum < 0 || decimalNum > 1)) {
        cin.clear();
        cin.ignore(200, '\n');
        
        cout << "Wrong input, please enter a binary number: ";
        cin >> decimalNum;
        
    }
    
    cout << decimalNum << " is decimal " << BinaryToDecimal(decimalNum);
    
    cout << "\nConvert a hexadecimal number to decimal integer\n";
    cout << "Enter a hex number: ";
    cin >> hexNum;
    
    while (!cin) {
        cin.clear();
        cin.ignore(200, '\n');
        
        cout << "Wrong input, please enter a hex number: ";
        cin >> decimalNum;
    }
    
    cout << hexNum << " is decimal " << HexadecimalToDecimal(hexNum);
}
