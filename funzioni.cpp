#include "file.h"
// implementazione delle funizioni richieste
void scrivi(fstream& f, libro l)
{
	
	f.open("dati.dat",ios::app | ios::binary);
	if (!f)
		{
			f.open("dati.dat",ios::out | ios::binary );
			cout << "\n Creato nuovo file\n";
		}
	cout << "\n Inserisci i dati del libro:";
	cout << "\nCodice ISBN 14 cifre\n";
	cin.ignore(80,'\n');
	cin.getline(l.isbn,14);
	cout << "Inserisci il titolo del libro\n";
	cin.getline(l.titolo,50);
	cout << "Inserisci gli autori del libro:\n";
	cin.getline(l.autori,50);
	cout << "Inserisci l'editore del libro\n";
	cin.getline(l.editore,50);
	cout << "Insersici il prezzo del libro:\n";
	cin >> l.prezzo;
	cout << "Inserisci il numero di copie:\n";
	cin >> l.q;
	f.write((char *)&l,sizeof(l));
	f.close();
}
void leggi(fstream& f, libro l)
{
	char sep;
	f.open("dati.dat",ios::in | ios::binary);
	if (!f)
		{
			cout << "\n Errore nell'apertura del file\n";
			return;
		}
		while (f.read((char* )&l,sizeof(l)))
			
		{
			//f >> l.isbn >> sep >> l.titolo >> sep >> l.autori >> sep >> l.prezzo >> sep >> l.q >> sep >> l.editore;
		cout << "Dati dei libri:";
		cout << "Codice ISBB:\t" << l.isbn;
		cout << "\nAutori : \t"<< l.autori;
		cout << "\nTitolo:\t"<< l.titolo;
		cout << "\n Editore:\t"<< l.editore;
		cout << "\n Prezzo: \t"<< l.prezzo;
		}
		f.close();}
