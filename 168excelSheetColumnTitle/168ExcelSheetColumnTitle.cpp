//============================================================================
// Name        : LeetCode.cpp
// Author      : Kevin Trochez
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <string>

std::string convertToTitle(int columnNumber) {
    std::string result = "";

    while (columnNumber > 0) {
        int remainder = (columnNumber - 1) % 26;
        char columnChar = 'A' + remainder;
        result = columnChar + result;
        columnNumber = (columnNumber - 1) / 26;
    }

    return result;
}

int main() {
    int columnNumber1 = 1;
    std::cout << "Column " << columnNumber1 << ": " << convertToTitle(columnNumber1) << std::endl;

    int columnNumber2 = 28;
    std::cout << "Column " << columnNumber2 << ": " << convertToTitle(columnNumber2) << std::endl;

    int columnNumber3 = 701;
    std::cout << "Column " << columnNumber3 << ": " << convertToTitle(columnNumber3) << std::endl;
    
    int columnNumber4 = 18;
    std::cout << "Column " << columnNumber4 << ": " << convertToTitle(columnNumber4) << std::endl;
    
    int columnNumber5 = 70;
    std::cout << "Column " << columnNumber5 << ": " << convertToTitle(columnNumber5) << std::endl;

    return 0;
    
    }

