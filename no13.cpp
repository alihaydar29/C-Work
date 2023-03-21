#include <iostream>

using namespace std;

int main()
{
	int kacsayi,sayigir,i=0,sayac=0;
	double toplam=0;
	cout<<"ortalama hesaplama programina hosgeldiniz...\n";
	cout<<"kac tane sayinin ortalamasini hesaplamak istiyorsunuz\n";
	cin>>kacsayi;
	
	while(kacsayi<0)
	{
		if(sayac>=1)
		{
		cout<<"negatif sayi secemediniz,o yüzden sayi otomatik olarak 1 alindi";
		kacsayi=1;	
		}
		cout<<"negatif secenek secemezssiniz.tekrar giriniz=";
		cin>>kacsayi;
		sayac++ ;
		
	}
	
	
	

	while(i<kacsayi)
	{
		cout<<i+1 <<". sayiyi giriniz="<<endl;
		cin>>sayigir;
		toplam=toplam+sayigir;
		i++;
	}
	cout<<"ortalama="<<toplam/kacsayi;
	
	
	return 0 ;
}
