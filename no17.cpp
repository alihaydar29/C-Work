#include <iostream>

using namespace std;

int main()
{
	int ay;
	cout<<"ay numarasini giriniz";
	cin>>ay;
	
	while(ay<1 || ay>12)
	{
		cout<<"lutfen 1-12 arasinda deger giriniz : ";
		cin>>ay;
		
	}
	
	switch(ay)
	{
		case 1: 
		cout<<" 1:Ocak";
		break;
		
		case 2:
		cout<<" 2:subat";
		break;	
			case 3: 
		cout<<" 3:mart";
		break;
		
			case 4: 
		cout<<" 4:nisan";
		break;
		
			case 5: 
		cout<<" 5:mayis";
		break;
		
			case 6: 
		cout<<" 6:haziran";
		break;
		
			case 7: 
		cout<<" 7:temmuz";
		break;
		
			case 8: 
		cout<<" 8:aðustos";
		break;
		
			case 9: 
		cout<<" 9:eylül";
		break;
		
			case 10: 
		cout<<" 10:ekim";
		break;
		
			case 11: 
		cout<<" 11:kasým";
		break;
		
			case 12: 
		cout<<" 12:aralýk";
		break;
		
		
		
	}
	

	
	
	
	
	return 0 ;
}
