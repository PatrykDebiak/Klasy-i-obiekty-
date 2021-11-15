#include <iostream>
#include <string>
#include <fstream>
using namespace std;
fstream plik;

class Uczen{
	public:
		string imie, nazwisko, klasa;
		double jp, m, f; 
		double srednia;
		void metryczka(){
			cout<<"++++++++++++++++++++++++++++\n";
			cout<<"+                          +";
			cout<<"\n+\tPatryk Debiak      +\n+                          +\n";
			cout<<"+\t\t3Cg1       +\n";
			cout<<"+                          +\n";
			cout<<"++++++++++++++++++++++++++++\n\n";
		}
		void dodajUcznia(){
			cout<<"Podaj imie: ";					cin>>imie;
			cout<<"Podaj nazwisko: ";				cin>>nazwisko;
			cout<<"Podaj klase: ";				cin>>klasa;
			cout<<"\nPodaj ocene z polskiego: ";		cin>>jp;
			cout<<"\nPodaj ocene z matematyki: ";	cin>>m;
			cout<<"\nPodaj ocene z fizyki: ";		cin>>f;
		}
		void wyswietlDane(){
			cout<<"Imie ucznia: "<<imie<<endl;
			cout<<"Nazwisko Ucznia: "<<nazwisko<<endl;
			cout<<"Klasa ucznia: "<<klasa<<endl;
		}
		void wyswietlOceny(){
			cout<<"Ocena ucznia "<<imie<<" "<<nazwisko<<" z jezyka polskiego: "<<jp<<endl;
			cout<<"Ocena ucznia "<<imie<<" "<<nazwisko<<" z matematyki: "<<m<<endl;
			cout<<"Ocena ucznia "<<imie<<" "<<nazwisko<<" z fizyki: "<<f<<endl;
		}
		double obliczSrednia(){
			srednia = (jp+m+f)/3;
			return (jp+m+f)/3;
		}
};
void porownajSrednie(double x,double y){
	if(x>y){
		cout<<"srednia pierwszego ucznia jest wieksza o "<<x-y<<endl;
	}
	else if(x<y){
		cout<<"srednia drugiego ucznia jest wieksza o "<<y-x<<endl;
	}
	
}
int main() {
	Uczen u1;
	u1.metryczka();
	u1.dodajUcznia();
//	u1.wyswietlDane();
//	u1.wyswietlOceny();	
	u1.obliczSrednia();
	Uczen u2;
	u2.dodajUcznia();
//	u2.wyswietlDane();
//	u2.wyswietlOceny();
	u2.obliczSrednia();

	
	
	
	
	porownajSrednie(u1.srednia, u2.srednia);
	
	plik.open("uczniowie.txt", ios::out);
	plik<<"Imie ucznia: "<<u1.imie<<endl;
	plik<<"Nazwisko Ucznia: "<<u1.nazwisko<<endl;
	plik<<"Klasa ucznia: "<<u1.klasa<<endl<<endl;
	plik<<"Imie ucznia: "<<u2.imie<<endl;
	plik<<"Nazwisko Ucznia: "<<u2.nazwisko<<endl;
	plik<<"Klasa ucznia: "<<u2.klasa<<endl<<endl;
	plik.close();
	return 0;
}
