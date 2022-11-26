#include <iostream>
using namespace std;
int main ()
{
    for(int i=1;i<=4;i++) {
        cout << "Looping Yang Ke-" << i << endl;
        for (int j=1;j<=10;j++) {
            cout << "-angka " << j << "-"<< endl;
        }
        cout << "" << endl;
    }
    return 0;
}