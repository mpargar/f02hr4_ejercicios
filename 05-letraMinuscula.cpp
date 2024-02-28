#include <iostream>

/**
 * Realice un programa que tome una letra minúscula (a-z) y la convierta a mayúscula (A-Z).
 * Si la letra ya es mayúscula retornarla tal como es.
 */

using namespace std;

int main()
{
  char letra;
  int letraAscii;
  bool esMayuscula, esMinuscula;
  cout << "Inserte una letra: ";
  cin >> letra;
  letraAscii = letra;

  esMayuscula = letraAscii >= 65 && letraAscii <= 90;
  esMinuscula = letraAscii >= 97 && letraAscii <= 122;

  if (esMayuscula)
  {
    cout << letra << endl;
  }
  else if (esMinuscula)
  {
    cout << letra << " --> " << (char)(letraAscii - 32) << endl;
  }
  else
  {
    cout << "Eso no es una letra" << endl;
  }

  return 0;
}
