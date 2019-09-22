#include<iostream>
using namespace std;

int main ()
{
	float l , km , zl, wynik;
	int ilosc;
	cout << "Podaj koszt jednego litra paliwa: ";
	cin >> zl;
	cout << "Podaj ilosc spalanego paliwa na 100km: ";
	cin >> l;
	cout << "Podaj dlugosc trasy w km: ";
	cin >> km;
	cout << "Podaj ilosc osob uczestniczacych w wycieczce: ";
	cin >> ilosc;
	wynik =  (zl*km*l/100)/ilosc;
	cout << "Calkowity koszt wycieczki wynosi: " << wynik <<"zl";
	
	
}
