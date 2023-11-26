    #include <iostream>
    using namespace std;

    int main(){

    int indeks;

    cout<<"PROGRAM PENCARI NILAI TERTINGGI DENGAN ARRAY"<<endl;
    cout<<"ADA BERAPA ANGKA YANG ANDA INGIN CARI NILAI TERTINGGINYA? : ";
    cin>>indeks; //MEMASUKKAN RENTANG ANGKA YANG INGIN DICARI ANGKA TERTINGGINYA

    int indeksA[indeks];
    for (int m = 0; m < indeks; ++m) { //LOOPING MEMASUKKAN NILAI
    cout<<"MASUKAN NILAI PADA ARRAY YANG KE " << m+1 << " : ";
    cin>>indeksA[m];} //MEMASUKKAN NILAI ARRAY

    int angkaTertinggi = indeksA[0];
    int angkaIndeks = 0; //NILAI PADA INDEKS DIAWALI DENGAN 0

    for (int m = 0; m < indeks; ++m){ //LOOPING MENCARI NILAI TERBESAR
    if (indeksA[m] > angkaTertinggi){
    angkaTertinggi = indeksA[m];
    angkaIndeks = m;
    }}

    cout << "\nNILAI TERTINGGI-NYA ADALAH : " << angkaTertinggi << endl; //MENAMPILKAN ANGKA TERTINGGI
    for (int n = 0; n < indeks; ++n){
    if (indeksA[n] == angkaTertinggi){
    angkaIndeks = n;
    }}

    cout << "NILAI TERSEBUT DITEMUKAN PADA ARRAY"<<endl; //MENAPILKAN ANGKA PADA ARRAY
    if (angkaIndeks != 0){
    cout << "DAN PADA INDEKS : "<< angkaIndeks << endl; //MENAMPILKAN ANGKA INDEKS
    }

    return 0;
}
