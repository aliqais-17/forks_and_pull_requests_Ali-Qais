#include <iostream>
using namespace std;

int main() {
   float num1, num2, sum, sub, mul, division, average;

   cout << "Enter two numbers: ";
   cin >> num1 >> num2;
//sum
   sum = num1 + num2;
//sub
   sub = num1 - num2;
//mul
   mul = num1 * num2;
//div
   division = num1 / num2;
   average = (num1 + num2) / 2;

   cout << "Sum = " << sum << endl;
   cout << "Sub = " << sub << endl;
   cout << "mul = " << mul << endl;
   cout << "division = " << division << endl;
   cout << "Average = " << average << endl;

   return 0;
}
