/*
Stahl, Daniel
CS236, Section #25704
 Fall 2020
*/

#include "convertNumbers.hpp"

int main() {
    int decimalNum;
    int binaryNum;
    string hexNum;
    
    cout << "Convert decimal integer to binary and hex\n";
    cout << "Enter a positive decimal integer: ";
    cin >> decimalNum;
    
    cout << decimalNum << " is binary " << DecimalToBinary(decimalNum) << "\n";
    cout << decimalNum << " is Hex ";
    DecimalToHexadecimal(decimalNum);
    cout << "\n";
    
    //cin.clear();
    
    cout << "Convert a binary number to decimal integer\n";
    cout << "Enter a binary number: ";
    cin >> decimalNum;
    
    cout << decimalNum << " is decimal " << BinaryToDecimal(decimalNum, 0);
    
    
    
}
