#include <iostream>

using namespace std;

int q=9; // global variable

void triangle(float a, float h) {
	// local variable
	float result = (a*h)/2;
	
	cout << "Pole powierzchni wynosi " << result << endl;
}

void prostokat(int a, int b) {
	int l_result = 2*a+2*b;
	int p_result = a*b;
	
	cout << "Obwod wynosi " << l_result << endl;
	cout << "Pole wynosi " << p_result << endl;
}

int main() {
	float a;
	float h;
	
	int a_2;
	int b_2;
	
	char znak; // also local variable
	do{
	
	cout << "Podaj dlugosc boku a ";
	cin >> a;
	cout << "Podaj dlugosc wysokosci h ";
	cin >> h;
	
	cout << "Podaj dlugosc boku a prostokata ";
	cin >> a_2;
	cout << "Podaj dlugosc boku b prostokata ";
	cin >> b_2;
	
	triangle(a, h);
	prostokat(a_2, b_2);
	
	cout << "Czy chcesz kontynuowaæ (t/T - tak, inny znak - nie)? ";
    cin >> znak;
    
	} while (znak == 't' or znak == 'T');
	return 0;
}
