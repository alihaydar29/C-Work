 #include <iostream>

using namespace std;

void toplma(int sayi1,int sayi2);
void cikarma(int sayi1,int sayi2);
void capma(int sayi1,int sayi2);
void bolme(int sayi1,int sayi2);
void faktoriyel(int sayi1);
void mutlakdeger(int sayi1);
void kuvvetalma(int tabansayi,int ustsayi);
bool kontrolifadesi(bool kontrolifadesi);
bool kontroldevam(bool kontrolal);              //hiç bir þey almadý


int main()

{
	 
int secenek,sayilar1,sayilar2;
bool kontrol=0;


cout<<"hesap makinesi programina hos geldiniz!!\n\n\n";


do{
	cout<<"1-toplama\n2-cikarma\n3-carpma\n4-bolme\n5-faktoriyel\n6-mutlak deger\n7-kuvvet alma\n8-cikis";
	cout<<"\nLutfen yapmak istediginiz isleminizi seciniz.";
	cin>>secenek;
	while(secenek<1 || secenek>8)
	{
		cout<<"girmeniz gereken deger araligi 1 - 8 arasisidir.";
		cin>>secenek;
		
	}
	if(secenek==1)
	{
		cout<<"1.sayiyi giriniz";
		cin>>sayilar1;
		cout<<"2.sayiyi giriniz";
		cin>>sayilar2;
		
      toplma(sayilar1,sayilar2);
	}
	else if(secenek==2)
	{
		cout<<"1.sayiyi giriniz";
		cin>>sayilar1;
		cout<<"2.sayiyi giriniz";
		cin>>sayilar2;
		
	 cikarma( sayilar1,sayilar2);
	}
	else if(secenek==3)
	{
		cout<<"1.sayiyi giriniz";
		cin>>sayilar1;
		cout<<"2.sayiyi giriniz";
		cin>>sayilar2;
	  carpma(sayilar1,sayilar2);
	}
	else if(secenek==4)
	{
		cout<<"1.sayiyi giriniz";
		cin>>sayilar1;
		cout<<"2.sayiyi giriniz";
		cin>>sayilar2;
		
	 bolme(sayilar1,sayilar2);
	}
	else if(secenek==5)
	{
		cout<<"faktoriyel alinmasi gereken sayiyi giriniz";
		cin>>sayilar1;
		
		
		 faktoriyel (sayilar1);
	}
		else if(secenek==6)
	{
		cout<<"mutlak deger alinacak sayiyi giriniz giriniz";
		cin>>sayilar1;
		
	 mutlakdeger( sayilar1 );
	}
	else if(secenek==7)
	{
		cout<<"taban sayiyi giriniz";
		cin>>sayilar1;
		cout<<"ust sayisini giriniz";
		cin>>sayilar2;
		
		 kuvvetalma( sayilar1, sayilar2);
		 
	else {
	
	kontrolalma(kontrol);
	}
	
	kontroldevam( kontrol);
	
}

while(kontrol);
{
	
	cout<<"hesap makinesinden ciktiniz !!";
	
	
	
	
}

}
void toplma(int sayi1,int sayi2);
{
	cout<<"toplma="<<sayi1+sayi2;                    
	
}
void cikarma(int sayi1,int sayi2);
{
	if(sayi1<sayi2)
	cout<<"cikarma="<<sayi2-sayi1;
	else if(sayi2<sayi1)
	cout<<"fark="<<sayi1-sayi2;
	else
	cout<<"fark="<<sayi2-sayi1;
	
}
void carpma(int sayi1,int sayi2);
{
	cout<<"carpma="<<sayi1*sayi2;
	
}
void bolme(int sayi1,int sayi2);
{
	cout<<"bolme="<<sayi1/sayi2;
	
}
void faktoriyel(int sayi1)
{

int faktoriyel=1;
for(int i=1;i<=sayi;i++)

{
faktoriyel=faktoriyel*i;	
}
cout<<sayi<<"!="<<faktoriyel;
}
void mutlakdeger(int sayi1);
{
	if(sayi<0)
	{sayi1=-1*sayi1;
	}
	else
	{
		sayi1=sayi1*1;
	}
	cout<<sayi1<<endl;
}
void kuvvetalma(int tabansayi,ustsayi);
{  int kayitedilensayi=tabansayi;
   for(int i=1;i<=ustsayi;i++)
   {
   	tabansayi=kayitedilensayi*tabansayi;
   }

}
bool kontrolifadesi(bool kontrol ifadesi);
{
	kontrolifadesi=false;
	
	return kontrolifadesi;
}

bool kontroldevam(bool kontrolal)
{
	string devami;
	
	cout"hesap makinesine devam etmek istiyormusunuz";
	cin>>devami;
	if(devami=="evet" || devami=="Evet" || devami=="EVET")
	{
		kontrolal=true;
		
	}
	else
	{
		kontrolal=false;
	}
	
	return kontrol;
	
	
	
	
}
}
