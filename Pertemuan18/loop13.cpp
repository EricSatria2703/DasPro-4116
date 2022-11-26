#include <iostream>
using namespace std;
int main()
{
    float f;
    int c = 101;
    string k;
    cout << "----------------------------------------------------------"<< endl;
    cout << "Celcius            Fahrenheit           keterangan" << endl;
    cout << "-----------------------------------------------------------"<< endl;
    while (c != -41) {
        c--;
        if (c==100) {
            f = (c*(9.0/5.0))+32.0;
            k = "Air mendidih";
            cout << c << "                  ";
            cout.precision(1);
            cout << fixed << f << "               " << k << endl;
            continue;
        }
        else if (c==40) {
            f = (c*(9.0/5.0))+32.0;
            k = "Air mandi panas";
            cout << c << "                     ";
            cout.precision(1);
            cout << fixed << f << "               " << k << endl;
            continue;
        }
        else if (c==37) {
            f = (c*(9.0/5.0))+32.0;
            k = "Temperatur tubuh";
            cout << c << "                     ";
            cout.precision(1);
            cout << fixed << f << "               " << k << endl;
            continue;
        }
        else if (c==30) {
            f = (c*(9.0/5.0))+32.0;
            k = "Cuaca pantai";
            cout << c << "                     ";
            cout.precision(1);
            cout << fixed << f << "               " << k << endl;
            continue;
        }
        else if (c==21) {
            f = (c*(9.0/5.0))+32.0;
            k = "Temperatur ruangan";
            cout << c << "                     ";
            cout.precision(1);
            cout << fixed << f << "               " << k << endl;
            continue;
        }
        else if (c==10) {
            f = (c*(9.0/5.0))+32.0;
            k = "Hari yang dingin";
            cout << c << "                     ";
            cout.precision(1);
            cout << fixed << f << "               " << k << endl;
            continue;
        }
        else if (c==0) {
            f = (c*(9.0/5.0))+32.0;
            k = "Titik beku air";
            cout << c << "                     ";
            cout.precision(1);
            cout << fixed << f << "               " << k << endl;
            continue;
        }
        else if (c==-18) {
            f = (c*(9.0/5.0))+32.0;
            k = "Cuaca dingin bersalju";
            cout << c << "                     ";
            cout.precision(1);
            cout << fixed << f << "               " << k << endl;
            continue;
        }
        else if (c==-40) {
            f = (c*(9.0/5.0))+32.0;
            k = "Cuaca sangat dingin bersalju";
            cout << c << "                     ";
            cout.precision(1);
            cout << fixed << f << "               " << k << endl;
            continue;
        }
    }
    cout << "-----------------------------------------------------------"<< endl;
    return 0;
}