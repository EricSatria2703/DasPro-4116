#include <iostream>
using namespace std;
int main()
{
    int x;
    int i = 0;
    cout << "input bil : ";
    cin >> x;
    while (x!=9999) {
        cout << x << endl;
        i++;
        cout << "input bil : ";
        cin >> x;
    }
    cout << "jumlah angka = " << i;
    return 0;
}