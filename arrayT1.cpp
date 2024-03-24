#include <iostream>
using namespace std;
int main()
{
    int a;
    cout << "Masukkan panjang array : ";
    cin >> a;
    int genap[a], ganjil[a], array[a];
    int tgenap = 0, tganjil = 0;

    cout << "Masukkan " << a << " angka\n";
    for (int i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i+1) << ": ";
        cin >> array[i];

        if (array[i] % 2 == 0) {
            genap[tgenap] = array[i];
            tgenap++;
        } else {
            ganjil[tganjil] = array[i];
            tganjil++;
        }
    }
    cout << "\nData Array   : ";
    for (int i = 0; i < a; i++) {
        cout << array[i] << " ";
    }
    cout << "\nNomor Genap  : ";
    for (int i = 0; i < tgenap; i++) {
        cout << genap[i] << ", ";
    }
    cout << "\nNomor Ganjil : ";
    for (int i = 0; i < tganjil; i++) {
        cout << ganjil[i] << ", ";
    }
    return 0;
}