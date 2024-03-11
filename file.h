#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
// modello di dati;
struct libro 
{
	char isbn[14];
	char titolo[50];
	float prezzo;
	int q;
	char autori[50];
	char editore[50];
};
void scrivi(fstream &f, struct libro l);
void leggi(fstream &f,struct libro l);

