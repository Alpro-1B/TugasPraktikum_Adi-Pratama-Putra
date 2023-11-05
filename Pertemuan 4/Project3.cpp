#include <iostream>
using namespace std;
int main ()

{
    int k;
    cout<<">>> DERET FIBONACCI <<<"<<endl;
    cout<<"Tolong Input Angka Yang Anda Inginkan : ";
    cin>>k;

    int a=0;
    int b=1;

    for (int j = 0; j < k; j++) {
    cout << a << " ";

    int c=a + b;
    a=b;
    b=c;

    }

    cout << endl;

    return 0;
}
