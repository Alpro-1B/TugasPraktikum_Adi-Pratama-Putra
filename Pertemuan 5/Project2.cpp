#include <iostream>
using namespace std;

    void bintang(int panjang);

    int main (){

    int piramida;
    cout<<"SELAMAT DATANG DIPEMBUAT PIRAMIDA MENGGUNAKAN BINTANG"<<endl;
    cout<<"Silahkan Masukkan Nilai Tinggi Piramida Yang Anda Inginkan : ";
    cin>>piramida;

    bintang(piramida);

    return 0;
    }

    void bintang (int panjang){
    for(int a=1; a<=panjang;  a++) {
    for(int b=1; b<=panjang-a; b++){
    cout<<" "; }
    for(int c=1; c<=a; c++) {
    cout<<" *"; }
    cout<<endl;
    }
}
