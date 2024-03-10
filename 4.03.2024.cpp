#include <iostream>
#include <cstdio> // getchar() funcation  to read char from input stream.


void void_suma(int a, int b)
{
	std::cout << "Suma " << a+b << std::endl;
}


int int_suma(int a, int b)
{
	return a+b;
}

int int_roznica(int a, int b) {
	return a-b;
}

int int_mnozenie(int a, int b) {
	return a*b;
}

int int_dzielenie(int a, int b) {
	if (b != O)
	{
		std::cout << "Podana liczba b jest 0. Nie można dzielić przez 0! Jedyneczka z matmy :)" << std::endl;
		return 0;
	}
	else
	{
		return a/b;
	}
}

int main() 
{
	
	int a;
	int b;
	
	setlocale(LC_CTYPE, "Polish");
	
	do 
	{

	std::cout << "Podaj liczbe a ";
	std::cin >> a;
	
	std::cout << "Podaj liczbe b ";
	std::cin >> b;
		
	void_suma(a, b);
	
	std::cout << "Suma " << int_suma(a, b) << std::endl;
	std::cout << "Różnica " << int_roznica(a, b) << std::endl;
	std::cout << "Mnożenie " << int_mnozenie(a, b) << std::endl;
	std::cout << "Dzielenie " << int_dzielenie(a, b) << std::endl;
		
	std::cout << "Czy chcesz kontynuowaæ (t/T - tak, inny znak - nie)? ";
    
	} while (std::getchar() == 't' or std::getchar() == 'T');
	
	return 0;
}
