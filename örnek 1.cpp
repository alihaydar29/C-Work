
#include <iostream>
using namespace std;
main(){
int z;
float x,y;
cout << "1.sayiyi giriniz: ";
cin >> x;
cout << "2.sayiyi giriniz: ";
cin >> y;
cout << "\nÝsleminizi seciniz\n\n1-Toplama\n2-cikarma\n3-carpma\n4-bolme\n\n";
cin >> z;
switch(z){
case 1:{cout << x+y; break;}
case 2:{cout << x-y; break;}
case 3:{cout << x*y; break;}
case 4:{cout << x/y; break;}
default: {cout << "Hata"; break;}
}
cin >> x;
}
