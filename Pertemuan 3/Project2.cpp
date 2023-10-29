#include <iostream>
using namespace std;
int main ()

{
    //MULAI
    //TUGAS KEDUA PERTEMUAN 3

    int a,b,c;
    cout<<"Input Nilai A : ";
    cin>> a;
    cout<<"Input Nilai B : ";
    cin>> b;
    cout<<"Input Nilai C : ";
    cin>> c;

    if (a>b && a>c) {
    cout<<"Nilai Terbesar Adalah : "<<a<<endl;
    }else if(b>a && b>c) {
    cout<<"Nilai Terbesar Adalah : "<<b<<endl;
    }else if(c>a && c>b) {
    cout<<"Nilai Terbesar Adalah : "<<c<<endl;
    }else{
    cout<<"Nilai Yang Anda Inputkan Tidak Valid"<<endl;
    }

    //SELESAI

return 0;
}
