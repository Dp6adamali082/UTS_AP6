#include <iostream>

using namespace std; 
 

int main()
{
    //variabel
    int angka = 554;

    cout<<"Adapun hasil dari inputan : "<<endl;

    // konversi integer menjadi string
    string teks = to_string(angka);

    // output string
    cout << teks;

    return 0;
}
