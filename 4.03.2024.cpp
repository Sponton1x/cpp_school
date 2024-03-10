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
	
	std::cout << "Czy chcesz kontynuowaæ (t/T - tak, inny znak - nie)? ";
    
	} while (std::getchar() == 't' or std::getchar() == 'T');
	
	return 0;
}
