#ifndef KOMPANIJA_H
#define KOMPANIJA_H
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>
#include <fstream>

using namespace std;

class Kompanija{

private:

    int ID;

    string Ime;
    string Prezime;
	long long JMBG;
	int Godiste;

    //dokumentacija
    string s_sprema;
    string rodni_list;
    string drzavljanstvo;
    string CV;

    //organizaciona jedinica
    string direktor;
    string menadzer;
    string marketar;
    string kasir;
    string prodavac;
    string cistac;


public:
    Kompanija();
    ~Kompanija();

    void SetID(int id);

    void SetIme(string ime);
    void SetPrezime(string prezime);
	void SetJMBG(long long jmbg);
	void SetGodiste(int godiste);

	int GetID();

    string GetIme();
	string GetPrezime();
	long long GetJMBG();
	int GetGodiste();

    //dokumentacija
    //set
    void SetStrucnaSprema(string s_sprema);
    void SetRodniList(string rodni_list);
    void SetDrzavljanstvo(string drzavljanstvo);
    void SetCV(string CV);

    //get
    string GetStrucnaSprema();
    string GetRodniList();
    string GetDrzavljanstvo();
    string GetCV();

    //org jedinica
    //set
    void SetDirektor(string direktor);
    void SetMenadzer(string menadzer);
    void SetMarketar(string marketar);
    void SetKasir(string kasir);
    void SetProdavac(string prodavac);
    void SetCistac(string cistac);

    //get
    string GetDirektor();
    string GetMenadzer();
    string GetMarketar();
    string GetKasir();
    string GetProdavac();
    string GetCistac();

    void prikaziInfo();
};

#endif // KOMPANIJA_H
