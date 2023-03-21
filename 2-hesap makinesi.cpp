#include <iostream>      // setlocale(LC_ALL,"Turkish"); ==> türkçe karakter sorunun çözer  !! ÖNEMLÝ !!
using namespace std;

int main()
{

int sayi_1,sayi_2,sonuc;
// char veri tipine sadece bir karakter atannabilir ve hafýzada bir byte iþgal eder.
char islem;
cout<<"islem giriniz:"<<endl;
cin>>sayi_1>>islem>>sayi_2;

if(islem=='+')

	sonuc= sayi_1 + sayi_2;

else if(islem=='-')

	sonuc=sayi_1 - sayi_2;

else if(islem=='*')

	sonuc= sayi_1*sayi_2;

//sýra bölme iþlemine geldi fakat bölme iþleminde bölen sayi 0 olabilir bu yüzden bunu düþünerek kod yapýsýný oluþturmamýz gerek

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
	
cout<<"yanlis islem girmis bulunmaktasýnýz";
return 0;	
	
}
cout<<"sonuc:"<<endl;
cout<<sayi_1<<""<<islem<<""<<sayi_2<<"="<<sonuc;

return 0;

}


