#include <iostream>

using namespace std;

int main()
{

    int firstValue,secondValue, thirdValue;//memperkenalkan variabel
    firstValue = 10; //variabel pertama
    secondValue = 8; //variabel kedua

    cout<<"Cara pertama"<<endl;
    cout<<"Sebelum ditukar"<<endl;
    cout<<"First value = 10 "<<endl;//menampilkan firstValue adalah 10
    cout<<"Second value =  8"<< endl;//menampilkan secondValue adalah 8


    // BERTUKAR ANTAR VARIABEL
    thirdValue  = firstValue;//menukar variabel thirdValue menjadi variabel firstValue
    firstValue  = secondValue;//menukar variabel firstValue menjadi variabel secondValue
    secondValue = thirdValue;//menukar variabel secondValue menjadi variabel thirdValue

    //PENUKARAN NILAI FIRSTVALUE  KE SECONDVALUE DAN BEGITU PULA SEBALIKNYA
    cout<<"\nSetelah ditukar \nFirst value = "<<firstValue<<endl;//menampilkan hasil jika firstValue adalah 8
    cout<<"Second value = "<<secondValue<<endl<<endl;//menampilkan hasil jika secondValue adalah 10


    //PENUKARAN NILAI TANPA VARIABEL TAMBAHAN
    //reset nilai
    firstValue = 10;//variabel pertama
    secondValue = 8;//variabel kedua

    cout<<"cara kedua "<<endl;
    cout<<"Sebelum ditukar"<<endl;
    cout<<"First value = 10 "<<endl;//menampilkan firstValue adalah 10
    cout<<"Second value = 8 "<<endl<<endl;//menampilkan secondValue adalah 8

    //Bertukar antara variabel
    firstValue = firstValue + secondValue;//menjumlah  keduanya agar salah satu variabel bisa dikurang sehingga mendapat nilai salah satunya
    secondValue = firstValue - secondValue;//kurangi nilai fisrtValue dengan secondValue agar nilai dari second value nya berubah
    firstValue = firstValue - secondValue;// kurangi nilai firstValue yang baru dengan nilai secondValue baru sehingga tersisa nilai secondValue yang lama

    //penukaran variabel
    cout<<"Sesudah ditukar"<<endl;
    cout<<"First value = "<<firstValue<<endl;//menampilkan hasil jika firstValue adalah 8
    cout<<"Second value = "<<secondValue<<endl;//menampilkan hasil jika secondValue adalah 10



return 0;
}
