#include <iostream>
using namespace std;

    void fibonacci(int k);

    int main (){

    int k;

    cout<<">>> DERET FIBONACCI <<<"<<endl;
    cout<<"Tolong Input Angka Yang Anda Inginkan : ";
    cin>>k;

    fibonacci(k);

    cout << " " << endl;
    return 0;
    }

    void fibonacci(int y)
    {

    int a=0;
    int b=1;

    for (int x = 0; x < y; x++) {
    cout << a << " ";

    int c=a + b;
    a=b;
    b=c; }

    }
