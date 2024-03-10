#include <iostream>
#include <cstdio>

using namespace std;


// Kiedy int => zwraca liczbê przez return
int FSuma_int(int a, int b)
{
	return a+b;
}

int FRoznica_int(int a, int b)
{
	return a-b;
}

int FMnozenie_int(int a, int b)
{
	return a*b;
}

int FDzielenie_int(int a, int b)
{
	return a/b;
}

void FSuma_void(int a, int b)
{
	cout << "Suma: " << a+b << endl;
}

void FRoznica(int a, int b)
{
	cout << "Roznica: " << a-b << endl;
}

void FMnozenie(int a, int b)
{
	cout << "Mnozenie: " << a*b << endl;
}

void FDzielenie(float a, float b)
{
	cout << "Dzielenie: " << a/b << endl;
}

int main()
{
	setlocale(LC_CTYPE, "Polish");
	
	int a;
	int b;
	
	int choice;
	
	
	cout << "Podaj 1 liczbe: "; cin >> a;
	cout << "Podaj 2 liczbe: "; cin >> b;
	
	
	cout << "Podaj dzia³anie \n1. Dodawanie\n2. Odejmowanie\n3. Mno¿enie\n4. Dzielenie\n"; cin >> choice;
	
	/*FSuma_void(a, b);
	FRoznica(a, b);
	FMnozenie(a, b);
	FDzielenie(a, b);*/
	
	switch(choice) {
		case 1:
			cout << FSuma_int(a, b);
			break;
		case 2:
			cout << FRoznica_int(a, b);
			break;
		case 3:
			cout << FMnozenie_int(a, b);
			break;
		case 4:
			cout << FDzielenie_int(a, b);
			break;
		default:
			cout << "Nie podano dzia³ania";
	}
	
	return 0;
}


