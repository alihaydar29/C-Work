#include <iostream>
#include <stdlib.h> //  rastgaele(random) sayi �retilebilmesi i�in gerekli fonksiyonlari i�eren k�t�phanedir.

using namespace std;  // setlocale(LC_ALL,"Turkish"); ==> t�rk�e karakter sorunun ��zer  !! �NEML� !!

int main(){
	int tahmin;
	char cevap='e';
	
srand(time(NULL));{ // srand(time(NULL)) ile uygulama her �al��t�r�ld��� zamana g�re rastgele yeni bir sayi �retilir e�er bu kod satiri yazilmassa  uygulama her defas�nda ayn� sayiyi �retir. 
while( cevap=='e'){
	
	int rastgele_sayi=rand()% 100;  // 0-100 aras�nda rastgele sayi �retir
	cout<<"0 - 100 aras�nda birsayi tuttum"<<endl;
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

