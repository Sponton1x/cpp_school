#include<iostream>
#include<ctime>
#include<cstdlib>
#include<conio.h>


int main() {
	int wynik;
	int tab[15];
	int suma;
	
	do {
		
	srand(time(0));
		
	for(int i=0; i<15; i++) {
		tab[i] = (rand()%100) + 1;
		std::cout << tab[i] << "\t"; 
		if (tab[i] % 2 == 0 and tab[i] > 50 and tab[i] < 60) {
			suma += tab[i];
		}
	}

	std::cout << "Suma: " << suma << std::endl;
		
	std::cout << "Czy chcesz kontynuowac? t/n\n";
	} while(getch()==116);
}
