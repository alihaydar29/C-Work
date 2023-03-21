#include <iostream>
//buradaki projede namespace std; kullanmadýk bu yüzden std:cout ve std:cin kullanmak durumunda kaldýk

int main()
{
	int hiz;
	char tur;
	/*
	azami hiz;
	
	otomobil:82
	otobüs:70
	kamyonet:50
	*/
	std::cout<<"aracininzin turunu giriniz:";
	std::cout<<std::endl;
	std::cout<<"(otomobil:o,otobus:t,kamyonet:k):";
	std::cin>>tur;
	std::cout<<"aracin hizini giriniz:";
	std::cin>>hiz;
	
	if(tur=='o')
	{
		std::cout<<"arac otomobildir";
		std::cout<<std::endl;
		if(hiz>82)
		std::cout<<"arac cezali durumdadir";
		
	else
	    std::cout<<"kurallara uygundur";
	    
	}
	else if(tur=='t')
	{
		std::cout<<"aracimizi otobustur";
		std::cout<<std::endl;
		if(hiz>70)
		std::cout<<"araciniz cezalidir";
		else
		std::cout<<"kuralllara uygundur";
		
	}
else if(tur=='k'){
	std::cout<<"araciniz kamyonettir";
	std::cout<<std::endl;
	
	if(hiz>50)
	std::cout<<"araciniz cezalidir";
	else
	std::cout<<"kurallara uygundur";
	
	
}

else
std::cout<<"aracin turunu yanlis girdiniz control ediniz lutfen";
return 0;

	
}

