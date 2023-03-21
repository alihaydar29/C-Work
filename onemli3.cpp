#include <iostream>
#include <time.h>
#include<stdlib.h> //random fonksiyonu için cagýrýyoruz

using namespace std;   // random fonksiyonu rastgele bir sayýyý almak için kullanýlýr
                           
int main() 
{

int tahmin,rastgelesayi,mutlakfark;

srand(time(NULL));

cout<<"bir sayi tuttum,tuttugum sayi 1 - 100 arasýndadýr.sayi'yi bulunuz\n";
cout<<"lutfen negatif bir sayi girmeyiniz!!!!!!!!!!";
cin>>tahmin;

rastgelesayi=rand()%100;

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
	else if(mutlakfark>80) 
	{
		cout<<"alakaniz yok";
	}
	cin>>tahmin;
	}	
	
	cout<<"tebrikler tahmininiz dogru";
	
	return 0;
}
