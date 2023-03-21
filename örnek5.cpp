
#include <iostream> 
using namespace std;

int main()
{
	int i[5]={1,2,3,4,5};
	int *ptr;
	ptr=i;
	cout<<"*ptr nin ilk degeri:"<<*ptr<<endl;
	cout<<"++ptr nin ilk degeri:"<<++*ptr<<endl;
	cout<<"*++ptr nin ilk degeri:"<<*++ptr<<endl;
	cout<<"*ptr++ nin ilk degeri:"<<*ptr++<<endl;
	cout<<"*ptr nin yeni degeri:"<<*ptr<<endl;
	
	system("PAUSE");
	return 0;
}
