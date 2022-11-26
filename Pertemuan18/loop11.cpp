#include <iostream>
using namespace std;
int main ()
{
    int x;
    cout << "input: " << endl;
    cin >> x;
    for(int i=1; i<=x; i++) {
        for(int j=1; j<=10; j++) {
            cout << j << " x " << i << " = " << j*i << endl;
        }
        cout << "" << endl;
    }
    return 0;
}