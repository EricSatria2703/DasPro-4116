#include <iostream>

using namespace std;

int main()
{
    // CETAK BILANGAN 1-100 YANG MERUPAKAN BILANGAN GENAP
    /*
    for (int i = 1; i<101;++i) {
            if (i%2 == 0) {
                cout << i << " bilangan genap" << endl;
            }
    }
    */

    // CETAK BILANGAN 1-100 YANG MERUPAKAN BILANGAN GANJIL
    /*
    for (int i = 1; i<101;++i) {
            if (i%2 != 0) {
                cout << i << " bilangan ganjil" << endl;
            }
    }
    */

    // CETAK BILANGAN 1-100 YANG MERUPAKAN BILANGAN GENAP BERKELIPATAN 6
    /*
    for (int i = 1; i<101;++i) {
            if (i%2 == 0 && i%6 == 0) {
                cout << i << " bilangan genap berkelipatan 6" << endl;
            }
    }
    */

    // 3 SOAL SEKALIGUS
    
    for (int i = 1; i<101;++i) {
            if (i%2 == 0 && i%6 == 0) {
                cout << i << " bilangan genap dan berkelipatan 6" << endl;
            }
            else if (i%2 == 0) {
                cout << i << " bilangan genap" << endl;
            }
            else {
                cout << i << " bilangan ganjil" << endl;
            }
    }
    

    /*
    cout << "Bilangan Genap 1-100" << endl;
    for (int i = 1; i<101;++i) {
            if (i%2 == 0) {
                cout << i << " bilangan genap" << endl;
            }
    }

    cout << "" << endl;
    cout << "" << endl;

    cout << "Bilangan Ganjil 1-100" << endl;
    for (int i = 1; i<101;++i) {
            if (i%2 != 0) {
                cout << i << " bilangan ganjil" << endl;
            }
    }

    cout << "" << endl;
    cout << "" << endl;

    cout << "Bilangan Genap dan Berkelipatan 6" << endl;
    for (int i = 1; i<101;++i) {
            if (i%2 == 0 && i%6 == 0) {
                cout << i << " bilangan genap dan berkelipatan 6" << endl;
            }
    }
    */

    /*
    for (int a = 0; a < 2; a++) {
        for (int i = 1; i < 10; i++) {
            cout << i;
        }
    }
    */
    return 0;
}
