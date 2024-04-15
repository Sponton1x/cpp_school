#include <iostream>

int main() {
	int tab[5] = {3, 5, 6, 3, 7}; // jeœli podamy mniej ni¿ zak³adamy => zwróci 0 w puste komórki
	int count;
	int suma = 0;
	
	for(int i=0; i<=4; i++) { // jeœli i podamy wiêksze ni¿ zakres tablicy, to zwróci nam przypadkowe wartoœci z pamiêci RAM.
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
