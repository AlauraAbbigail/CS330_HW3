#ifndef PrimaryArith_h
#define PrimaryArith_h

#include <string>
using namespace std;

int carryOperations(const string &num1, const string &num2);
/*
*Function: carryOperations
*Usage: int carryOps = carryOperations(num1, num2);
*--------------------------------------------------------
*takes the const references of the input nums and returns 
*the number of carry operations by traversing through each
*each digit, starting with the right-most because addition
*goes from right to left. The easiest way to do this is to
*essentially take the input length and subtract one to start
*at the "end". If the sum of two digits is greater or equal
*to 10, then count is incremented by itself plus one.
*/

#endif //PrimaryArith_h