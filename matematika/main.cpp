#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

int Max2 (int a, int b);
int Max3 (int a, int b, int c);
int Max4 (int a, int b, int c, int d);
int IsGanjil(int N);
int IsPrima(int N);
int NumOfPrima(int N);
int Pangkat(int basis,int eksp);
int SumOfN(int N);
int ProductOfN(int N);
float Average(int N,int Count);
float AveSumOfN(int N);
float AveProdOfN(int N);
int FPB(int n, int m);
float C2F (float C);
float F2C (float F);
float C2R (float C);
float R2C (float R);
float Cel2Cal (float C);
float Cal2Cel (float Cal);
float R2F (float R);
float F2R (float F);

int main()
{
    printf("Max2 --> 2,5 =  %d\n",Max2(2,5));
    printf("Max3 --> 2,5,1 = %d\n",Max3(2,5,1));
    printf("Max4 --> 7,2,5,1 = %d\n",Max4(7,2,5,1));
    printf("IsGanjil 93 = %d\n",IsGanjil(93));
    printf("IsGanjil 1324 = %d\n",IsGanjil(1324));
    printf("IsPrima 7 = %d\n",IsPrima(7));
    printf("IsPrima 17 = %d\n",IsPrima(17));
    printf("IsPrima 70 = %d\n",IsPrima(70));
    printf("NumOfPrima 5 = %d\n",NumOfPrima(5));
    printf("Pangkat(2,8) = %d\n",Pangkat(2,8));
    printf("SumOfN(15) = %d\n",SumOfN(15));
    printf("ProductOfN(15) = %d\n",ProductOfN(15));
    printf("Average 4,2 = %.2f\n",Average(4,2));
    printf("AveSumOfN (15) = %.2f\n",AveSumOfN(15));
    printf("AveProdOfN (15) = %.2f\n",AveProdOfN(15));
    printf("FPB (36,48) = %d\n",FPB(36,48));
    printf("%.2f C adalah %.2f F\n",72.5,C2F(72.5));
    printf("%.2f F adalah %.2f C\n",13.5,F2C(13.5));
    printf("%.2f C adalah %.2f R\n",72.5,C2R(72.5));
    printf("%.2f R adalah %.2f C\n",18.5,R2C(18.5));
    printf("%.2f C adalah %.2f K\n",72.5,Cel2Cal(72.5));
    printf("%.2f K adalah %.2f C\n",172.5,Cal2Cel(172.5));
    printf("%.2f R adalah %.2f F\n",72.5,R2F(72.5));
    printf("%.2f F adalah %.2f R\n",62.5,F2R(62.5));
    printf("\n");
    return 0;
}

int Max2 (int a, int b)
{
    if(a>b)
        return a;
    else
        return b;
}
int Max3 (int a, int b, int c)
{
   if (a>b && a>c)
        return a;
   else if (b>a && b>c)
        return b;
   else
        return c;
}
int Max4 (int a, int b, int c, int d)
{
    if(a>b && a>c && a>d)
        return a;
    else if(b>a && b>c && b>d)
        return b;
    else if(c>a && c>b && c>d)
        return c;
    else
        return d;
}
int IsGanjil(int N)
{
  if (N%2!=0)
    return 1;
  else
    return 0;
}
int IsPrima(int N)
{
    if(N==2 || N%2!=0)
        return 1;
    else
        return 0;
}
int NumOfPrima(int N)
{
    int i,j,n,sum=0;
    for(i=2; i<=N; i++){
        n=0;
        for(j=1; j<=i; j++){
            if(i%j==0){
                n = n+1;
            }
        }
        if(n==2){
            sum = sum + i;
        }
    }
    return sum;
}
int Pangkat(int basis,int eksp)
{
    return(pow(basis,eksp));
}
int SumOfN(int N)
{
    // Kamus
    int i, sum=0;

    // Algoritma
   for(i=0; i<=N; i++){
     sum = sum + i;
   }
   return sum;
}
int ProductOfN(int N)
{
    // Kamus
    int i,b=0;
    int sum=0;

    // Algoritma
    for(i=1; i<=N; i++){
       b = sum * i;
       sum = sum + i;
    }
    return b;
}
float Average(int N,int Count)
{
   int i,sum = 0;
   float avrg;
     for(i=0; i<=N; i++){
        sum = sum + i;
   }
   avrg = sum / Count;
   return avrg;
}
float AveSumOfN(int N)
{
  int i,sum;
  float avrg;
  sum = 0;

  for(i=0; i<=N; i++){
    sum = sum + i;
  }
  avrg = sum / N;
  return avrg;
}
float AveProdOfN(int N)
{
    int i,b=0,sum=0;
    float avrg;

    for(i=0; i<=N; i++){
        b = sum*i;
        sum = sum+i;
    }
    avrg = b/N;
    return avrg;
}
int FPB(int n, int m)
{
    while(n!=m){
        if(n>m)
            n = n-m;
        else
            m = m-n;
    }
}
float C2F (float C)
{
   float F;

   F = 1.8*(C+32);

   return F;
}
float F2C (float F)
{
   float C;

   C = 0.556*(F-32);

   return C;
}
float C2R (float C)
{
    float R;

    R = 0.8*C;

    return R;
}
float R2C (float R)
{
    float C;

    C = 1.25*R;

    return C;
}
float Cel2Cal (float C)
{
    float K;

    K = C + 273;

    return K;
}
float Cal2Cel (float K)
{
    float C;

    C = K - 273;

    return C;
}
float R2F (float R)
{
    float F;

    F = 2.25*(R + 32);

    return F;
}
float F2R (float F)
{
    float R;

    R = 0.444444444*(F-32);

    return R;
}
