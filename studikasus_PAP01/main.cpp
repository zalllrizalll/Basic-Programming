#include <iostream>

using namespace std;

void print_identitas();
void print_jumlah(int num1,int num2);
float hitung(int num1, int num2, char Operan);
void print_nama(char nama[]);
int len_text(char text[]);
int Max(int arr_num[],int n);
float hasil;
int main()
{
    print_identitas();
    print_jumlah(15,12);
    print_jumlah(44,29);
    hasil = hitung(12,15,'+');
    printf("%d %c %d = %2.2f\n", 12, '+', 15, hasil);
    hasil = hitung(12,15,'-');
    printf("%d %c %d = %2.2f\n", 12, '-', 15, hasil);
    hasil = hitung(12,15,'x');
    printf("%d %c %d = %2.2f\n", 12, 'x', 15, hasil);
    hasil = hitung(12,15,'/');
    printf("%d %c %d = %2.2f\n", 12, '/', 15, hasil);
    cout << endl;
    print_nama("Anton Suryanto\n");
    print_nama("Habibah Sarawati\n");
    printf("panjang teks \"%s\" adalah %d karakter\n", "Universitas Dian Nuswantoro", len_text("Universitas Dian Nuswantoro"));
    printf("panjang teks \"%s\" adalah %d karakter\n", "Laki-Laki",len_text("Laki-Laki"));
    int arr_num[] = {23, 51, 22, 31, 61, 11, 32, 42};
    printf("Nilai tertinggi dari arr_num adalah %d", Max(arr_num, 8));
    cout << endl;
    return 0;
}
void print_identitas()
{
    cout << "===========================================\n";
    cout << "NIM \t\t: A11.2021.13329\n";
    cout << "Nama Lengkap \t: Muhammad Rizal Pratama\n";
    cout << "Alamat \t\t: Kota Semarang\n";
    cout << "===========================================\n";
    cout << "\n";
}
void print_jumlah(int num1,int num2)
{
    printf("%d + %d = %d\n", num1 , num2, num1+num2);
}
float hitung(int num1, int num2, char Operan)
{
    if (Operan == '+'){
        return num1+num2;
    }
    else if(Operan == '-'){
        return num1-num2;
    }
    else if(Operan == 'x'){
        return num1*num2;
    }
    else if(Operan == '/'){
        return num1/num2;
    }
    else
        return 0;
}
void print_nama(char nama[])
{
    cout << "Namanya adalah : " << nama;
}
int len_text(char text[])
{
    int jumlah;
    for(int i=0; text[i] != '\0'; i++){
        jumlah++;
    }
    return jumlah;
}
int Max(int arr_num[],int n)
{
    int maxNum = 0;
    for(int i = 0; i<n ; i++)
    {
        if(arr_num[i] > maxNum){
            maxNum = arr_num[i];
        }
    }
    return maxNum;
}
