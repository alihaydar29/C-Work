#include <iostream>

using namespace std;

struct calisan{
	
	char *ad,*soyad;
	int yas;
	
};
int main(){
	
	calisan x;
	x.ad="Muhammed";
	x.soyad="MASTAR";
	x.yas=22;
	
	cout<<"calisanin adi:"<<x.ad<<endl;
	cout<<"calisanin soyadi:"<<x.soyad<<endl;
	cout<<" calisanin yasi:"<<x.yas<<endl;
	
	system("PAUSE"); 
	return 0;
}
