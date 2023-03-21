#include <iostream>

using namespace std;

int main()
{
	
	// kullanici adi:haydar, sifresi :ali2929
	//1 dolar:6.55 ; 1 euro:7.00; 1 sterlin: 7.70

int para =6400,secim;
string kullaniciadi,sifre;
double cevir;

cout<<"BANKAMIZA HOSGELDÝNÝZ\n\n";
cout<<"kullanici adinizi giriniz:";
cin>>kullaniciadi;
cout<<"lütfen sifrenizi giriniz:";
cin>>sifre;

if(kullaniciadi=="haydar"&& sifre=="ali2929")
{
	cout<<"1-TL'yi dolara cevir;\n2-TL'yi Euro'ya cevir;\n3-TL'yi sterlin'e cevir;\n4-cikis yap;";
	
    while(secim<1 ||secim>4)
	{
	
	cout<<"Lutfen seciminizi yapiniz";
	
	cin>>secim;
	}

    if(secim==1)
    {
    	cevir= para/6.55;
    	cout<<"paraniz donusturuldu,\nYeni Paraniz:"<<cevir<<" Dolariniz vardir.";
	}
	
	 else if(secim==2)
    {
    	cevir= para/7.00;
    	cout<<"paraniz donusturuldu,\nYeni Paraniz:"<<cevir<<" Euro'nuz vardir.";
	}
	 else if(secim==3)
    {
    	cevir= para/7.70;
    	cout<<"paraniz donusturuldu,\nYeni Paraniz:"<<cevir<<"  Sterlininiz vardir."<<endl;
	}
	else // (secim==4)
	{
	cout<<"\n\n UYGULAMADAN CIKTINIZ,ÝYÝ GÜNLER ";
	}
	 
	

}

else
{
	cout<<"kullanici adiniz veya sifreniz yanlis cikmistir lütfen yenide deneyiniz?!";
	cout<<"\n\n UYGULAMADAN CIKTINIZ,ÝYÝ GÜNLER ";

}








}
