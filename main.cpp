#include <iostream>
#include <string>
#include "PrimaryArith.hpp"

using namespace std;

int main() {
    string num1;
    string num2;

    while(true) {
        cin >> num1 >> num2;
        if (num1 == "0" && num2 == "0") {
            break;
        }

        int count = carryOperations(num1, num2);

        if (count == 0) {
            cout << "No carry operation." << endl;
        } else if (count == 1) {
            cout << "1 carry operation." << endl;
        } else {
            cout << count << " carry operations." << endl;
        }
    }

    return 0;
}