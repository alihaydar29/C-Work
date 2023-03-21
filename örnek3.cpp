#include <iostream>
using namespace std;
class Hayalfilm{
public:
int sabah,aksam,dkotuz,dkatmis;
Hayalfilm(int s=20000,int a=40000,int dkuc=50000,int dkalti=100000)
{
sabah=s;
aksam=a;
dkotuz=dkuc;
dkatmis=dkalti;
}
virtual int hesap(int,string){}
virtual istream& operator>>(istream&){}
};
class dizi: public Hayalfilm{
public:
friend istream& operator>>(istream&,dizi&);
int hesap(int,string);
};
istream& operator>>(istream&is,dizi& a){
is>>a;
return is;
}
int dizi::hesap(int x,string y)
{
if(y=="30")
return x*dkotuz;
else
return x*dkatmis;
}
class Reklam: public Hayalfilm{
public:
friend istream& operator>>(istream&,Reklam&);
int hesap(int,string);
};
istream& operator>>(istream&is,Reklam& a){
is>>a;
return is;
}
int Reklam::hesap(int s,string zd)
{
if(zd=="S"){
return s*sabah;
}else
return s*aksam;
}
int main(){
string s,zdilimi,uzunluk;
int surec, bolum;
cout<<"Reklam icin (R), dizi film icin (D) girin:";
cin>>s;
if(s=="R"){
cout<<"Reklam surecini girin:";
cin>>surec;
cout<<"Reklamin zaman dilimi (S/A):";
cin>>zdilimi;
Hayalfilm* f1=new Reklam;
cout<<"Reklamin fiyati:"<<f1->hesap(surec,zdilimi)<<" lira"<<endl;
}else{
cout<<"Dizinin bolum sayisini girin: ";
cin>>bolum;
cout<<"bolum uzunlugunu girin:";
cin>>uzunluk;
Hayalfilm* f1=new dizi;
cout<<"Dizinin fiyati:"<<f1->hesap(bolum,uzunluk)<<" lira"<<endl;
}
return 0;
}
