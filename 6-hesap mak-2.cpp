#include <iostream>
using namespace std;  // setlocale(LC_ALL,"Turkish"); ==> t�rk�e karakter sorunun ��zer  !! �NEML� !!

int main(){
	
	int sayi_1,sayi_2,sonuc;
	//bool degerler true-false degerleri al�r.
	bool sonuc_hesapla;
	char islem,cevap='e';
	
	while(cevap=='e'){
		cout<<"islem giriniz:"<<endl;
		cin>>sayi_1>>islem>>sayi_2;
		
		sonuc_hesapla=true;
		//swich-case kullanicaz �imdi
		switch(islem){
			
			case '+':
				sonuc=sayi_1+sayi_2;
				break;
			case'-':
			sonuc=sayi_1-sayi_2;
				break;
			case'*':
			sonuc=sayi_1*sayi_2;
				break;
			case'/':
				if(sayi_2==0){
					cout<<"bolum sifir olamaz haberin olsun !"<<endl;
					sonuc_hesapla= false;
				break;	
				}
			sonuc=sayi_1/sayi_2;
				break;
			case'%':
			sonuc=sayi_1%sayi_2;
			break;
			default:
				cout<<"yanlis islem girdiniz"<<endl;
				    sonuc_hesapla=false;
				    break;
		}
		//sonuc hesapla true ise 
		
		if(sonuc_hesapla){
			cout<<"sonuc:"<<endl;
			cout<<sayi_1<<" "<<islem<<" "<< sayi_2<<" ="<<sonuc<<endl;
		}
		cout<<" islem yapmaya devam etmek istiyormusunuz ?"<<endl;
		cout<<"(Evet: e, Hay�r: h):"; 
		cin>>cevap;
	}
	return 0;
}
