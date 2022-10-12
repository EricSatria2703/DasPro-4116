#include <iostream>

using namespace std;

int main()
{
    int panjang, pertama, kedua, lanjut;
    pertama = 0;
    kedua = 1;
    cout << "Deret Fibonacci" << endl;
    cout << "input panjang deret" << endl;
    cin >> panjang;

    for (int i=0; i < panjang;i++) {
        if (i == 0) {
            cout << pertama << ",";
            continue;
        }
        else if (i == 1) {
            cout << kedua << ",";
            continue;
        }
        lanjut = pertama + kedua;
        pertama = kedua;
        kedua = lanjut;
        cout << lanjut << ",";
    }
    return 0;
}
