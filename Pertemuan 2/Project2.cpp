#include <iostream>

using namespace std;

int main()
{
    //MEMPERKENALKAN VARIABEL
    int jumlahTeman,jumlahBebek,sisaBebek;

    cout<<"Masukkan jumlah bebek pak tatang = ";
    //MEMASUKKAN INPUT JUMLAH BEBEK
    cin>>jumlahBebek;
    cout<<"Masukkan jumlah teman pak tatang = ";
    //MEMASUKKAN INPUT JUMLAH TEMAN
    cin>>jumlahTeman;

    //JUMLAH BEBEK YANG DIBERIKAN KEPADA TEMAN PAK TATANG
    cout<<"\n\nSetiap teman pak tatang akan mendapatkan = " << jumlahBebek/jumlahTeman <<" ekor bebek" <<endl<<endl;
    //SISA BEBEK YANG TIDAK HABIS
    cout<<"Setelah semua bebek dibagikan masih tersisah bebek pak tatang sejumlah = " <<(jumlahBebek % jumlahTeman)<<" ekor bebek" <<endl;

return 0;
}
