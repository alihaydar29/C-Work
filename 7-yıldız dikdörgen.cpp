#include <iostream>
using namespace std;  // setlocale(LC_ALL,"Turkish"); ==> t�rk�e karakter sorunun ��zer  !! �NEML� !!

int main(){
	int kenar;
	cout<<"kenar uzunlugunu giriniz:";
	cin>>kenar;
	
	 for(int i= kenar; i>0;--i){
	 	for(int j=0;j<i;++j){
	    cout<<"*";
		 }
		 cout<<endl;
	 }
	return 0;
}
