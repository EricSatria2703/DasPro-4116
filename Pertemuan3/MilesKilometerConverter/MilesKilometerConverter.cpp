#include <iostream>

using namespace std;

int main()
{
    string Rumus;
    float Mls;
    float KM;
    float HasilKM;
    float HasilMls;
    cout << "MilesKilometer Converter" << endl;
    cout << "Input 'A' untuk mengubah m/h ke km/h";
    cout << "\nInput 'B' untuk mengubah km/h ke m/h" << endl;
    cout << "Gunakan huruf Besar" << endl;

    cout << " " << endl;

    cin >> Rumus;

    cout << " " << endl;

    if (Rumus == "A") {
        cout << "Masukkan kecepatan dalam m/h" << endl;
        cin >> Mls;
        HasilMls = Mls*1.60934;
        cout << Mls << " m/h sama dengan " << HasilMls << " km/h" << endl;
    }

    if (Rumus == "B") {
        cout << "Masukkan kecepatan dalam km/h" << endl;
        cin >> KM;
        HasilKM = KM/1.60934;
        cout << KM << " km/h sama dengan " << HasilKM << " m/h" << endl;
    }
    return 0;
}
