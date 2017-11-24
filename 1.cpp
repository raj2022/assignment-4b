#include <iostream>
using namespace std;
// Function to calculate base^exponent using recursion
int Power(int base, int exp)
{
    if(exp == 0)
    {
       return 1;
    }
    return base * Power(base, exponent - 1);
}
int main()
{
    int base, exp, counter, result = 1;
    cout<<"PROGRAM TO CALCULATE POWER OF A NUMBER USING RECURSSIONS \n \n";
    cout << "Enter base and exponent\n";
    cin >> base >> exp;
    result = Power(base, exp);
      
    cout << base << " raised to " << exp << " = " << result;
    return 0;
}
