#include <iostream>
using namespace std;
int main ()

{
    //MULAI
    //TUGAS KETIGA PERTEMUAN 3

    int sisi,panjang,lebar,alas,tinggi;
    char luas;

    cout<<"SELAMAT DI KALKULATOR SEDERHANA PENGHITUNG LUAS PERSEGI, PERSEGI PANJANG, DAN SEGITIGA!!"<<endl;
    cout<<"MASUKKAN HURUF 'A' JIKA INGIN MENGHITUNG LUAS PERSEGI"<<endl;
    cout<<"MASUKKAN HURUF 'B' JIKA INGIN MENGHITUNG LUAS PERSEGI PANJANG"<<endl;
    cout<<"MASUKKAN HURUF 'C' JIKA INGIN MENGHITUNG LUAS SEGITIGA"<<endl;

    cout<<"SILAHKAN TULIS HURUF YANG ANDA INGINKAN SESUAI PERINTAH : ";cin>>luas;

    //LUAS PERSEGI, PERSEGI PANJANG, SEGITIGA

    switch (luas){
    case 'A':
        cout<<"Menghitung Luas Persegi..."<<endl;
        cout<<"Masukkan Nilai Sisi : "<<endl;
        cin>>sisi;
        cout<<"Luas Persegi Adalah : "<<sisi*sisi<<endl;
        break;
    case 'B':
        cout<<"Menghitung Luas Persegi Panjang..."<<endl;
        cout<<"Masukkan Nilai Panjang : "<<endl;
        cin>>panjang;
        cout<<"Masukkan Nilai Lebar : "<<endl;
        cin>>lebar;
        cout<<"Luas Persegi Panjang Adalah : "<<panjang*lebar<<endl;
        break;
     case 'C':
        cout<<"Menghitung Luas Segitiga..."<<endl;
        cout<<"Masukkan Nilai Alas : "<<endl;
        cin>>alas;
        cout<<"Masukkan Nilai Tinggi : "<<endl;
        cin>>tinggi;
        cout<<"Luas Segitiga Adalah : "<<0.5*alas*tinggi<<endl;
        break;
     default :
        cout<<"Pertanyaan Anda Tidak Dapat Di Proses"<<endl;
        break;
    }

    //SELESAI

return 0;
}
