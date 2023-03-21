#include <iostream>
using namespace std; // setlocale(LC_ALL,"Turkish"); ==> türkçe karakter sorunun çözer  !! ÖNEMLÝ !!

int main()
{
	int sayi;
	
	cout<<"kaca kadar saymami istersin söyle :";
	cin>>sayi;
	int i=1;
	// burda while döngüsünü kullancagiz	
	
	while(i<=sayi){
		cout<<i<<"\t";   //   \t => her sayi arasýnda bir tab boslugu býrakmamizi saglar.
		++i;
	}
	
	
	/*
	burada i++ ve ++i nin farkýna bacagýz
	aþaðýdaki yazdýgým kodun cýktýsý:
	i=2     j=2
	i=2     j=1
	
	*/
  i=1;
  int j;
  j=++i;
  cout<<"i="<<"\t"<<"j="<<j<<endl;
  i=1;
  j=i++;
  cout<<"i="<<i<<"\t"<<"j="<<j<<endl;
  
  return 0;

	
}

