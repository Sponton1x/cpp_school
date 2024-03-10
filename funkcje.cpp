#include <iostream>
#include <cstdio>


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
	std::cout << "Suma: " << a+b << std::endl;
}

void FRoznica(int a, int b)
{
	std::cout << "Roznica: " << a-b << std::endl;
}

void FMnozenie(int a, int b)
{
	std::cout << "Mnozenie: " << a*b << std::endl;
}

void FDzielenie(float a, float b)
{
	std::cout << "Dzielenie: " << a/b << std::endl;
}

int main()
{
	setlocale(LC_CTYPE, "Polish");
	
	std::int a;
	std::int b;
	
	std::int choice;
	
	
	std::cout << "Podaj 1 liczbe: "; 
	std::cin >> a;
	std::cout << "Podaj 2 liczbe: "; 
	std::cin >> b;
	
	std::cout << "Podaj dzia³anie \n1. Dodawanie\n2. Odejmowanie\n3. Mno¿enie\n4. Dzielenie\n"; 
	std::cin >> choice;
	
	/*FSuma_void(a, b);
	FRoznica(a, b);
	FMnozenie(a, b);
	FDzielenie(a, b);*/
	
	switch(choice) {
		case 1:
			std::cout << FSuma_int(a, b);
			break;
		case 2:
			std::cout << FRoznica_int(a, b);
			break;
		case 3:
			std::cout << FMnozenie_int(a, b);
			break;
		case 4:
			std::cout << FDzielenie_int(a, b);
			break;
		default:
			std::cout << "Nie podano dzia³ania";
	}
	
	return 0;
}


