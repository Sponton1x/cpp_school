#include <iostream>
#include <cstdio>

std::string calc_2_char_number(int a) {
	int b = a%10; // 5	
	int result_1 = a-b; // 50
	
	int result_2 = result_1/10; //5
	
	if (result_2 == b) {
		return "Liczby sa takie same";
	}
	else {
		return "Liczby nie sa takie same";
	}
}

bool is_all_numer_same(int liczba) {
    int cyfra = liczba % 10; // Pobieramy ostatnią cyfrę
    liczba /= 10; // Usuwamy ostatnią cyfrę

    while (liczba > 0) {
        if (liczba % 10 != cyfra) // Jeśli cyfra się zmienia, to liczba nie ma wszystkich cyfr jednakowych
            return false;
        liczba /= 10; // Przechodzimy do kolejnej cyfry
    }

    return true; // Jeśli doszliśmy do tego miejsca, to wszystkie cyfry były takie same
}

int main() {
	int a;
	int liczba;
	
	std::cout << "Podaj liczbe "; std::cin >> a;
	if (a >= 100) {
		std::cerr << "Podana liczba nie jest dwucyfrowa" << std::endl;
	}
	else {
		std::cout << calc_3_char_number(a);
	}

	if (liczba < 100 || liczba > 999) {
		std::cerr << "Podana liczba nie jest trzycyfrowa." << std::endl;
	}
	else {
		if (is_all_numer_same(liczba)) {
			std::cout << "Wprowadzona liczba ma wszystkie cyfry takie same." << std::endl;
		}
		else {
			std::cout << "Wprowadzona liczba nie ma wszystkich cyfr takich samych." << std::endl;
		}
	}
	
	return 0;
}
