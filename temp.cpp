#include <iostream>
using namespace std;
int main()
{
    float f, c;
    cout << "enter fahrenheit : ";
    cin >> f;
    c=((f*5.0)-(5.0*32))/9;
    cout << " temperature in Celsius : "<<c<<endl;
    return 0;
}
