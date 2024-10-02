#include <iostream>
#include <cmath>
using namespace std;

int main (){
    int batas;

    cout << "Masukan batas bilangan: ";
    cin >> batas;

    cout << "Bilangan Ganjil: ";
    for (int i = 1; i <= batas; i++){
            if (i % 2 != 0){
                cout << i << " ";
            }
    }
    cout << endl;

    cout << "Bilangan Genap: ";
    for (int i = 1; i <= batas; i++){
            if (i % 2 == 0){
                cout << i << " ";
            }
    }
    return 0;
    }

