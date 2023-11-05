#include <iostream>
using namespace std;
int main ()

{
    int a;
    cout<<"SELAMAT DATANG DIPEMBUAT PIRAMIDA MENGGUNAKAN BINTANG"<<endl;
    cout<<"Silahkan Masukkan Nilai Tinggi Piramida Yang Anda Inginkan : ";
    cin>>a;

    for (int b=0; b< a; b++) {
    for (int c=0; c<a-b-1; c++) {
    cout<<" ";
    }

    for (int d=0; d<2*b+1; d++){
    cout<<"*";
    }

    cout<<endl;
    }

return 0;
}
