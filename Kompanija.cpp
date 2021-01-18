#include "Kompanija.h"
#include <iostream>
using namespace std;

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//        Definiranje konstruktora i destruktora klase Kompanija
Kompanija::Kompanija() {}
Kompanija::~Kompanija() {}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~





//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje set metoda o informacijama radnika

void Kompanija::SetID(int id){ID=id;}
void Kompanija::SetIme(string ime){Ime=ime;}
void Kompanija::SetPrezime(string prezime){Prezime=prezime;}
void Kompanija::SetJMBG(long long jmbg){JMBG=jmbg;}
void Kompanija::SetGodiste(int godiste){Godiste=godiste;}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~






//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje get metoda o informacijama radnika

int Kompanija::GetID(){return ID;}
string Kompanija::GetIme(){return Ime;}
string Kompanija::GetPrezime(){return Prezime;}
long long Kompanija::GetJMBG(){return JMBG;}
int Kompanija::GetGodiste(){return Godiste;}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~






//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje set metoda o dokumentaciji radnika

void Kompanija::SetStrucnaSprema(string s_sprema_r){s_sprema=s_sprema_r;}
void Kompanija::SetRodniList(string rodni_list_r){rodni_list=rodni_list_r;}
void Kompanija::SetDrzavljanstvo(string drzavljanstvo_r){drzavljanstvo=drzavljanstvo_r;}
void Kompanija::SetCV(string CV_r){CV=CV_r;}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~







//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje get metoda o dokumentaciji radnika

string Kompanija::GetStrucnaSprema(){return s_sprema;}
string Kompanija::GetRodniList(){return rodni_list;}
string Kompanija::GetDrzavljanstvo(){return drzavljanstvo;}
string Kompanija::GetCV(){return CV;}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~






//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje set metoda o organizacionoj jedinici

void Kompanija::SetDirektor(string direktor_k){direktor=direktor_k;}
void Kompanija::SetMenadzer(string menadzer_k){menadzer=menadzer_k;}
void Kompanija::SetMarketar(string marketar_k){marketar=marketar_k;}
void Kompanija::SetKasir(string kasir_k){kasir=kasir_k;}
void Kompanija::SetProdavac(string prodavac_k){prodavac=prodavac_k;}
void Kompanija::SetCistac(string cistac_k){cistac=cistac_k;}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~






//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje get metoda o organizacionoj jedinici

string Kompanija::GetDirektor(){return direktor;}
string Kompanija::GetMenadzer(){return menadzer;}
string Kompanija::GetMarketar(){return marketar;}
string Kompanija::GetKasir(){return kasir;}
string Kompanija::GetProdavac(){return prodavac;}
string Kompanija::GetCistac(){return cistac;}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~







//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije za prikazivaje informacija
//                          o radnicima

void Kompanija::prikaziInfo(){

    cout<<endl<<endl;
    cout<<"\t\t=================================================\n";
    cout<<"\t\tID radnika:                   "<<GetID()<<endl;
    cout<<"\t\tIme radnika:                  "<<GetIme()<<endl;
	cout<<"\t\tPrezime radnika:              "<<GetPrezime()<<endl;
	cout<<"\t\tJMBG radnika:                 "<<GetJMBG()<<endl;
	cout<<"\t\tGodiste radnika:              "<<GetGodiste()<<endl;
    cout<<"\t\t-------------------------------------------------\n";
	cout<<"\t\tStrucna sprema radnika:       "<<GetStrucnaSprema()<<endl;
    cout<<"\t\tRodni list radnika (DA/NE):   "<<GetRodniList()<<endl;
    cout<<"\t\tDrzavljanstvo radnika:        "<<GetDrzavljanstvo()<<endl;
    cout<<"\t\tCV radnika (DA/NE):           "<<GetCV()<<endl;
    cout<<"\t\t-------------------------------------------------\n";
    cout<<"\t\tDirektor (DA/NE):             "<<GetDirektor()<<endl;
    cout<<"\t\tMenadzer (DA/NE):             "<<GetMenadzer()<<endl;
    cout<<"\t\tMarketar (DA/NE):             "<<GetMarketar()<<endl;
    cout<<"\t\tKasir    (DA/NE):             "<<GetKasir()<<endl;
    cout<<"\t\tProdavac (DA/NE):             "<<GetProdavac()<<endl;
    cout<<"\t\tCistac   (DA/NE):             "<<GetCistac()<<endl;
    cout<<"\t\t=================================================\n";
    cout<<endl<<endl;

}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
