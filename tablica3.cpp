#include<iostream>
#include<ctime>
#include<cstdlib>
#include<conio.h>


int array(){
	int tab[10];
	int nums = 100;
	
	srand(time(0));
	
	
	for(int i=0; i<=10; i++){
		int liczba = (rand()%nums);
		
		while(liczba % 2 == 0) {
			tab[i] = liczba;
		}
	}
	
	std::cout << tab;
}

int main() {
	
	array();
	
	return 0;
}
