#include <iostream>
using namespace std;
class HastaFatura{
public:
string ad,sirket;
int hMasraf,iMasraf;
HastaFatura(){}
HastaFatura (string _ad,int _hMasraf,int _iMasraf,string _sirket="yok")
{
ad=_ad;
hMasraf=_hMasraf;
iMasraf=_iMasraf;
sirket=_sirket;
}
void odeme()
{
cout<<"Hasta ismi: "<<ad<<" --- ";
cout<<"Toplam ucret: "<<hMasraf+iMasraf;
}
};
class SigortaliHastaFatura: public HastaFatura {
public:
SigortaliHastaFatura(string _ad,int _hMasraf,int _iMasraf,string _sirket):HastaFatura()
{
ad=_ad;
hMasraf=_hMasraf;
iMasraf=_iMasraf;
sirket=_sirket;
}
void odeme()
{
cout<<"Hasta ismi: "<<ad<<" --- ";
cout<<"sigorta: "<<sirket<<" --- ";
hMasraf=0;
iMasraf-=iMasraf*0.8;
cout<<"Toplam ucret: "<<hMasraf+iMasraf<<" lira";
}
};
int main(){
char s;
string isim,sirket;
int ilacMasrafi;
int hastanePayi;
HastaFatura *faturalar[20];
for(int i=0;i<1;i++){
cout<<" Hasta sigortali mi? (E/H):";
cin>>s;
cout<<"Hastanin ismi:";
cin>>isim;
cout<<"Hastane ucreti:";
cin>>hastanePayi;
cout<<"ilac masrafi:";
cin>>ilacMasrafi;
if(s=='E'){
cout<<"sigorta sirketi:";
cin>>sirket;
faturalar[i]=new SigortaliHastaFatura(isim,hastanePayi,ilacMasrafi,sirket);
}else
faturalar[i]=new HastaFatura(isim,hastanePayi,ilacMasrafi);
faturalar[i]->odeme();
}
return 0;
}
