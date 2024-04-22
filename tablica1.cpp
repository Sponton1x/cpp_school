#include<iostream>
#include<ctime>
#include<cstdlib>
#include<conio.h>

int main() {
	int tab[15];
	int nums;
	int suma_p;
	int suma_np;
	
	
	std::cout << "Podaj zakres liczb psudolosowych : 1-";
	std::cin >> nums;
	
	do {
		srand(time(0)); // inicjalizacja generatora liczb pseudolosowych
		
		for(int i=0; i<15; i++) {
			tab[i] = (rand()%nums) + 1; // wywołanie generatora
			std::cout << tab[i] << "\t"; 
		}
		
		for(int i=0; i<15; i++){
			if (tab[i] % 2 == 0) {
				suma_p += tab[i];
			}
			else {
				suma_np += tab[i];
			}
		}
		std::cout << "Suma parzyste " << suma_p << std::endl;
		std::cout << "Suma nieparzyste " << suma_np << std::endl;		
		
	std::cout << "Czy chcesz kontynuowac? t/n\n";
	} while(getch()==116);
	
	return 0;
}
