#include <iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL,"Turkish"); //Türkçe karakter
   int sayi;
   cout<<"Sayıyı Girin : ";
   cin>>sayi;
   if(sayi%3==0 && sayi%5==0)
   {
   	cout<<"Girilen sayı 3' e ve 5'e tam bölünüyor.";
   }
   else
   {
   	cout<<"Girilen sayı 3' e ve 5'e tam bölünmüyor.";
   }
}