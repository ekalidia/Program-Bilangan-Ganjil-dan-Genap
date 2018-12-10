#include <iostream>
using namespace std;
int main()
{
    int nilai, hasil;
    cout<< " Menentukan Ganjil atau Genap "<<endl;
    cout<< " " <<endl;
    cout<<" masukkan nilai = ";
    cin>> nilai;
    hasil = nilai %2;
    cout<<" Hasilnya adalah = ";
    if(hasil==0)
        cout<<" GENAP ";
    else
        cout<<" GANJIL ";


cout<<endl;
    return 0;
}
