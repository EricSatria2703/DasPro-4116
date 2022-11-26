#include <iostream>
using namespace std;
int main()
{
    int x;
    int sum = 0;
    cout << "input bil : ";
    cin >> x;
    while (x!=9999) {
        cout << x << endl;
        sum = sum + x;
        cout << "input bil : ";
        cin >> x;
    }
    cout << "jumlah angka = " << sum;
    return 0;
}