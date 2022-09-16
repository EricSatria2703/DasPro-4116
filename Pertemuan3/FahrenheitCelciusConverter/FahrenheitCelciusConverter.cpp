#include <iostream>

using namespace std;

/*
Nama: Eric Satria Pratama
NIM: A11.2022.14601
Eksperimen atas apa yang sudah dipelajari pada pertemuan 3
*/

int main()
{
    string Rumus;
    float Fahrenheit;
    float Celcius;
    float HasilCelcius;
    float HasilFahrenheit;

    cout << "FahrenheitCelcius Converter" << endl;
    cout << "Input 'A' untuk mengubah Fahrenheit ke Celcius";
    cout << "\nInput 'B' untuk mengubah Celcius ke Fahrenheit" << endl;

    cout << " " << endl;

    cin >> Rumus;

    cout << " " << endl;

    if (Rumus == "A" || Rumus == "a") {
        cout << "Masukkan suhu dalam Fahrenheit" << endl;
        cin >> Fahrenheit;
        HasilCelcius = (Fahrenheit-32)*5/9;
        cout << Fahrenheit << " derajat fahrenheit sama dengan " << HasilCelcius << " derajat celcius" << endl;

    }

    
    else if (Rumus == "B" || Rumus == "b") {
        cout << "Masukkan suhu dalam Celcius" << endl;
        cin >> Celcius;
        HasilFahrenheit = (Celcius*9/5)+32;
        cout << Celcius << " derajat celcius sama dengan " << HasilFahrenheit << " derajat fahrenheit" << endl;
    }

    else {
        cout << "Input invalid" << endl;
    }
    return 0;
}
