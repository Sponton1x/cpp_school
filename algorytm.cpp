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

bool calc_3_char_number(int a) {
	int b = a%100; // 55
	int result_1 = a-b; // 500
	int result_2 = result_1/100; // 5
	int result_3 = result_1/10;
	
	std::cout << b << std::endl;
	std::cout << result_1 << std::endl;
	std::cout << result_3 << std::endl;
	
}

int main() {
	int a;
	
	std::cout << "Podaj liczbe ";
	
	std::cin >> a;
	//std::cout << calc(a);
	std::cout << calc_3_char_number(a);
	
	
	return 0;
}
