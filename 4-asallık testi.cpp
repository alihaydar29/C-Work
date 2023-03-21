#include <iostream>
using namespace std;  // setlocale(LC_ALL,"Turkish"); ==> türkçe karakter sorunun çözer  !! ÖNEMLÝ !!

int main(){
	
	int sayi =0, sayac=1;
	char secim ='e';
	while(secim=='e'){
		
		cout<<" asal olup-olmadýgini kontrol edebilecek birs sayi giriniz:"<<endl;
		cin>>sayi;
		
		if(sayi>2){
			
			while(sayac<sayi-1){
				sayac++;
				//sayi sayac a tam bölünüyo mu ona bakicaz
				if(sayi%sayac==0){
					
					cout<<"sayi asal degildir"<<endl;
					break;
				}
				else if(sayac+1==sayi){
					
					cout<<"sayimiz asaldir"<<endl;
				}	
			}//while döngüsünün
		}//if döngüsünü
		
		else if(sayi==2){
			
			cout<<"girilen sayi en küçük asal sayidir"<<endl;
		}
		else{
			cout<<"asallýk pozitif sayilarda aranir !!"<<endl;
			
		}
		cout<<"e=devam , h= cikis"<<endl;
		cin>>secim;
		
	}
	return 0;
}
