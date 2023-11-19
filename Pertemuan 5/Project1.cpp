#include <iostream>
using namespace std;

    void bilanganGanjil();
    void bilanganGenap();
    void bilanganPrima();

    int batas;
    int Ganjil = 0;
    int Genap = 0;
    int Prima = 0;

    int main (){

    cout<<"HAI!! SELAMAT DATANG DI"<<endl;
    cout<<"PROGRAM SEDERHANA INI (PENAMPIL BIL.GANJIL, GENAP, PRIMA & FAKTORNYA)"<<endl;
    cout<<"Silahkan Masukkan Batas Angka : ";
    cin>> batas;

    cout<<">>> BIL.GANJIL <<<"<<endl;

    bilanganGanjil();

    cout << "\nJumlah Bilangan GANJIL Dari Angka 1 Hingga " << batas << " Adalah : " << Ganjil;
    cout << "\nFaktor-Faktor Dari Jumlah Bilangan Ganjil Tersebut Adalah : ";

    for (int a = 1; a <= Ganjil; a++){
    if (Ganjil % a == 0){
    cout << a << " ";
        }
    }
    cout << endl << endl;

    //=======================================================================================================//

    cout<<">>> BIL.GENAP <<<"<<endl;

    bilanganGenap();

    cout << "\nJumlah Bilangan GENAP Dari Angka 1 Hingga " << batas << " Adalah : " << Genap;
    cout << "\nFaktor-Faktor Dari Jumlah Bilangan Genap Tersebut Adalah : ";

    for (int b = 1; b <= Genap; b++){
        if (Genap % b == 0){
        cout << b << " ";
        }
    }
    cout << endl << endl;

    //=======================================================================================================//

    cout<<">>> BIL.PRIMA <<<"<<endl;

    bilanganPrima();

    cout << "\nJumlah Bilangan PRIMA Dari Angka 1 Hingga " << batas << " Adalah : " << Prima;
    cout << "\nFaktor-Faktor Dari Jumlah Bilangan Prima Tersebut Adalah : ";

    for (int c = 1; c <= Prima; c++){
        if (Prima % c == 0){
        cout << c << " ";
        }
    }

    return 0;
    }

    void bilanganGanjil()
    {
        for (int i = 1; i <= batas; i++){
        if (i == 1){
        cout << "Bilangan Ganjil Dari Angka 1 Hingga " << batas << " Adalah : "; }
        if (i % 2 != 0){
        cout << i << " ";
        Ganjil+=i; } }
    }

    void bilanganGenap()
    {
        for (int j = 1; j <= batas; j++){
        if (j == 1){
        cout << "Bilangan Genap Dari Angka 1 Hingga " << batas << " Adalah : "; }
        if (j % 2 == 0){
        cout << j << " ";
        Genap+=j; } }
    }

    void bilanganPrima()
    {
        for (int k = 1; k <= batas; k++){
        if (k == 1){
        cout << "Bilangan Prima Dari 1 Hingga " << batas << " Adalah : "; }

        for (int l = 2; l <= batas; l++){
        if (k % l == 0 && k != l){
        break;

        } else if (k > 1 && k % l == 0 && k == l){
        cout << k << " ";
        Prima+=k; } } }

    }
