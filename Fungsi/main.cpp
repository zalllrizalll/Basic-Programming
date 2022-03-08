#include <iostream>

using namespace std;

// Memperkenalkan fungsi
int isGenap (int i); // Parameter formal
int tambah (int a,int b); // int di awal
float luasLingkaran (float r);
float luasSegitiga (float a, float t);
int bagiInt (int a, int b);
float bagiFloat (float a, float b);

int main()
{
    int i,j,xx;
    float ruji, luasLing, k,l;
    cout << "Masukkan angka pertama (sebagai alas) = ";
    cin >> i;
    cout << "\nApakah nilai " << i << " genap? " << isGenap(i); // Menyatu dengan Output
    xx = isGenap(i); // x adalah Parameter aktual // diletakkan di variabel
    cout << "\nApakah nilai " << i << " genap? " << xx << endl;
    cout << "\nMasukkan angka kedua (sebagai tinggi) = ";
    cin >> j;
    cout << i << " + " << j << " = " << tambah (i,j) << endl;
    cout << "\nLuas segitiga = " << luasSegitiga(i,j) << endl;
    cout << "\nMasukkan ruji-ruji = ";
    cin >> ruji;
    luasLing = luasLingkaran (ruji);
    cout << "Luas Lingkaran = " << luasLing << endl;
    cout << "\nNilai bagi int " << i << " : " << j << " adalah " << bagiInt(i,j) << endl;
    cout << "\nMasukkan nilai k = ";
    cin >> k;
    cout << "Masukkan nilai l = ";
    cin >> l;
    cout << "\nNilai bagi float " << k << " : " << l << " adalah " << bagiFloat(k,l) << endl;
    return 0;
}

// Koding masing-masing fungsi
int isGenap (int i)
{
    /*if(i%2==0) // versi panjang
        return 1;
    else
        return 0;*/
    return i%2==0; // versi pendek
}
int tambah (int a,int b)
{
    return a+b;
}
float luasLingkaran (float r)
{
    return 3.14*r*r;
}
float luasSegitiga (float a, float t)
{
    return (a*t)/2;
}
int bagiInt (int a, int b)
{
    return a/b;
}
float bagiFloat(float a, float b)
{
    return a/b;
}

