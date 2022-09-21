#include <iostream>
using namespace std;

int main()
{
    //
    int Panjang;
    int Lebar;
    int Tinggi;
    int Hasil;

    cout << "Input Panjang" << endl;
    cin >> Panjang;
    cout << "Input Lebar" << endl;
    cin >> Lebar;
    cout << "Input Tinggi" << endl;
    cin >> Tinggi;

    //Rumus
    Hasil = 2*((Panjang*Lebar)+(Panjang*Tinggi)+(Lebar*Tinggi));

    cout << Hasil << endl;
    return 0;







}