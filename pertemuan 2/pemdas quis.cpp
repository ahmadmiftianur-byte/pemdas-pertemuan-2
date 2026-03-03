#include <iostream>
using namespace std;

//deklarasi variable
float jariJari;
float phi = 3.14159;

//prosedur
void awal(){
    cout << "Masukkan jari-jari lingkaran: ";
    cin >> jariJari;
}
//fungsi preoses
float luas (float j){
    return phi * j * j; 
}
void akhir (){
    cout << "Hasil Luas untuk lingkaran dengan jari-jari " << luas(jariJari) << endl;
}
int main(){
    awal();
    akhir();
}