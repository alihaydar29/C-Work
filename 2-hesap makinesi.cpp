#include <iostream>      // setlocale(LC_ALL,"Turkish"); ==> t�rk�e karakter sorunun ��zer  !! �NEML� !!
using namespace std;

int main()
{

int sayi_1,sayi_2,sonuc;
// char veri tipine sadece bir karakter atannabilir ve haf�zada bir byte i�gal eder.
char islem;
cout<<"islem giriniz:"<<endl;
cin>>sayi_1>>islem>>sayi_2;

if(islem=='+')

	sonuc= sayi_1 + sayi_2;

else if(islem=='-')

	sonuc=sayi_1 - sayi_2;

else if(islem=='*')

	sonuc= sayi_1*sayi_2;

//s�ra b�lme i�lemine geldi fakat b�lme i�leminde b�len sayi 0 olabilir bu y�zden bunu d���nerek kod yap�s�n� olu�turmam�z gerek

else if(islem=='/')
{
	if(sayi_2==0)
	{
		cout<<"bolum sfiri olamaz !!";
		return 0;
	}
	sonuc= sayi_1/sayi_2;
	
	
}
else if(islem=='%')
sonuc= sayi_1%sayi_2;

else
{
	
cout<<"yanlis islem girmis bulunmaktas�n�z";
return 0;	
	
}
cout<<"sonuc:"<<endl;
cout<<sayi_1<<""<<islem<<""<<sayi_2<<"="<<sonuc;

return 0;

}


