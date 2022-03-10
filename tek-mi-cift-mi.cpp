#include <iostream>
using namespace std;
int main()
{
   setlocale(LC_ALL,"Turkish"); //Türkçe karakter
   int sayi;
   cout<<"Sayıyı Girin : ";
   cin>>sayi;
   if(sayi%2==0)
   {
   	cout<<"Girilen sayı çift";
   }
   else
   {
   	cout<<"Girilen sayı tek";
   }
}