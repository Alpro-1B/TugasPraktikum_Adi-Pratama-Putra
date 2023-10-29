#include <iostream>
using namespace std;
int main ()

{
    //MULAI
    //TUGAS PERTAMA PERTEMUAN 3

    int nilai;
    string inputNama;
    string inputNpm;
    string inputKelas;

    //OUTPUT & INPUT

    cout<<"Input Nama : ";
    cin>>inputNama;
    cout<<"Input NPM : ";
    cin>>inputNpm;
    cout<<"Input Kelas : ";
    cin>>inputKelas;
    cout<<"Input Nilai : ";
    cin>>nilai;

    //EVALUASI NILAI

    if(nilai >=90){
    cout<<"Selamat! Anda mendapatkan nilai A."<<endl;
    }else if (nilai >=80){
    cout<<"Anda mendapatkan nilai B."<<endl;
    }else if (nilai >=70){
    cout<<"Anda mendapatkan nilai C."<<endl;
    }else if (nilai >=60){
    cout<<"Anda mendapatkan nilai D."<<endl;
    }else{
    cout<<"Anda mendapatkan nilai E."<<endl;
    }

    //SELESAI

return 0;
}
