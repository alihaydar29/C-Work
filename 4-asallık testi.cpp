#include <iostream>
using namespace std;  // setlocale(LC_ALL,"Turkish"); ==> t�rk�e karakter sorunun ��zer  !! �NEML� !!

int main(){
	
	int sayi =0, sayac=1;
	char secim ='e';
	while(secim=='e'){
		
		cout<<" asal olup-olmad�gini kontrol edebilecek birs sayi giriniz:"<<endl;
		cin>>sayi;
		
		if(sayi>2){
			
			while(sayac<sayi-1){
				sayac++;
				//sayi sayac a tam b�l�n�yo mu ona bakicaz
				if(sayi%sayac==0){
					
					cout<<"sayi asal degildir"<<endl;
					break;
				}
				else if(sayac+1==sayi){
					
					cout<<"sayimiz asaldir"<<endl;
				}	
			}//while d�ng�s�n�n
		}//if d�ng�s�n�
		
		else if(sayi==2){
			
			cout<<"girilen sayi en k���k asal sayidir"<<endl;
		}
		else{
			cout<<"asall�k pozitif sayilarda aranir !!"<<endl;
			
		}
		cout<<"e=devam , h= cikis"<<endl;
		cin>>secim;
		
	}
	return 0;
}
