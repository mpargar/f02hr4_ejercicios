#include <iostream>

/**
 * Realice un programa que tome una letra minúscula (a-z) y la convierta a mayúscula (A-Z).
 * Si la letra ya es mayúscula retornarla tal como es.
 */

using namespace std;

int main()
{
  const int ASCII_LETTER_DISTANCE = 32;
  char letra;
  int letraAscii;
  bool esMayuscula, esMinuscula;
  cout << "Inserte una letra: ";
  cin >> letra;

  letraAscii = letra;

  esMayuscula = letraAscii >= (int)'A' && letraAscii <= (int)'Z';
  esMinuscula = letraAscii >= (int)'a' && letraAscii <= (int)'z';

  if (esMayuscula)
  {
    cout << letra << endl;
  }
  else if (esMinuscula)
  {
    cout << letra << " --> " << (char)(letraAscii - ASCII_LETTER_DISTANCE) << endl;
  }
  else
  {
    cout << "Eso no es una letra" << endl;
  }

  return 0;
}
