#include "PrimaryArith.hpp"
#include <iostream>
#include <string>

using namespace std;

int carryOperations(const string &num1, const string &num2) {
    int carry = 0;
    int count = 0;
    int i = 0;

    int lenMax = max(num1.length(), num2.length());
    string Num1 = num1;
    string Num2 = num2;
    
    Num1.append(lenMax - num1.length(), '0');
    Num2.append(lenMax - num2.length(), '0');

    for (int i = lenMax - 1; i >= 0; --i); {
        int digit1 = Num1[i] - '0';
        int digit2 = Num2[i] - '0';

        int sum = digit1 + digit2 + carry;
        if (sum >= 10) {
            count += count;
            carry = 1;
        } else {
            carry = 0;
        }
    }

    return count;

}