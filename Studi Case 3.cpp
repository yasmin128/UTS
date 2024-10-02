#include <iostream>
using namespace std;

// penjumlahan
int penjumlahan(int a, int b) {
    return a + b;
}

// pengurangan
int pengurangan(int a, int b) {
    return a - b;
}

// perkalian
int perkalian(int a, int b) {
    return a * b;
}

// pembagian
float pembagian(int a, int b) {
    if (b == 0) {
        cout << "Tidak dapat membagi dengan nol!" << endl;
        return 0;
    } else {
        return (float)a / b;
    }
}

int main() {
    int pilihan, angka1, angka2;

    cout << "Pilih operasi matematika:\n";
    cout << "1. Penjumlahan\n";
    cout << "2. Pengurangan\n";
    cout << "3. Perkalian\n";
    cout << "4. Pembagian\n";
    cout << "Masukkan pilihan: ";
    cin >> pilihan;

    cout << "Masukkan angka pertama: ";
    cin >> angka1;
    cout << "Masukkan angka kedua: ";
    cin >> angka2;

    switch (pilihan) {
        case 1:
            cout << "Hasil dari penjumlahan untuk " << angka1 << " dan " << angka2 << " adalah " << penjumlahan(angka1, angka2) << endl;
            break;
        case 2:
            cout << "Hasil dari pengurangan untuk " << angka1 << " dan " << angka2 << " adalah " << pengurangan(angka1, angka2) << endl;
            break;
        case 3:
            cout << "Hasil dari perkalian untuk " << angka1 << " dan " << angka2 << " adalah " << perkalian(angka1, angka2) << endl;
            break;
        case 4:
            cout << "Hasil dari pembagian untuk " << angka1 << " dan " << angka2 << " adalah " << pembagian(angka1, angka2) << endl;
            break;
        default:
            cout << "Pilihan tidak valid!" << endl;
    }

    return 0;
}
