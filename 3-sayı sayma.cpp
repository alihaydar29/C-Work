#include <iostream>
using namespace std; // setlocale(LC_ALL,"Turkish"); ==> t�rk�e karakter sorunun ��zer  !! �NEML� !!

int main()
{
	int sayi;
	
	cout<<"kaca kadar saymami istersin s�yle :";
	cin>>sayi;
	int i=1;
	// burda while d�ng�s�n� kullancagiz	
	
	while(i<=sayi){
		cout<<i<<"\t";   //   \t => her sayi aras�nda bir tab boslugu b�rakmamizi saglar.
		++i;
	}
	
	
	/*
	burada i++ ve ++i nin fark�na bacag�z
	a�a��daki yazd�g�m kodun c�kt�s�:
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

