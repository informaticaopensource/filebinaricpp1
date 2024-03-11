#include "funzioni.cpp"
using namespace std;
int main ()
{
	fstream f;
	int scelta;
	struct libro rlibro;
	while (true)
	{
	do 
	{
	cout << "\n Bemvemto nel programma di gestione della libreria\n";
	cout << "1- Aggiungi libri\n";
	cout << "2- Stampa Elenco libri\n";
	cout << "3- Uscita dal programma\n";
	cout << "\n Effettua la tua scelta 1-3 \n";
	cin >> scelta;
				if ((scelta<1)||(scelta >3))
						cout << "\n Errore nella scelta ripeti !";
		}	
	while ((scelta<1)||(scelta >3));
	switch (scelta){
		case 1: 
		{
			scrivi(f,rlibro);
			break;
		}
		case 2:
			{
				leggi(f,rlibro);
				break;
			}
		case 3:
		{
			cout << "\n Arrivederci\n";
			return 0;
		}
}}}
