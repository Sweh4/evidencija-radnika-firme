#ifndef RADNIK_H
#define RADNIK_H

class Radnik : public Kompanija{
protected:
    Kompanija rad;
	vector <Kompanija> pod; //vektor za smijestanje
	                        // podataka o radnicima
public:
    Radnik(); //konstruktor
    ~Radnik(); //destruktor

    //funkcije
    int pretraga(int ID);
    int pretragaJMBGa(long long JMBG);
    int pretragaImena(string Ime);


    void dodajRadnika();

	void urediRadnikaID();
	void urediImeRadnikaID();
	void urediPrezimeRadnikaID();
	void urediGodisteRadnikaID();
	void urediSSpremuRadnikaID();
    void urediRListRadnikaID();
    void urediDrzavljanstvoRadnikaID();
    void urediCVRadnikaID();
    void urediOrgJedinicuID();

    void urediRadnikaJMBG();
	void urediImeRadnikaJMBG();
	void urediPrezimeRadnikaJMBG();
	void urediGodisteRadnikaJMBG();
	void urediSSpremuRadnikaJMBG();
    void urediRListRadnikaJMBG();
    void urediDrzavljanstvoRadnikaJMBG();
    void urediCVRadnikaJMBG();
    void urediOrgJedinicuJMBG();

    void izbrisiSve();
    void izbrisiRadnikaID();
    void izbrisiRadnikaJMBG();

	void prikaziTrazenogRadnikaJMBG();
	void prikaziTrazenogRadnikaID();
	void prikaziSveRadnike();
	void pretragaJMBG();
	void pretragaImenaR();
	void pretragaIDR();

	void interface();

};

#endif // RADNIK_H
