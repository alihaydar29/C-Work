//programýn fonksiyonlarý 
//-------------------------------------------------
class UzaktanKumanda{ 
public: 
virtual void ac(){} 
virtual void kapa(){} 
void acmaKomutuAta(UzaktanKumanda *acma) 
{ 
acma->ac(); 
} 
void kapamaKomutuAta(UzaktanKumanda *kapama) 
{ 
kapama->kapa(); 
} 
}; 
class TelevizyonAcKomutu:public UzaktanKumanda{ 
public: 
void ac() 
{ 
cout<<"Televizyon aciliyor..."<<endl; 
} 
}; 
class TelevizyonKapaKomutu:public UzaktanKumanda{ 
public: 
void kapa() 
{ 
cout<<"Televizyon Kapaniyor..."<<endl; 
} 
}; 
class OtoparkKapiAcKomutu: public UzaktanKumanda{ 
public: 
void ac() 
{ 
cout<<"Otopark kapisi aciliyor..."<<endl; 
} 
}; 
class OtoparkKapiKapatKomutu: public UzaktanKumanda{ 
public: 
void kapa() 
{ 
cout<<"Otopark kapisi Kapatiliyor..."<<endl; 
} 
};
//---------------------------------------------------------

