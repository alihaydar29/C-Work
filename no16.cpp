#include <iostream>

using namespace std;

int main()
{
	bool kontrol;
do
{
	int faktoriyel=1,kacfaktoriyel;
	char karakter;
	
	
	cout<<"kac faktoriyel = ";
	cin>>kacfaktoriyel;
	
	for(int i =1;i<=kacfaktoriyel;i++)
	{
		faktoriyel=faktoriyel*i;
	}
	cout<<kacfaktoriyel<<"! ="<<faktoriyel<<endl;
	
	cout<<"devam etmek istiyorsanýz: E ,progamdan cikmak istiyorsaniz: H 'ye basiniz : ";
	cin>>karakter;
	if(karakter=='E')
	{
		kontrol=true;
	}
	else if(karakter=='H')
	{
		kontrol=false;
	}
}
while(kontrol);
{
	cout<<"programdan ciktiniz!";
}
	
	
	return 0;
}
