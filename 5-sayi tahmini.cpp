#include <iostream>
#include <stdlib.h> //  rastgaele(random) sayi üretilebilmesi için gerekli fonksiyonlari içeren kütüphanedir.

using namespace std;  // setlocale(LC_ALL,"Turkish"); ==> türkçe karakter sorunun çözer  !! ÖNEMLÝ !!

int main(){
	int tahmin;
	char cevap='e';
	
srand(time(NULL));{ // srand(time(NULL)) ile uygulama her çalýþtýrýldýðý zamana göre rastgele yeni bir sayi üretilir eðer bu kod satiri yazilmassa  uygulama her defasýnda ayný sayiyi üretir. 
while( cevap=='e'){
	
	int rastgele_sayi=rand()% 100;  // 0-100 arasýnda rastgele sayi üretir
	cout<<"0 - 100 arasýnda birsayi tuttum"<<endl;
	cout<<" hadi tahminini yap:";
	cin>> tahmin;
	
	while ( tahmin != rastgele_sayi){
		if(tahmin<rastgele_sayi){
			cout<<tahmin<<"tuttugum sayidan kucuk"<<endl;
		}
		else{
			cout<<tahmin<<"tuttugum sayidan buyuk"<<endl;
		}
	}
		cout<<"buldun tebrikler. :) tuttugum sayi:"<<rastgele_sayi<<"idi"<<endl;
		cout<<"yeniden oynamak istermisin?"<<endl;
		cout<<"(Evet:e,Hayir:h);";
		cin>>cevap
		
	}
	cout<<"gule gule tekrar gel !"<<endl;
	
}
return 0;
}

