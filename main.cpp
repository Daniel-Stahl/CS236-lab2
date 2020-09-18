/*
Stahl, Daniel
CS236, Section #25704
 Fall 2020
*/

#include "convertNumbers.hpp"
#include <iostream>

int main() {
    int decimalNum;
    string binaryNum;
    string hexNum;
    
    cout << "Enter a positive decimal integer: ";
    cin >> decimalNum;
    
    cout << decimalNum << " is binary " << DecimalToBinary(decimalNum) << endl;
    cout << decimalNum << " is Hex ";
    DecimalToHexadecimal(decimalNum);
    
}
