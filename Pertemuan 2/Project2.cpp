#include <iostream>

using namespace std;

int main()
{
    //MEMPERKENALKAN VARIABEL
    int jumlahTeman,jumlahBebek,sisaBebek;

    cout<<"Masukkan jumlah bebek pak tatang = ";
    //MEMINTA USER MEMASUKKAN INPUT JUMLAH BEBEK
    cin>>jumlahBebek;
    cout<<"Masukkan jumlah teman pak tatang = ";
    //MEMINTA USER MEMASUKKAN INPUT JUMLAH TEMAN
    cin>>jumlahTeman;

    //MENAMPILKAN JUMLAH BEBEK YANG DIBAGI KEPADA TEMAN PAK TATANG
    cout<<"\n\nSetiap teman pak tatang akan mendapatkan = " << jumlahBebek/jumlahTeman <<" ekor bebek" <<endl<<endl;
    //MENAMPILKAN SISA BEBEK YANG TIDAK HABIS TERBAGI
    cout<<"Setelah semua bebek dibagikan masih tersisah bebek pak tatang sejumlah = " <<(jumlahBebek % jumlahTeman)<<" ekor bebek" <<endl;

return 0;
}
