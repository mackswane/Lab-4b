# Lab-4b
//question 1
#include <iostream>
using namespace std;

int Power(int b, int e)
{
    if(e == 0)
    {
       return 1;
    }
    return b * Power(b, e - 1);
}

int main()
{
    int b, e, c, r = 1;

    cout << "Enter base and exponent\n";
    cin >> b >> e;
    r = Power(b, e);
      
    cout << b << " raised to " << e<< " = " << r;
    return 0;
}
