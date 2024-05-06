#include<iostream>
#include<ctime>
#include<cstdlib>
#include<conio.h>


int main() {
	int wynik;
	int tab[15];
	int liczba = 0;
	
	do {
		
	srand(time(0));
		
	for(int i=0; i<15; i++) {
		tab[i] = (rand()%100) + 1;
		std::cout << tab[i] << "\t"; 
		if (tab[i] > liczba) {
			liczba = tab[i];
		}
	}

	std::cout << "Suma: " << liczba << std::endl;
		
	std::cout << "Czy chcesz kontynuowac? t/n\n";
	} while(getch()==116);
}
