#include <iostream>

int main() {
	int tab[5] = {3, 5, 6, 3, 7}; // je�li podamy mniej ni� zak�adamy => zwr�ci 0 w puste kom�rki
	int count;
	int suma = 0;
	
	for(int i=0; i<=4; i++) { // je�li i podamy wi�ksze ni� zakres tablicy, to zwr�ci nam przypadkowe warto�ci z pami�ci RAM.
		if (tab[i] % 2 == 0) {
			count += 1;
		}
		suma += tab[i];	
	}
	if (count > 0 ) {
		std::cout << "Jest " << count << " liczb parzystych" << std::endl;
	}
	else {
		std::cout << "Nie ma liczb parzystych" << std::endl;
	}
	std::cout << "Suma tablicy wynosi " << suma << std::endl;
	
	
	return 0;
}
