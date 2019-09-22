#include<iostream>
#include<cmath>
using namespace std;

int main ()
{
	float a , b;
	cout << "Podaj dlugosc pierwszej przyprostokatnej (cm): ";
	cin >> a;
	cout << "Podaj dlugosc drugiej przyprostokatnej (cm): ";
	cin >> b;
    cout << "Dlugosc przeciwprostokatnej wynosi: " << sqrt(a*a+b*b) << "cm";

}

