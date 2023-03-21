#include <iostream>

using namespace std;

int main()
{ 
	int enbuyuk=0,sayi,i=0;
	
	cout<<"10 tane pozitif sayi giriniz"; 
	do
	{
		cin>>sayi;
		if(sayi>enbuyuk)
		enbuyuk=sayi;
		i++;
	}
	while(i<10);
	cout<<"girdiginiz en buyuk sayi :"<<enbuyuk<<endl;
	return 0;
}

