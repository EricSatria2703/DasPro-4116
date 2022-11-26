#include <iostream>
using namespace std;
int main()
{
    float f = 0.0;
    cout << "--------------------------------"<< endl;
    cout << "Celcius            Fahrenheit" << endl;
    cout << "--------------------------------"<< endl;
    for (int c=0;c<101;c++) {
        f = (c*(9.0/5.0))+32.0;
        cout << c << "     :               ";
        cout.precision(1);
        cout << fixed << f << "     :" << endl;
    }
    cout << "--------------------------------" << endl;
    return 0;
}