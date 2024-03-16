#include <iostream>

// Return true when number is even, using modulo.
bool is_even_case_1(int a)
{
  return a%2==0;
}

// Return bool value, using division.
bool is_even_case_2(int a)
{
  return a/2==0;
}

// Return bool value, using bitwaise AND. Check last bite from number. If is 0, then number is even. Else is not even.
bool is_even_case_3(int number)
{
    return (number & 1) == 0;
}

int main()
{
  int number;

  do
  {
    std::cout << "Enter a number to check: ";
    std::cin >> number;

    std::cout << "Case 1; Using modulo; 0 - false; 1 - true: " << is_even_case_1(number) << std::endl;
    std::cout << "Case 2: Using division; 0 - true; other value - false " << is_even_case_2(number) << std::endl;
    std::cout << "Case 3: Using bitwaise AND; 0 - false; 1 - true:  " << is_even_case_3(number) << std::endl;


    std::cout << "Would you like to countinue? " << std::endl;

  } while (std::getchar() == 't' or std::getchar() == 'y');

  return 0;
}
