#include <iostream>

using namespace std;

int main()
{
 
 int sayigir;
 
 cout<<"bir sayi giriniz,girdiginiz sayinin tek mi cift mi oldugunu anlayacagiz  :";
 cin>>sayigir;
 
 if(sayigir=100&&((sayigir%2)==0))
 {
 	cout<<"sayi hem 100 den buyuktur hem de cift bir sayidir";
 	
 }
 else if(sayigir<=100&&(sayigir%2)==0)
 {
 	cout<<"sayi hem 100 den kucuktur hemde bu sayi cifttir";
 }
 else if(sayigir>=100&&((sayigir%2)!=0))
 {
 	cout<<"sayi hem 100 den buyuktur hem de sayi tek bir sayidir ";
 }
 else
 {
 	cout<<"sayi hem 100 den kucuktur ve  bu sayi aynı zamanda tektir ";
 	
 }
 
 
 
 
	return 0;
}


