#include <iostream>
#include <time.h>
#include<stdlib.h> //random fonksiyonu için cagýrýyoruz

using namespace std;   // random fonksiyonu rastgele bir sayýyý almak için kullanýlýr
                           
int main() 
{

int tahmin,rastgelesayi,mutlakfark;

srand(time(NULL));

cout<<"bir sayi tuttum,tuttugum sayi 1 - 100 arasýndadýr.sayi'yi bulunuz"<<endl;

cout<<"lutfen negatif bir sayi girmeyiniz!"<<endl;

cout<<"lutfen tahmin ettiginiz sayi giriniz : ";

cin>>tahmin;
while(tahmin<1 || tahmin>100)
{
	cout<<"biz sizden 1 - 100 arasýnda sayi girmenizi istedik,lutfen tekrardan sayi giriniz";
	cin>>tahmin;
}

rastgelesayi=rand()%100+1; 
while(rastgelesayi!=tahmin)
{
	mutlakfark=rastgelesayi-tahmin;
	
	if(mutlakfark<0)
	{
	mutlakfark=-1*mutlakfark;
		
		
	}
	else
	{
		mutlakfark=1*mutlakfark;
		
	}
	if(mutlakfark>0 && mutlakfark<=10)
	{
		cout<<"cok sicak ";
	}
	else if(mutlakfark>10 && mutlakfark<=20)
	{
		cout<<" sicak";
	}
	else if(mutlakfark>20 && mutlakfark<=40)
	{
		cout<<"iliksiniz";
	}
	else if(mutlakfark>40 && mutlakfark<=80)
	{
		cout<<"uzaksiniz";
	}
	else if (mutlakfark>80) 
	{
		cout<<"cok uzaksiniz";
	}
	cout<<"\n tekrar deneyiniz";
		cin>>tahmin;
	while(tahmin <1 || tahmin>100)
{
	cout<<"biz sizden 1 - 100 arasýnda sayi girmenizi istedik,lutfen tekrardan sayi giriniz";
	cin>>tahmin;
}

	
	
}
cout<<"tebrikler tahininiz dogru";

	
	return 0;
}
