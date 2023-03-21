#include <iostream>

using namespace std;

int main()

{
	bool kontrol;
	do
	{
		int tabansayi,kuvvet,yedek,secim;
		
		cout<<"lutfen taban sayisini giriniz:";
		cin>>tabansayi;
		cout<<"lutfen kuvvet i giriniz";
		cin>>kuvvet;
		
		yedek=tabansayi;
		
		for(int i=1;i<kuvvet;i++)
		{
			tabansayi=yedek*tabansayi;
			
			
		}
		
		if(kuvvet==0)
		{
			tabansayi=1;
		}
		
		cout<<yedek<<" uzeri "<<kuvvet<<" = "<<tabansayi<<endl;
		
		cout<<"devam etmek istiyormusunuz?1-evet,2-hayýr \nseciniz";
		
		cin>>secim;
		
		while(secim<1 || secim>2);
		{
			cout<<"lutfen belirtilen aralikta deger giriniz";
			cin>>secim;
			
		}
		
		if(secim==1)
		{
			kontrol=true;
			
		}
		
		else
		{
			kontrol=false;
		}
		
		
		
		
	}
	
	while(kontrol);
	{
		cout<<"programdan basariyla cikis yaptiniz";
	}
	
	return 0 ;
}
