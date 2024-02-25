#include <iostream>

int factorial(int a)
  {
  if (a==0 || a==1) {
    return 1;
  }
  else
  {
    return a * factorial(a-1); // rekurencja - wywołanie funkcji w funkcji
  }
}

int main() {
    int a;
    char znak;

    do {
        std::cout << "Podaj liczbe do obliczenia silni: ";
        std::cin >> a;

        if (a <= 1) {
            std::cout << "Nie można obliczyc silni dla a <= 1.";
            return 1;
        } else {
            std::cout << "Silnia z " << a << " wynosi " << factorial(a) << std::endl;
        }

        std::cout << "Czy chcesz kontynuować (t/T - tak, inny znak - nie)? ";
        std::cin >> znak;

    } while (znak == 't' or znak == 'T');

    return 0;
}
