#include <iostream>
/**
 * Realice un programa para comprobar si un año es bisiesto o no.
 * Si un año es divisible por 4 entonces es bisiesto
 * pero si el año representa el inicio de un siglo como 2000, 1900, 2100
 * entonces debe ser divisible por 400.
 */

using namespace std;

int main()
{
  int year;
  cout << "Inserte su año:";
  cin >> year;
  if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
  {
    cout << "El año " << year << " es bisiesto" << endl;
  }
  else
  {
    cout << "El año " << year << " no es bisiesto" << endl;
  }

  return 0;
}
