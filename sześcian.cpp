#include <iostream>

int calc(int a) {
	for(int i=1; i<a; i++){
		int wynik = i*i*i; // wynik = 1
		if (wynik == a){
			return wynik;
		}
	}
}

int main() {
	int a;
	std::cout << "Podaj liczbe do sprawdzenia szescianu "; std::cin >> a;
	
	std::cout << calc(a) << std::endl;
	
	return 0;
}
