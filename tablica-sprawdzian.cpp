#include<iostream>
#include<ctime>
#include<cstdlib>
#include<conio.h>


int main() {
	int tab[15];
	
	do {
	system("cls");
	
	srand(time(0));
		
	for(int i=0; i<15; i++) {
		tab[i] = (rand()%20) + 1;
		std::cout << tab[i] << "\t"; 
	}
	
	for (int i=0; i<14; i++) {
		if (tab[i] == tab[i+1]) {
			std::cout << tab[i] << std::endl;
		}
	}
		
	std::cout << "Czy chcesz kontynuowac? t/n\n";
	} while(getch()==116);
}
