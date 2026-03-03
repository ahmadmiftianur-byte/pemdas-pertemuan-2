// library
#include <iostream>
using namespace std;

// deklarasi global
int p, l, luas;

// Implementasi prosedur dan fungsi
void input() {
    cout << "Masukkan panjang: ";
    cin >> p;
    cout << "Masukkan lebar: ";
    cin >> l;
}

int luaspersegi() {
    return p * l;
}

void output(){
    cout << "hasilnya = " << luaspersegi() << endl;
    cout << "terimash";
}

int main() { //mulai
    input();
    output();
} //selesai