#include <iostream>
using namespace std;
int main ()
{
    int more = 0;
    int mult = 0;
    int array[2][3][2] {
        {{2,4}, {6,8}, {10,12}},
        {{14,16}, {18,20}, {22,24}}
    };

    for (int i=0;i<2;i++) {
        for (int j=0;j<3;j++) {
            for (int k=0;k<2;k++) {
                cout << array[i][j][k] << endl;
                if (array[i][j][k] > 10) {
                    more++;
                }
                if (array[i][j][k] % 4 == 0) {
                    mult++;
                }
            }
        }
    }
    cout << more << endl;
    cout << mult;

    return 0;
}