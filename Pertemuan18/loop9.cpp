#include <iostream>
using namespace std;
int main()
{
    int x;
    int i = 0;
    int sum = 0;
    cout << "input bil : ";
    cin >> x;
    while (x!=9999) {
        cout << x << endl;
        i++;
        sum = sum + x;
        cout << "input bil : ";
        cin >> x;
    }
    cout << "jumlah angka = " << sum << endl;
    cout << "jumlah cacah angka = " << i;
    return 0;
}