#include <iostream>
#include "Kompanija.h"
#include "Radnik.h"

using namespace std;

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje konstruktora i destruktora
//                     klase Radnik


Radnik::Radnik(){}
Radnik::~Radnik(){}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~




//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije pretraga koja ce sluziti
//                 za pretragu imena radnika


int Radnik::pretragaImena(string Ime){
    for(int i=0; i<pod.size(); i++)	{
		if(pod[i].GetIme()==Ime)
            return i;
    }
    return -1;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~







//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije pretraga koja ce sluziti
//                 za pretragu JMBG-a radnika


int Radnik::pretragaJMBGa(long long JMBG){
    for(int i=0; i<pod.size(); i++)	{
		if(pod[i].GetJMBG()==JMBG)
            return i;
    }
    return -1;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~





//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije pretraga koja ce sluziti
//                 za pretragu ID-a radnika


int Radnik::pretraga(int ID){
    for(int i=0; i<pod.size(); i++)	{
		if(pod[i].GetID()==ID)
            return i;
    }
    return -1;
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~






//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//                 za dodavanje radnika

void Radnik::dodajRadnika(){

    int ID_r;

    string ime_r;
    string prezime_r;
    long long JMBG_r;
    int godiste_r;

    string s_sprema_r;
    string rodni_list_r;
    string drzavljanstvo_r;
    string CV_r;

    string direktor_r;
    string menadzer_r;
    string marketar_r;
    string kasir_r;
    string prodavac_r;
    string cistac_r;

    int n;

	cout<<"\t\t================================================="<<endl;
    cout<<"\t\t   Unesite koliko radnika zelite unijeti: ";
    cin>>n;
    cout<<"\t\t================================================="<<endl<<endl;

    for(int i=0;i<n;i++){

	system("CLS");
	cout<<"\t\t================================================="<<endl;
    cout<<"\t\t\tUnesite osnovne podatke o "<<i+1<<". radniku!"<<endl;
	cout<<"\t\t================================================="<<endl<<endl;

   	bool ID_r_ok=false;
    while(!ID_r_ok){
    cout<<"\t\t\tDodajte ID radnika: ";
	cin>>ID_r;
	int a=pretraga(ID_r);
	if(a>-1){
        cout<<"\n\t\t==================================================="<<endl;
        cout<<"\t\t\t\tID postoji u bazi!";
        cout<<"\n\t\t==================================================="<<endl<<endl;
	}else{
	    ID_r_ok=true;
        rad.SetID(ID_r);
        cout<<"\t\t-------------------------------------------------"<<endl;
    }
}

    cout<<"\t\t\tDodajte ime radnika: ";
	cin>>ime_r;
	rad.SetIme(ime_r);
	cout<<"\t\t-------------------------------------------------"<<endl;

	cout<<"\t\t\tDodajte prezime radnika: ";
	cin>>prezime_r;
	rad.SetPrezime(prezime_r);
	cout<<"\t\t-------------------------------------------------"<<endl;

   	bool JMBG_r_ok=false;
   	while(!JMBG_r_ok){
   	cout<<"\t\t\tDodajte JMBG radnika: ";
    cin>>JMBG_r;
    int a=pretragaJMBGa(JMBG_r);
	if(a>-1){
            cout<<"\n\t\t==================================================="<<endl;
            cout<<"\t\t\t\tJMBG postoji u bazi!";
            cout<<"\n\t\t==================================================="<<endl<<endl;
    }else{
        if((JMBG_r<01111111111111) || (JMBG_r>99999999999999)){
        cout<<"\n\t\t==================================================="<<endl;
        cout<<"\t\t\tJMBG mora da sadrzi 13 cifara!"<<endl;
        cout<<"\t\t==================================================="<<endl<<endl;
        }else{
        JMBG_r_ok=true;
        rad.SetJMBG(JMBG_r);
        cout<<"\t\t-------------------------------------------------"<<endl;
        }
    }
}

	cout<<"\t\t\tDodajte godiste radnika: ";
	cin>>godiste_r;
	rad.SetGodiste(godiste_r);
	cout<<"\t\t-------------------------------------------------"<<endl;

	system("CLS");
	cout<<"\t\t=========================================================="<<endl;
    cout<<"\t\t\tUnesite podatke o dokumentaciji "<<i+1<<". radnika!"<<endl;
	cout<<"\t\t=========================================================="<<endl<<endl;

    cout<<"\t\t\tDodajte strucnu spremu radnika: ";
	cin>>s_sprema_r;
	rad.SetStrucnaSprema(s_sprema_r);
	cout<<"\t\t-------------------------------------------------------------"<<endl;

    cout<<"\t\t\tDa li radnik ima dostavljen rodni list? (DA/NE): ";
	cin>>rodni_list_r;
	rad.SetRodniList(rodni_list_r);
	cout<<"\t\t-------------------------------------------------------------"<<endl;

    cout<<"\t\t\tDodajte drzavljanstvo radnika: ";
	cin>>drzavljanstvo_r;
	rad.SetDrzavljanstvo(drzavljanstvo_r);
	cout<<"\t\t----------------------------------------------------------"<<endl;

	cout<<"\t\t\tDa li radnik ima dostavljen CV? (DA/NE): ";
	cin>>CV_r;
	rad.SetCV(CV_r);
	cout<<"\t\t----------------------------------------------------------"<<endl;

	system("CLS");
	cout<<"\t\t=========================================================="<<endl;
    cout<<"\t\tUnesite podatke o organizacionoj jedinici "<<i+1<<". radnika!"<<endl;
	cout<<"\t\t=========================================================="<<endl<<endl;

    cout<<"\t\t\tDa li je radnik direktor kompanije (DA/NE): ";
	cin>>direktor_r;
    rad.SetDirektor(direktor_r);
	cout<<"\t\t----------------------------------------------------------"<<endl;

    cout<<"\t\t\tDa li je osoba menadzer kompanije? (DA/NE) : ";
    cin>>menadzer_r;
    rad.SetMenadzer(menadzer_r);
	cout<<"\t\t----------------------------------------------------------"<<endl;

    cout<<"\t\t\tDa li je osoba marketar kompanije? (DA/NE) : ";
    cin>>marketar_r;
    rad.SetMarketar(marketar_r);
	cout<<"\t\t----------------------------------------------------------"<<endl;

    cout<<"\t\t\tDa li je osoba kasir? (DA/NE) : ";
    cin>>kasir_r;
    rad.SetKasir(kasir_r);
	cout<<"\t\t----------------------------------------------------------"<<endl;
    cout<<"\t\t\tDa li je osoba prodavac? (DA/NE) : ";
    cin>>prodavac_r;
    rad.SetProdavac(prodavac_r);
	cout<<"\t\t----------------------------------------------------------"<<endl;

    cout<<"\t\t\tDa li je osoba cistac? (DA/NE) : ";
    cin>>cistac_r;
    rad.SetCistac(cistac_r);
	cout<<"\t\t----------------------------------------------------------"<<endl;

	pod.push_back(rad);

	ofstream baza;
	baza.open ("Izvjestaj.txt",ios::app);
	if(baza.is_open()){

    baza<<endl;
    baza<<"\t\t=================================================\n";
    baza<<"\t\tID radnika:                   "<<rad.GetID()<<endl;
    baza<<"\t\tIme radnika:                  "<<rad.GetIme()<<endl;
	baza<<"\t\tPrezime radnika:              "<<rad.GetPrezime()<<endl;
	baza<<"\t\tJMBG radnika:                 "<<rad.GetJMBG()<<endl;
	baza<<"\t\tGodiste radnika:              "<<rad.GetGodiste()<<endl;
    baza<<"\t\t-------------------------------------------------\n";
	baza<<"\t\tStrucna sprema radnika:       "<<rad.GetStrucnaSprema()<<endl;
    baza<<"\t\tRodni list radnika (DA/NE):   "<<rad.GetRodniList()<<endl;
    baza<<"\t\tDrzavljanstvo radnika:        "<<rad.GetDrzavljanstvo()<<endl;
    baza<<"\t\tCV radnika (DA/NE):           "<<rad.GetCV()<<endl;
    baza<<"\t\t-------------------------------------------------\n";
    baza<<"\t\tDirektor (DA/NE):             "<<rad.GetDirektor()<<endl;
    baza<<"\t\tMenadzer (DA/NE):             "<<rad.GetMenadzer()<<endl;
    baza<<"\t\tMarketar (DA/NE):             "<<rad.GetMarketar()<<endl;
    baza<<"\t\tKasir    (DA/NE):             "<<rad.GetKasir()<<endl;
    baza<<"\t\tProdavac (DA/NE):             "<<rad.GetProdavac()<<endl;
    baza<<"\t\tCistac   (DA/NE):             "<<rad.GetCistac()<<endl;
    baza<<"\t\t=================================================\n";
    baza<<endl;}
	baza.close();

	system("cls");

    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    cout<<"\t=================================================================="<<endl;
    cout<<"\t\t\tNovi radnik uspjesno dodan!"<<endl;
    cout<<"\t=================================================================="<<endl;
    cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    system("pause");
        }
    }
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~





//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//        za uredjivanje imena trazenog radnika
//                      pomocu ID-a

void Radnik::urediImeRadnikaID(){

    int ID;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite ID radnika : ";
    cin>>ID;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretraga(ID);
    if(a>-1){
        string ime_rn1;
        cout<<"\t\t\tUnesite novo ime radnika: ";
        cin>>ime_rn1;
        pod[a].SetIme(ime_rn1);

        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<"\t\t\tIme radnika uspjesno zamijenjeno!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

        ofstream baza;
        baza.open ("Izvjestaj.txt",ios::app);
        if(baza.is_open()){

        baza<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tIzmjena radnika sa ID-om: "<<ID<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tIme radnika:                  "<<pod[a].GetIme()<<endl;
        baza<<"\t\t=================================================\n";
        baza<<endl<<endl;
        }
        baza.close();
    }else{
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\tPogresan radnik!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~






//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//       za uredjivanje prezimena trazenog radnika
//                      pomocu ID-a

void Radnik::urediPrezimeRadnikaID(){

    int ID;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite ID radnika : ";
    cin>>ID;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretraga(ID);
    if(a>-1){
        string prezime_rn1;
        cout<<"\t\t\tUnesite novo prezime radnika: ";
        cin>>prezime_rn1;
        pod[a].SetPrezime(prezime_rn1);
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<"\t\t\tPrezime radnika uspjesno zamijenjeno!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

        ofstream baza;
        baza.open ("Izvjestaj.txt",ios::app);
        if(baza.is_open()){

        baza<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tIzmjena radnika sa ID-om: "<<ID<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tPrezime radnika:              "<<pod[a].GetPrezime()<<endl;
        baza<<"\t\t=================================================\n";
        baza<<endl<<endl;
        }
        baza.close();
    }else{
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\tPogresan radnik!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~




//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//        za uredjivanje godista trazenog radnika
//                      pomocu ID-a

void Radnik::urediGodisteRadnikaID(){

    int ID;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite ID radnika : ";
    cin>>ID;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretraga(ID);
    if(a>-1){
        int godiste_rn1;
        cout<<"\t\t\tUnesite novo godiste radnika: ";
        cin>>godiste_rn1;
        pod[a].SetGodiste(godiste_rn1);
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<"\t\t\tGodiste radnika uspjesno zamijenjeno!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

        ofstream baza;
        baza.open ("Izvjestaj.txt",ios::app);
        if(baza.is_open()){

        baza<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tIzmjena radnika sa ID-om: "<<ID<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tGodiste radnika:              "<<pod[a].GetGodiste()<<endl;
        baza<<"\t\t=================================================\n";
        baza<<endl<<endl;
        }
        baza.close();
    }else{
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\tPogresan radnik!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~





//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//     za uredjivanje strucne spreme trazenog radnika
//                      pomocu ID-a

void Radnik::urediSSpremuRadnikaID(){

    int ID;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite ID radnika : ";
    cin>>ID;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretraga(ID);
    if(a>-1){
        string s_sprema_rn1;
        cout<<"\t\tUnesite novu strucnu spremu radnika: ";
        cin>>s_sprema_rn1;
        pod[a].SetStrucnaSprema(s_sprema_rn1);
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<"\t\tStrucna sprema radnika uspjesno zamijenjena!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

        ofstream baza;
        baza.open ("Izvjestaj.txt",ios::app);
        if(baza.is_open()){

        baza<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tIzmjena radnika sa ID-om: "<<ID<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tStrucna sprema radnika:       "<<pod[a].GetStrucnaSprema()<<endl;
        baza<<"\t\t=================================================\n";
        baza<<endl<<endl;
        }
        baza.close();
    }else{
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\tPogresan radnik!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~





//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//      za uredjivanje rodnog lista trazenog radnika
//                      pomocu ID-a

void Radnik::urediRListRadnikaID(){

    int ID;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite ID radnika : ";
    cin>>ID;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretraga(ID);
    if(a>-1){
        string r_list_rn1;
		cout<<"\t\tIzmjena: Da li radnik ima dostavljen rodni list? (DA/NE): ";
        cin>>r_list_rn1;
        pod[a].SetRodniList(r_list_rn1);
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<"\t\tRodni list radnika uspjesno zamijenjen!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

        ofstream baza;
        baza.open ("Izvjestaj.txt",ios::app);
        if(baza.is_open()){

        baza<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tIzmjena radnika sa ID-om: "<<ID<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tRodni list radnika (DA/NE):   "<<pod[a].GetRodniList()<<endl;
        baza<<"\t\t=================================================\n";
        baza<<endl<<endl;
        }
        baza.close();
    }else{
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\tPogresan radnik!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~





//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//     za uredjivanje drzavljanstva trazenog radnika
//                      pomocu ID-a

void Radnik::urediDrzavljanstvoRadnikaID(){

    int ID;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite ID radnika : ";
    cin>>ID;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretraga(ID);
    if(a>-1){
        string drzavljanstvo_rn1;
        cout<<"\t\tUnesite novo drzavljanstvo radnika: ";
        cin>>drzavljanstvo_rn1;
        pod[a].SetDrzavljanstvo(drzavljanstvo_rn1);
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<"\t\t\tDrzavljanstvo radnika uspjesno zamijenjeno!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

        ofstream baza;
        baza.open ("Izvjestaj.txt",ios::app);
        if(baza.is_open()){

        baza<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tIzmjena radnika sa ID-om: "<<ID<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tDrzavljanstvo radnika:        "<<pod[a].GetDrzavljanstvo()<<endl;
        baza<<"\t\t=================================================\n";
        baza<<endl<<endl;
        }
        baza.close();
    }else{
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\tPogresan radnik!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~





//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//         za uredjivanje CV-a trazenog radnika
//                      pomocu ID-a

void Radnik::urediCVRadnikaID(){

    int ID;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite ID radnika : ";
    cin>>ID;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretraga(ID);
    if(a>-1){
        string CV_rn1;
		cout<<"\t\tIzmjena: Da li radnik ima dostavljen CV? (DA/NE): ";
        cin>>CV_rn1;
        pod[a].SetCV(CV_rn1);
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<"\t\t\t   CV radnika uspjesno izmijenjen!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

        ofstream baza;
        baza.open ("Izvjestaj.txt",ios::app);
        if(baza.is_open()){

        baza<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tIzmjena radnika sa ID-om: "<<ID<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tCV radnika (DA/NE):           "<<pod[a].GetCV()<<endl;
        baza<<"\t\t=================================================\n";
        baza<<endl<<endl;
        }
        baza.close();
    }else{
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\tPogresan radnik!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~






//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//            za uredjivanje podataka o
//       organizacionoj jedinici trazenog radnika
//                      pomocu ID-a

void Radnik::urediOrgJedinicuID(){

    int ID;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite ID radnika : ";
    cin>>ID;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretraga(ID);
    if(a>-1){

		string direktor_rn1;
		cout<<"\tIzmjena: Da li je radnik na poziciji direktora kompanije? (DA/NE): ";
		cin>>direktor_rn1;
		pod[a].SetDirektor(direktor_rn1);
        cout<<"\t-----------------------------------------------------------------------"<<endl;

		string menadzer_rn1;
		cout<<"\tIzmjena: Da li je radnik na poziciji menadzera kompanije? (DA/NE): ";
		cin>>menadzer_rn1;
		pod[a].SetMenadzer(menadzer_rn1);
        cout<<"\t-----------------------------------------------------------------------"<<endl;

		string marketar_rn1;
		cout<<"\tIzmjena: Da li je radnik na poziciji marketara kompanije? (DA/NE): ";
		cin>>marketar_rn1;
		pod[a].SetMarketar(marketar_rn1);
        cout<<"\t-----------------------------------------------------------------------"<<endl;

		string kasir_rn1;
		cout<<"\t\tIzmjena: Da li je radnik na poziciji kasira? (DA/NE): ";
		cin>>kasir_rn1;
		pod[a].SetKasir(kasir_rn1);
        cout<<"\t-----------------------------------------------------------------------"<<endl;

		string prodavac_rn1;
		cout<<"\t\tIzmjena: Da li je radnik na poziciji prodavaca? (DA/NE): ";
		cin>>prodavac_rn1;
		pod[a].SetProdavac(prodavac_rn1);
        cout<<"\t-----------------------------------------------------------------------"<<endl;

		string cistac_rn1;
		cout<<"\t\tIzmjena: Da li je radnik na poziciji cistaca? (DA/NE): ";
		cin>>cistac_rn1;
		pod[a].SetCistac(cistac_rn1);
        cout<<"\t-----------------------------------------------------------------------"<<endl;

        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<"\t\tOrganizaciona jedinica radnika uspjesno izmijenjena!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

        ofstream baza;
        baza.open ("Izvjestaj.txt",ios::app);
        if(baza.is_open()){

        baza<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tIzmjena radnika sa ID-om: "<<ID<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tDirektor (DA/NE):             "<<pod[a].GetDirektor()<<endl;
        baza<<"\t\tMenadzer (DA/NE):             "<<pod[a].GetMenadzer()<<endl;
        baza<<"\t\tMarketar (DA/NE):             "<<pod[a].GetMarketar()<<endl;
        baza<<"\t\tKasir    (DA/NE):             "<<pod[a].GetKasir()<<endl;
        baza<<"\t\tProdavac (DA/NE):             "<<pod[a].GetProdavac()<<endl;
        baza<<"\t\tCistac   (DA/NE):             "<<pod[a].GetCistac()<<endl;
        baza<<"\t\t=================================================\n";
        baza<<endl<<endl;
        }
        baza.close();
    }else{
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\tPogresan radnik!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~






//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//       za uredjivanje svih informacija o radniku
//                      pomocu ID-a

void Radnik::urediRadnikaID(){

    int ID;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite ID radnika : ";
    cin>>ID;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretraga(ID);
    if(a>-1){

        system("CLS");
        cout<<"\t\t\tUnesite nove osnovne podatke o radniku!"<<endl;
        cout<<"\t\t================================================="<<endl;


		string ime_rn;
		cout<<"\t\t\tDodajte novo ime radnika: ";
		cin>>ime_rn;
		pod[a].SetIme(ime_rn);
        cout<<"\t\t-------------------------------------------------"<<endl;

		string prezime_rn;
		cout<<"\t\t\tDodajte novo prezime radnika: ";
		cin>>prezime_rn;
		pod[a].SetPrezime(prezime_rn);
        cout<<"\t\t-------------------------------------------------"<<endl;

		int godiste_rn;
		cout<<"\t\t\tDodajte novo godiste radnika: ";
		cin>>godiste_rn;
		pod[a].SetGodiste(godiste_rn);
        cout<<"\t\t-------------------------------------------------"<<endl;

		system("CLS");
		cout<<"\t\tUnesite nove podatke o dokumentaciji radnika!"<<endl;
        cout<<"\t==============================================================="<<endl;

        string s_sprema_rn;
		cout<<"\t\tDodajte novu strucnu spremu radnika: ";
		cin>>s_sprema_rn;
		pod[a].SetStrucnaSprema(s_sprema_rn);
        cout<<"\t---------------------------------------------------------------"<<endl;

		string rodni_list_rn;
		cout<<"\tIzmjena: Da li radnik ima dostavljen rodni list? (DA/NE): ";
		cin>>rodni_list_rn;
		pod[a].SetRodniList(rodni_list_rn);
        cout<<"\t---------------------------------------------------------------"<<endl;

		string drzavljanstvo_rn;
		cout<<"\t\tDodajte novo drzavljanstvo radnika: ";
		cin>>drzavljanstvo_rn;
		pod[a].SetDrzavljanstvo(drzavljanstvo_rn);
        cout<<"\t---------------------------------------------------------------"<<endl;

		string CV_rn;
		cout<<"\t\tIzmjena: Da li radnik ima dostavljen CV? (DA/NE): ";
		cin>>CV_rn;
		pod[a].SetCV(CV_rn);
        cout<<"\t---------------------------------------------------------------"<<endl;

		system("CLS");
		cout<<"\t\tUnesite nove podatke o organizacionoj jedinici radnika!"<<endl;
        cout<<"\t======================================================================"<<endl;

		string direktor_rn;
		cout<<"\tIzmjena: Da li je radnik na poziciji direktora kompanije? (DA/NE): ";
		cin>>direktor_rn;
		pod[a].SetDirektor(direktor_rn);
        cout<<"\t----------------------------------------------------------------------"<<endl;

		string menadzer_rn;
		cout<<"\tIzmjena: Da li je radnik na poziciji menadzera kompanije? (DA/NE): ";
		cin>>menadzer_rn;
		pod[a].SetMenadzer(menadzer_rn);
        cout<<"\t----------------------------------------------------------------------"<<endl;

		string marketar_rn;
		cout<<"\tIzmjena: Da li je radnik na poziciji marketara kompanije? (DA/NE): ";
		cin>>marketar_rn;
		pod[a].SetMarketar(marketar_rn);
        cout<<"\t----------------------------------------------------------------------"<<endl;

		string kasir_rn;
		cout<<"\t\tIzmjena: Da li je radnik na poziciji kasira? (DA/NE): ";
		cin>>kasir_rn;
		pod[a].SetKasir(kasir_rn);
        cout<<"\t----------------------------------------------------------------------"<<endl;

		string prodavac_rn;
		cout<<"\t\tIzmjena: Da li je radnik na poziciji prodavaca? (DA/NE): ";
		cin>>prodavac_rn;
		pod[a].SetProdavac(prodavac_rn);
        cout<<"\t----------------------------------------------------------------------"<<endl;

		string cistac_rn;
		cout<<"\t\tIzmjena: Da li je radnik na poziciji cistaca? (DA/NE): ";
		cin>>cistac_rn;
		pod[a].SetCistac(cistac_rn);
        cout<<"\t----------------------------------------------------------------------"<<endl;



		system("cls");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<"\t\t\tInformacije o radniku update-ovane!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

        ofstream baza;
        baza.open ("Izvjestaj.txt",ios::app);
        if(baza.is_open()){

        baza<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tIzmjena radnika sa ID-om: "<<ID<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tIme radnika:                  "<<pod[a].GetIme()<<endl;
        baza<<"\t\tPrezime radnika:              "<<pod[a].GetPrezime()<<endl;
        baza<<"\t\tGodiste radnika:              "<<pod[a].GetGodiste()<<endl;
        baza<<"\t\t-------------------------------------------------\n";
        baza<<"\t\tStrucna sprema radnika:       "<<pod[a].GetStrucnaSprema()<<endl;
        baza<<"\t\tRodni list radnika (DA/NE):   "<<pod[a].GetRodniList()<<endl;
        baza<<"\t\tDrzavljanstvo radnika:        "<<pod[a].GetDrzavljanstvo()<<endl;
        baza<<"\t\tCV radnika (DA/NE):           "<<pod[a].GetCV()<<endl;
        baza<<"\t\t-------------------------------------------------\n";
        baza<<"\t\tDirektor (DA/NE):             "<<pod[a].GetDirektor()<<endl;
        baza<<"\t\tMenadzer (DA/NE):             "<<pod[a].GetMenadzer()<<endl;
        baza<<"\t\tMarketar (DA/NE):             "<<pod[a].GetMarketar()<<endl;
        baza<<"\t\tKasir    (DA/NE):             "<<pod[a].GetKasir()<<endl;
        baza<<"\t\tProdavac (DA/NE):             "<<pod[a].GetProdavac()<<endl;
        baza<<"\t\tCistac   (DA/NE):             "<<pod[a].GetCistac()<<endl;
        baza<<"\t\t=================================================\n";
        baza<<endl<<endl;
        }
        baza.close();
    }else{
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\tPogresan radnik!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~








//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//        za uredjivanje imena trazenog radnika
//                    pomocu JMBG-a

void Radnik::urediImeRadnikaJMBG(){

    long long JMBG;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite JMBG radnika : ";
    cin>>JMBG;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretragaJMBGa(JMBG);
    if(a>-1){
        string ime_rn1;
        cout<<"\t\t\tUnesite novo ime radnika: ";
        cin>>ime_rn1;
        cout<<"\t\t------------------------------------------"<<endl;
        pod[a].SetIme(ime_rn1);
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<"\t\t\tIme je uspjesno izmijenjeno!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;


       ofstream baza;
        baza.open ("Izvjestaj.txt",ios::app);
        if(baza.is_open()){

        baza<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tIzmjena radnika sa JMBG-om: "<<JMBG<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tIme radnika:                  "<<pod[a].GetIme()<<endl;
        baza<<"\t\t=================================================\n";
        baza<<endl<<endl;
        }
        baza.close();
    }else{
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\tPogresan radnik!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~






//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//       za uredjivanje prezimena trazenog radnika
//                    pomocu JMBG-a

void Radnik::urediPrezimeRadnikaJMBG(){

    long long JMBG;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite JMBG radnika : ";
    cin>>JMBG;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretragaJMBGa(JMBG);
    if(a>-1){
        string prezime_rn1;
        cout<<"\t\t\tUnesite novo prezime radnika: ";
        cin>>prezime_rn1;
        pod[a].SetPrezime(prezime_rn1);
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<"\t\t\tPrezime radnika uspjesno zamijenjeno!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

        ofstream baza;
        baza.open ("Izvjestaj.txt",ios::app);
        if(baza.is_open()){

        baza<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tIzmjena radnika sa JMBG-om: "<<JMBG<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tPrezime radnika:              "<<pod[a].GetPrezime()<<endl;
        baza<<"\t\t=================================================\n";
        baza<<endl<<endl;
        }
        baza.close();
    }else{
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\tPogresan radnik!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~




//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//        za uredjivanje godista trazenog radnika
//                    pomocu JMBG-a

void Radnik::urediGodisteRadnikaJMBG(){

    long long JMBG;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite JMBG radnika : ";
    cin>>JMBG;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretragaJMBGa(JMBG);
    if(a>-1){
        int godiste_rn1;
        cout<<"\t\t\tUnesite novo godiste radnika: ";
        cin>>godiste_rn1;
        pod[a].SetGodiste(godiste_rn1);
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<"\t\t\tGodiste radnika uspjesno zamijenjeno!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

        ofstream baza;
        baza.open ("Izvjestaj.txt",ios::app);
        if(baza.is_open()){

        baza<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tIzmjena radnika sa JMBG-om: "<<JMBG<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tGodiste radnika:              "<<pod[a].GetGodiste()<<endl;
        baza<<"\t\t=================================================\n";
        baza<<endl<<endl;
        }
        baza.close();
    }else{
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\tPogresan radnik!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~





//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//     za uredjivanje strucne spreme trazenog radnika
//                      pomocu JMBG-a

void Radnik::urediSSpremuRadnikaJMBG(){

    long long JMBG;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite JMBG radnika : ";
    cin>>JMBG;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretragaJMBGa(JMBG);
    if(a>-1){
        string s_sprema_rn1;
        cout<<"\t\tUnesite novu strucnu spremu radnika: ";
        cin>>s_sprema_rn1;
        pod[a].SetStrucnaSprema(s_sprema_rn1);
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<"\t\tStrucna sprema radnika uspjesno zamijenjena!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

        ofstream baza;
        baza.open ("Izvjestaj.txt",ios::app);
        if(baza.is_open()){

        baza<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tIzmjena radnika sa JMBG-om: "<<JMBG<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tStrucna sprema radnika:       "<<pod[a].GetStrucnaSprema()<<endl;
        baza<<"\t\t=================================================\n";
        baza<<endl<<endl;
        }
        baza.close();
    }else{
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\tPogresan radnik!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~





//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//      za uredjivanje rodnog lista trazenog radnika
//                    pomocu JMBG-a

void Radnik::urediRListRadnikaJMBG(){

    long long JMBG;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite JMBG radnika : ";
    cin>>JMBG;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretragaJMBGa(JMBG);
    if(a>-1){
        string r_list_rn1;
		cout<<"\t\tIzmjena: Da li radnik ima dostavljen rodni list? (DA/NE): ";
        cin>>r_list_rn1;
        pod[a].SetRodniList(r_list_rn1);
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<"\t\tRodni list radnika uspjesno zamijenjen!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

        ofstream baza;
        baza.open ("Izvjestaj.txt",ios::app);
        if(baza.is_open()){

        baza<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tIzmjena radnika sa JMBG-om: "<<JMBG<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tRodni list radnika (DA/NE):   "<<pod[a].GetRodniList()<<endl;
        baza<<"\t\t=================================================\n";
        baza<<endl<<endl;
        }
        baza.close();
    }else{
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\tPogresan radnik!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~





//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//     za uredjivanje drzavljanstva trazenog radnika
//                    pomocu JMBG-a

void Radnik::urediDrzavljanstvoRadnikaJMBG(){

    long long JMBG;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite JMBG radnika : ";
    cin>>JMBG;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretragaJMBGa(JMBG);
    if(a>-1){
        string drzavljanstvo_rn1;
        cout<<"\t\tUnesite novo drzavljanstvo radnika: ";
        cin>>drzavljanstvo_rn1;
        pod[a].SetDrzavljanstvo(drzavljanstvo_rn1);
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<"\t\t\tDrzavljanstvo radnika uspjesno zamijenjeno!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

        ofstream baza;
        baza.open ("Izvjestaj.txt",ios::app);
        if(baza.is_open()){

        baza<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tIzmjena radnika sa JMBG-om: "<<JMBG<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tDrzavljanstvo radnika:        "<<pod[a].GetDrzavljanstvo()<<endl;
        baza<<"\t\t=================================================\n";
        baza<<endl<<endl;
        }
        baza.close();
    }else{
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\tPogresan radnik!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~





//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//         za uredjivanje CV-a trazenog radnika
//                    pomocu JMBG-a

void Radnik::urediCVRadnikaJMBG(){

    long long JMBG;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite JMBG radnika : ";
    cin>>JMBG;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretragaJMBGa(JMBG);
    if(a>-1){
        string CV_rn1;
		cout<<"\t\tIzmjena: Da li radnik ima dostavljen CV? (DA/NE): ";
        cin>>CV_rn1;
        pod[a].SetCV(CV_rn1);
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<"\t\t\t   CV radnika uspjesno izmijenjen!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

        ofstream baza;
        baza.open ("Izvjestaj.txt",ios::app);
        if(baza.is_open()){

        baza<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tIzmjena radnika sa JMBG-om: "<<JMBG<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tCV radnika (DA/NE):           "<<pod[a].GetCV()<<endl;
        baza<<"\t\t=================================================\n";
        baza<<endl<<endl;
        }
        baza.close();
    }else{
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\tPogresan radnik!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~






//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//            za uredjivanje podataka o
//       organizacionoj jedinici trazenog radnika
//                    pomocu JMBG-a

void Radnik::urediOrgJedinicuJMBG(){

    long long JMBG;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite JMBG radnika : ";
    cin>>JMBG;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretragaJMBGa(JMBG);
    if(a>-1){

		string direktor_rn1;
		cout<<"\tIzmjena: Da li je radnik na poziciji direktora kompanije? (DA/NE): ";
		cin>>direktor_rn1;
		pod[a].SetDirektor(direktor_rn1);
        cout<<"\t-----------------------------------------------------------------------"<<endl;

		string menadzer_rn1;
		cout<<"\tIzmjena: Da li je radnik na poziciji menadzera kompanije? (DA/NE): ";
		cin>>menadzer_rn1;
		pod[a].SetMenadzer(menadzer_rn1);
        cout<<"\t-----------------------------------------------------------------------"<<endl;

		string marketar_rn1;
		cout<<"\tIzmjena: Da li je radnik na poziciji marketara kompanije? (DA/NE): ";
		cin>>marketar_rn1;
		pod[a].SetMarketar(marketar_rn1);
        cout<<"\t-----------------------------------------------------------------------"<<endl;

		string kasir_rn1;
		cout<<"\t\tIzmjena: Da li je radnik na poziciji kasira? (DA/NE): ";
		cin>>kasir_rn1;
		pod[a].SetKasir(kasir_rn1);
        cout<<"\t-----------------------------------------------------------------------"<<endl;

		string prodavac_rn1;
		cout<<"\t\tIzmjena: Da li je radnik na poziciji prodavaca? (DA/NE): ";
		cin>>prodavac_rn1;
		pod[a].SetProdavac(prodavac_rn1);
        cout<<"\t-----------------------------------------------------------------------"<<endl;

		string cistac_rn1;
		cout<<"\t\tIzmjena: Da li je radnik na poziciji cistaca? (DA/NE): ";
		cin>>cistac_rn1;
		pod[a].SetCistac(cistac_rn1);
        cout<<"\t-----------------------------------------------------------------------"<<endl;

        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<"\t\tOrganizaciona jedinica radnika uspjesno izmijenjena!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

        ofstream baza;
        baza.open ("Izvjestaj.txt",ios::app);
        if(baza.is_open()){

        baza<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tIzmjena radnika sa JMBG-om: "<<JMBG<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tDirektor (DA/NE):             "<<pod[a].GetDirektor()<<endl;
        baza<<"\t\tMenadzer (DA/NE):             "<<pod[a].GetMenadzer()<<endl;
        baza<<"\t\tMarketar (DA/NE):             "<<pod[a].GetMarketar()<<endl;
        baza<<"\t\tKasir    (DA/NE):             "<<pod[a].GetKasir()<<endl;
        baza<<"\t\tProdavac (DA/NE):             "<<pod[a].GetProdavac()<<endl;
        baza<<"\t\tCistac   (DA/NE):             "<<pod[a].GetCistac()<<endl;
        baza<<"\t\t=================================================\n";
        baza<<endl<<endl;
        }
        baza.close();
    }else{
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\tPogresan radnik!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~






//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//       za uredjivanje svih informacija o radniku
//                    pomocu JMBG-a

void Radnik::urediRadnikaJMBG(){

    long long JMBG;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite JMBG radnika : ";
    cin>>JMBG;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretragaJMBGa(JMBG);
    if(a>-1){

        system("CLS");
        cout<<"\t\t\tUnesite nove osnovne podatke o radniku!"<<endl;
        cout<<"\t\t================================================="<<endl;


		string ime_rn;
		cout<<"\t\t\tDodajte novo ime radnika: ";
		cin>>ime_rn;
		pod[a].SetIme(ime_rn);
        cout<<"\t\t-------------------------------------------------"<<endl;

		string prezime_rn;
		cout<<"\t\t\tDodajte novo prezime radnika: ";
		cin>>prezime_rn;
		pod[a].SetPrezime(prezime_rn);
        cout<<"\t\t-------------------------------------------------"<<endl;

		int godiste_rn;
		cout<<"\t\t\tDodajte novo godiste radnika: ";
		cin>>godiste_rn;
		pod[a].SetGodiste(godiste_rn);
        cout<<"\t\t-------------------------------------------------"<<endl;

		system("CLS");
		cout<<"\t\tUnesite nove podatke o dokumentaciji radnika!"<<endl;
        cout<<"\t==============================================================="<<endl;

        string s_sprema_rn;
		cout<<"\t\tDodajte novu strucnu spremu radnika: ";
		cin>>s_sprema_rn;
		pod[a].SetStrucnaSprema(s_sprema_rn);
        cout<<"\t---------------------------------------------------------------"<<endl;

		string rodni_list_rn;
		cout<<"\tIzmjena: Da li radnik ima dostavljen rodni list? (DA/NE): ";
		cin>>rodni_list_rn;
		pod[a].SetRodniList(rodni_list_rn);
        cout<<"\t---------------------------------------------------------------"<<endl;

		string drzavljanstvo_rn;
		cout<<"\t\tDodajte novo drzavljanstvo radnika: ";
		cin>>drzavljanstvo_rn;
		pod[a].SetDrzavljanstvo(drzavljanstvo_rn);
        cout<<"\t---------------------------------------------------------------"<<endl;

		string CV_rn;
		cout<<"\t\tIzmjena: Da li radnik ima dostavljen CV? (DA/NE): ";
		cin>>CV_rn;
		pod[a].SetCV(CV_rn);
        cout<<"\t---------------------------------------------------------------"<<endl;

		system("CLS");
		cout<<"\t\tUnesite nove podatke o organizacionoj jedinici radnika!"<<endl;
        cout<<"\t======================================================================"<<endl;

		string direktor_rn;
		cout<<"\tIzmjena: Da li je radnik na poziciji direktora kompanije? (DA/NE): ";
		cin>>direktor_rn;
		pod[a].SetDirektor(direktor_rn);
        cout<<"\t----------------------------------------------------------------------"<<endl;

		string menadzer_rn;
		cout<<"\tIzmjena: Da li je radnik na poziciji menadzera kompanije? (DA/NE): ";
		cin>>menadzer_rn;
		pod[a].SetMenadzer(menadzer_rn);
        cout<<"\t----------------------------------------------------------------------"<<endl;

		string marketar_rn;
		cout<<"\tIzmjena: Da li je radnik na poziciji marketara kompanije? (DA/NE): ";
		cin>>marketar_rn;
		pod[a].SetMarketar(marketar_rn);
        cout<<"\t----------------------------------------------------------------------"<<endl;

		string kasir_rn;
		cout<<"\t\tIzmjena: Da li je radnik na poziciji kasira? (DA/NE): ";
		cin>>kasir_rn;
		pod[a].SetKasir(kasir_rn);
        cout<<"\t----------------------------------------------------------------------"<<endl;

		string prodavac_rn;
		cout<<"\t\tIzmjena: Da li je radnik na poziciji prodavaca? (DA/NE): ";
		cin>>prodavac_rn;
		pod[a].SetProdavac(prodavac_rn);
        cout<<"\t----------------------------------------------------------------------"<<endl;

		string cistac_rn;
		cout<<"\t\tIzmjena: Da li je radnik na poziciji cistaca? (DA/NE): ";
		cin>>cistac_rn;
		pod[a].SetCistac(cistac_rn);
        cout<<"\t----------------------------------------------------------------------"<<endl;



		system("cls");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t=================================================================="<<endl;
        cout<<"\t\t\tInformacije o radniku update-ovane!"<<endl;
        cout<<"\t=================================================================="<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

        ofstream baza;
        baza.open ("Izvjestaj.txt",ios::app);
        if(baza.is_open()){

        baza<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tIzmjena radnika sa JMBG-om: "<<JMBG<<endl;
        baza<<"\t\t=================================================\n";
        baza<<"\t\tIme radnika:                  "<<pod[a].GetIme()<<endl;
        baza<<"\t\tPrezime radnika:              "<<pod[a].GetPrezime()<<endl;
        baza<<"\t\tGodiste radnika:              "<<pod[a].GetGodiste()<<endl;
        baza<<"\t\t-------------------------------------------------\n";
        baza<<"\t\tStrucna sprema radnika:       "<<pod[a].GetStrucnaSprema()<<endl;
        baza<<"\t\tRodni list radnika (DA/NE):   "<<pod[a].GetRodniList()<<endl;
        baza<<"\t\tDrzavljanstvo radnika:        "<<pod[a].GetDrzavljanstvo()<<endl;
        baza<<"\t\tCV radnika (DA/NE):           "<<pod[a].GetCV()<<endl;
        baza<<"\t\t-------------------------------------------------\n";
        baza<<"\t\tDirektor (DA/NE):             "<<pod[a].GetDirektor()<<endl;
        baza<<"\t\tMenadzer (DA/NE):             "<<pod[a].GetMenadzer()<<endl;
        baza<<"\t\tMarketar (DA/NE):             "<<pod[a].GetMarketar()<<endl;
        baza<<"\t\tKasir    (DA/NE):             "<<pod[a].GetKasir()<<endl;
        baza<<"\t\tProdavac (DA/NE):             "<<pod[a].GetProdavac()<<endl;
        baza<<"\t\tCistac   (DA/NE):             "<<pod[a].GetCistac()<<endl;
        baza<<"\t\t=================================================\n";
        baza<<endl<<endl;
        }
        baza.close();
    }else{
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\tPogresan radnik!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~






//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//            za pretragu ID-a radnika
//        odnosno brza provjera da li je radnik
//         sa datim ID-om unesen u program

void Radnik::pretragaIDR(){

    int ID;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite ID radnika : ";
    cin>>ID;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretraga(ID);
    if(a>-1){
	    system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
		cout<<"\t\tRadnik se trazenim ID-om se nalazi u bazi podataka!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }else{
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
		cout<<"\t\tRadnik se trazenim ID-om se ne nalazi u bazi podataka!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~





//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//            za pretragu JMBG-a radnika
//        odnosno brza provjera da li je radnik
//         sa datim JMBG-om unesen u program

void Radnik::pretragaJMBG(){

    long long JMBG;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite JMBG radnika : ";
    cin>>JMBG;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretragaJMBGa(JMBG);
    if(a>-1){
	    system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
		cout<<"\t\tRadnik se trazenim JMBG-om se nalazi u bazi podataka!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }else{
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
		cout<<"\t\tRadnik se trazenim JMBG-om se ne nalazi u bazi podataka!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~







//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//          za pretragu JMBG-a i ID-a radnika
//                 po njegovom imenu

void Radnik::pretragaImenaR(){

    string Ime;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite ime radnika : ";
    cin>>Ime;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretragaImena(Ime);
    if(a>-1){
	    system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
		cout<<"\t\tID i JMBG radnika "<<pod[a].GetIme()<<":"<<endl<<"\t\tID: "<<pod[a].GetID()<<
		endl<<"\t\tJMBG: "<<pod[a].GetJMBG()<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }else{
        system("CLS");
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
		cout<<"\t\t\t\tGreska!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~







//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//        za prikaz informacija trazenog radnika
//            koji se trazi po njegovom ID-u

void Radnik::prikaziTrazenogRadnikaID(){

    int ID;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite ID radnika : ";
    cin>>ID;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretraga(ID);
    if(a>-1){
        system("CLS");
        pod[a].prikaziInfo();

    }
    else{
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\tPogresan radnik!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~







//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//        za prikaz informacija trazenog radnika
//            koji se trazi po njegovom JMBG-u

void Radnik::prikaziTrazenogRadnikaJMBG(){

    long long JMBG;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite JMBG radnika : ";
    cin>>JMBG;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretragaJMBGa(JMBG);
    if(a>-1){
        system("CLS");
        pod[a].prikaziInfo();
    }
    else{
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\tPogresan radnik!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~






//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//        za prikaz informacija svih radnika

void Radnik::prikaziSveRadnike(){

    int i;
    for(i=0;i<pod.size();i++){

            pod[i].prikaziInfo();

    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~




//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//         za brisanje podataka svih radnika

void Radnik::izbrisiSve(){
    int i=0;
    for(i=0;i<pod.size();i++){

        pod.erase(pod.begin(), pod.end());

        cout<<endl<<"\t=================================================================="<<endl;
		cout<<"\t\t\tSvi radnici su obrisani!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

        fstream baza;
        baza.open("Izvjestaj.txt", ios::out | ios::trunc);
        baza.close();
    }

}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~




//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//         za brisanje podataka trazenog radnika
//                  pomocu JMBG-a radnika


void Radnik::izbrisiRadnikaJMBG(){
    long long JMBG;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite JMBG radnika : ";
    cin>>JMBG;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretragaJMBGa(JMBG);
    if(a>-1){
        pod.erase(pod.begin()+a, pod.begin()+a+1);

        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
		cout<<"\t\t\tZeljeni radnik je obrisan!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

        ofstream baza;
        baza.open ("Izvjestaj.txt",ios::app);
        if(baza.is_open()){

        baza<<endl;
        baza<<"\t\t=====================================================\n";
        baza<<"\t\tRadnik sa JMBG-om: "<<JMBG<<" je izbrisan iz vektora!"<<endl;
        baza<<"\t\t=====================================================\n";
        baza<<endl<<endl;
        }
        baza.close();

    }
    else{
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\tPogresan radnik!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~






//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//         Definiranje funkcije koja ce sluziti
//         za brisanje podataka trazenog radnika
//                   pomocu ID radnika

void Radnik::izbrisiRadnikaID(){

    int ID;
    cout<<"\t\t=============================================="<<endl;
    cout<<"\t\t\tUnesite ID radnika : ";
    cin>>ID;
    cout<<"\t\t=============================================="<<endl<<endl;
    int a=pretraga(ID);
    if(a>-1){
        pod.erase(pod.begin()+a, pod.begin()+a+1);

        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t=================================================================="<<endl;
		cout<<"\t\t\tZeljeni radnik je obrisan!"<<endl;
        cout<<"\t=================================================================="<<endl;
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

        ofstream baza;
        baza.open ("Izvjestaj.txt",ios::app);
        if(baza.is_open()){

        baza<<endl;
        baza<<"\t\t=====================================================\n";
        baza<<"\t\tRadnik sa ID-om: "<<ID<<" je izbrisan iz vektora!"<<endl;
        baza<<"\t\t=====================================================\n";
        baza<<endl<<endl;
        }
        baza.close();

    }
    else{
        cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
        cout<<"\t\t\t\tPogresan radnik!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
    }
}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~







//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
//                             INTERFACE

void Radnik::interface()
{
    int izbornik_unos;
    char izbor;

start:
do{
        system("CLS");
        system("color 17");


//Izbornik
cout<<endl;
cout<<"\t\t================================================="<<endl;
cout<<"\t\t===             EVIDENCIJA RADNIKA            ==="<<endl;
cout<<"\t\t================================================="<<endl;
cout<<"                                                     "<<endl;
cout<<"\t\t---------------------IZBORNIK--------------------"<<endl;
cout<<"\t\t---                                           ---"<<endl;
cout<<"\t\t---    Odaberite neku od sljedecih opcija     ---"<<endl;
cout<<"\t\t---   1.Unos informacija o radniku firme      ---"<<endl;
cout<<"\t\t---   2.Izmjena informacija o radniku firme   ---"<<endl;
cout<<"\t\t---   3.Ispis informacija o radniku firme     ---"<<endl;
cout<<"\t\t---   4.Pretraga informacija o radniku firme  ---"<<endl;
cout<<"\t\t---   5.Brisanje podataka o radniku firme     ---"<<endl;
cout<<"\t\t---                                           ---"<<endl;
cout<<"\t\t---   0.Izlaz iz programa                     ---"<<endl;
cout<<"\t\t-------------------------------------------------"<<endl;

cout<<"\t\t\t\tUnesite Vas izbor: ";
while(!(cin>>izbornik_unos)){
    cin.clear();
    cin.ignore(1000,'\n');
}

    switch(izbornik_unos){
    case 1:
        system("cls");
        dodajRadnika();
        goto start;
        break;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    case 2:
        system("CLS");
        int izbornik_unos_2;
        char izbor_2;

        do{
        system("CLS");

        start2:
        cout<<endl;
        cout<<"\t--------------------------------IZBORNIK-----------------------------"<<endl;
        cout<<"\t---------------UREDJIVANJE INFROMACIJA O RADNIKU FIRME---------------"<<endl;
        cout<<"\t---                                                               ---"<<endl;
        cout<<"\t---    1. Uredjivanje informacija o zeljenom radniku pomocu ID-a  ---"<<endl;
        cout<<"\t---    2. Uredjivanje informacija o zeljenom radniku pomocu JMBG-a---"<<endl;
        cout<<"\t---                                                               ---"<<endl;
        cout<<"\t---    0. Povratak na prethodni meni                              ---"<<endl;
        cout<<"\t---------------------------------------------------------------------"<<endl;
        cout<<"\t\t\tUnesite Vas izbor: ";

        while(!(cin>>izbornik_unos_2)){
        cin.clear();
        cin.ignore(1000,'\n');
        }

        switch(izbornik_unos_2){

            case 1:
                    system("CLS");
                    int izbornik_unos_2_1;
                    char izbor_2_1;

                    start2_1:
                    do{
                    system("CLS");

                    cout<<endl;
                    cout<<"\t-----------------------------IZBORNIK---------------------------"<<endl;
                    cout<<"\t---------------IZMJENA INFROMACIJA O RADNIKU FIRME--------------"<<endl;
                    cout<<"\t-----------------------POMOCU ID-a RADNIKA----------------------"<<endl;
                    cout<<"\t---                                                          ---"<<endl;
                    cout<<"\t---       1. Izmjena svih informacija o zeljenom radniku     ---"<<endl;
                    cout<<"\t---       2. Izmjena imena zeljenog radnika                  ---"<<endl;
                    cout<<"\t---       3. Izmjena prezimena zeljenog radnika              ---"<<endl;
                    cout<<"\t---       4. Izmjena godista zeljenog radnika                ---"<<endl;
                    cout<<"\t---       5. Izmjena sturcne spreme zeljenog radnika         ---"<<endl;
                    cout<<"\t---       6. Izmjena rodnog lista zeljenog radnika           ---"<<endl;
                    cout<<"\t---       7. Izmjena drzavljanstva zeljenog radnika          ---"<<endl;
                    cout<<"\t---       8. Izmjena CV-a zeljenog radnika                   ---"<<endl;
                    cout<<"\t---       9. Izmjena organizcione jedinice  zeljenog radnika ---"<<endl;
                    cout<<"\t---                                                          ---"<<endl;
                    cout<<"\t---       0. Povratak na prethodni meni                      ---"<<endl;
                    cout<<"\t----------------------------------------------------------------"<<endl;
                    cout<<"\t\t\t\tUnesite Vas izbor: ";

                    while(!(cin>>izbornik_unos_2_1)){
                        cin.clear();
                        cin.ignore(1000,'\n');
                    }

                    switch(izbornik_unos_2_1){

                        case 1:
                            system("CLS");
                            urediRadnikaID();
                            system("PAUSE");
                            break;

                        case 2:
                            system("CLS");
                            urediImeRadnikaID();
                            system("PAUSE");
                            break;

                        case 3:
                            system("CLS");
                            urediPrezimeRadnikaID();
                            system("PAUSE");
                            break;

                        case 4:
                            system("CLS");
                            urediGodisteRadnikaID();
                            system("PAUSE");
                            break;

                        case 5:
                            system("CLS");
                            urediSSpremuRadnikaID();
                            system("PAUSE");
                            break;

                        case 6:
                            system("CLS");
                            urediRListRadnikaID();
                            system("PAUSE");
                            break;

                        case 7:
                            system("CLS");
                            urediDrzavljanstvoRadnikaID();
                            system("PAUSE");
                            break;

                        case 8:
                            system("CLS");
                            urediCVRadnikaID();
                            system("PAUSE");
                            break;

                        case 9:
                            system("CLS");
                            urediOrgJedinicuID();
                            system("PAUSE");
                            break;

                        case 0:
                            system("CLS");
                            goto start2;
                            break;

                        default:
                            cout<<endl<<endl<<endl<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                            cout<<"\t\tGreska! Vas izbor je neispravan, unesite ponovo."<<endl;
                            cout<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
                            system("pause");
                            }
                    }while(izbor_2_1);
                    system("CLS");
                    goto start2_1;
                    break;

            case 2:
                    system("CLS");
                    int izbornik_unos_2_2;
                    char izbor_2_2;

                    start2_2:
                    do{
                    system("CLS");

                    cout<<endl;
                    cout<<"\t-------------------------------IZBORNIK---------------------------"<<endl;
                    cout<<"\t-----------------IZMJENA INFROMACIJA O RADNIKU FIRME--------------"<<endl;
                    cout<<"\t-----------------------POMOCU JMBG-a RADNIKA----------------------"<<endl;
                    cout<<"\t---                                                            ---"<<endl;
                    cout<<"\t---       1. Izmjena svih informacija o zeljenom radniku       ---"<<endl;
                    cout<<"\t---       2. Izmjena imena zeljenog radnika                    ---"<<endl;
                    cout<<"\t---       3. Izmjena prezimena zeljenog radnika                ---"<<endl;
                    cout<<"\t---       4. Izmjena godista zeljenog radnika                  ---"<<endl;
                    cout<<"\t---       5. Izmjena sturcne spreme zeljenog radnika           ---"<<endl;
                    cout<<"\t---       6. Izmjena rodnog lista zeljenog radnika             ---"<<endl;
                    cout<<"\t---       7. Izmjena drzavljanstva zeljenog radnika            ---"<<endl;
                    cout<<"\t---       8. Izmjena CV-a zeljenog radnika                     ---"<<endl;
                    cout<<"\t---       9. Izmjena organizcione jedinice  zeljenog radnika   ---"<<endl;
                    cout<<"\t---                                                            ---"<<endl;
                    cout<<"\t---       0. Povratak na prethodni meni                        ---"<<endl;
                    cout<<"\t------------------------------------------------------------------"<<endl;
                    cout<<"\t\t\t\tUnesite Vas izbor: ";

                    while(!(cin>>izbornik_unos_2_2)){
                        cin.clear();
                        cin.ignore(1000,'\n');
                        }

                    switch(izbornik_unos_2_2){

                    case 1:
                        system("CLS");
                        urediRadnikaJMBG();
                        system("PAUSE");
                        break;

                    case 2:
                        system("CLS");
                        urediImeRadnikaJMBG();
                        system("PAUSE");
                        break;

                    case 3:
                        system("CLS");
                        urediPrezimeRadnikaJMBG();
                        system("PAUSE");
                        break;

                    case 4:
                        system("CLS");
                        urediGodisteRadnikaJMBG();
                        system("PAUSE");
                        break;

                    case 5:
                        system("CLS");
                        urediSSpremuRadnikaJMBG();
                        system("PAUSE");
                        break;

                    case 6:
                        system("CLS");
                        urediRListRadnikaJMBG();
                        system("PAUSE");
                        break;

                    case 7:
                        system("CLS");
                        urediDrzavljanstvoRadnikaJMBG();
                        system("PAUSE");
                        break;

                    case 8:
                        system("CLS");
                        urediCVRadnikaJMBG();
                        system("PAUSE");
                        break;

                    case 9:
                        system("CLS");
                        urediOrgJedinicuJMBG();
                        system("PAUSE");
                        break;

                    case 0:
                        system("CLS");
                        goto start2;
                        break;

                        default:
                            cout<<endl<<endl<<endl<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                            cout<<"\t\tGreska! Vas izbor je neispravan, unesite ponovo."<<endl;
                            cout<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
                            system("pause");
                            }

                    }while(izbor_2_2);
                    system("CLS");
                    goto start2_2;
                    break;


            case 0:
                system("CLS");
                goto start;
                break;

            default:
                cout<<endl<<endl<<endl<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<"\t\tGreska! Vas izbor je neispravan, unesite ponovo."<<endl;
                cout<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
                system("pause");
            }

            }while(izbor_2);
            system("CLS");
            goto start2;
            break;

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    case 3:
        system("CLS");
        int izbornik_unos_3;
        char izbor_3;

        start3:
        do{
        system("CLS");

        cout<<endl;
        cout<<"\t------------------------------IZBORNIK----------------------------"<<endl;
        cout<<"\t----------------ISPIS INFROMACIJA O RADNIKU FIRME-----------------"<<endl;
        cout<<"\t---                                                            ---"<<endl;
        cout<<"\t---       1. Ispis informacija o svim radniku                  ---"<<endl;
        cout<<"\t---       2. Ispis informacija o zeljenom radniku pomocu JMBG-a---"<<endl;
        cout<<"\t---       3. Ispis informacija o zeljenom radniku pomocu ID-a  ---"<<endl;
        cout<<"\t---                                                            ---"<<endl;
        cout<<"\t---       0. Povratak na prethodni meni                        ---"<<endl;
        cout<<"\t------------------------------------------------------------------"<<endl;
        cout<<"\t\t\tUnesite Vas izbor: ";

        while(!(cin>>izbornik_unos_3)){
        cin.clear();
        cin.ignore(1000,'\n');
        }

        switch(izbornik_unos_3){

        case 1:
            system("CLS");
            prikaziSveRadnike();
            system("PAUSE");
            break;

        case 2:
            system("CLS");
            prikaziTrazenogRadnikaJMBG();
            system("PAUSE");
            break;

        case 3:
            system("CLS");
            prikaziTrazenogRadnikaID();
            system("PAUSE");
            break;

        case 0:
            goto start;
            break;

        default:
            cout<<endl<<endl<<endl<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
            cout<<"\t\tGreska! Vas izbor je neispravan, unesite ponovo."<<endl;
            cout<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
            system("pause");
            }

        }while(izbor_3);
        system("CLS");
        goto start3;
        break;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        case 4:
            system("CLS");
            int izbornik_unos_4;
            char izbor_4;

            start4:
            do{
            system("CLS");

            cout<<endl;
            cout<<"\t---------------------------IZBORNIK-------------------------"<<endl;
            cout<<"\t------------PRETRAGA INFROMACIJA O RADNIKU FIRME------------"<<endl;
            cout<<"\t---                                                      ---"<<endl;
            cout<<"\t---       1. Brza pretraga JMBG-a radnika u bazi podataka---"<<endl;
            cout<<"\t---       2. Brza pretraga ID-a radnika u bazi podataka  ---"<<endl;
            cout<<"\t---       3. Pretraga ID-a i JMBG-a radnika              ---"<<endl;
            cout<<"\t---                pomocu imena radnika                  ---"<<endl;
            cout<<"\t---                                                      ---"<<endl;
            cout<<"\t---       0. Povratak na prethodni meni                  ---"<<endl;
            cout<<"\t------------------------------------------------------------"<<endl;
            cout<<"\t\t\tUnesite Vas izbor: ";

            while(!(cin>>izbornik_unos_4)){
            cin.clear();
            cin.ignore(1000,'\n');
            }

            switch(izbornik_unos_4){

            case 1:
                system("CLS");
                pretragaJMBG();
                system("PAUSE");
                break;

            case 2:
                system("CLS");
                pretragaIDR();
                system("PAUSE");
                break;

            case 3:
                system("CLS");
                pretragaImenaR();
                system("PAUSE");
                break;

            case 0:
                system("CLS");
                goto start;
                break;

            default:
                cout<<endl<<endl<<endl<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<"\t\tGreska! Vas izbor je neispravan, unesite ponovo."<<endl;
                cout<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
                system("pause");
                }

            }while(izbor_4);
            system("CLS");
            goto start4;
            break;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
        case 5:
            system("CLS");
            int izbornik_unos_5;
            char izbor_5;

            start5:
            do{
            system("CLS");

            cout<<endl;
            cout<<"\t------------------------------IZBORNIK-----------------------------"<<endl;
            cout<<"\t----------------BRISANJE INFROMACIJA O RADNIKU FIRME----------------"<<endl;
            cout<<"\t---                                                              ---"<<endl;
            cout<<"\t---       1. Brisanje svih informacija o radniku                 ---"<<endl;
            cout<<"\t---       2. Brisanje podataka o odredjenom radniku pomocu ID-a  ---"<<endl;
            cout<<"\t---       3. Brisanje podataka o odredjenom radniku pomocu JMBG-a---"<<endl;
            cout<<"\t---                                                              ---"<<endl;
            cout<<"\t---       0. Povratak na prethodni meni                          ---"<<endl;
            cout<<"\t--------------------------------------------------------------------"<<endl;
            cout<<"\t\t\tUnesite Vas izbor: ";

            while(!(cin>>izbornik_unos_5)){
            cin.clear();
            cin.ignore(1000,'\n');
            }

            switch(izbornik_unos_5){

            case 1:
                system("CLS");
                izbrisiSve();
                system("PAUSE");
                break;

            case 2:
                system("CLS");
                izbrisiRadnikaID();
                system("PAUSE");
                break;

            case 3:
                system("CLS");
                izbrisiRadnikaJMBG();
                system("PAUSE");
                break;

            case 0:
                system("CLS");
                goto start;
                break;

            default:
                cout<<endl<<endl<<endl<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
                cout<<"\t\tGreska! Vas izbor je neispravan, unesite ponovo."<<endl;
                cout<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
                system("pause");
                }

            }while(izbor_5);
            system("CLS");
            goto start5;
            break;
//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
    case 0:
        goto izlaz;
        break;

    default:
        cout<<endl<<endl<<endl<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl;
        cout<<"\t\tGreska! Vas izbor je neispravan, unesite ponovo."<<endl;
        cout<<"\t~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~"<<endl<<endl;
        system("pause");
        goto start;
    }

    }while(izbor);
     izlaz:
     system("CLS");
     system("color 1B");
     cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<"\t\t\t\t     Dovidjenja!"<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;

}

//~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
