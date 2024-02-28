#include <iostream>

using namespace std;
/**
 * Toma dos valores numéricos insertados por el usuario.
 * El programa debe decir si la figura es un cuadrado o un rectángulo
 */
int main()
{
  double alto, ancho;
  cout << "Inserte el valor del alto: ";
  cin >> alto;
  cout << "Inserte el valor del ancho: ";
  cin >> ancho;

  if (alto <= 0 || ancho <= 0)
  {
    cout << "Los valores deben ser mayores a cero." << endl;
    return 0;
  }

  if (alto == ancho)
  {
    cout << "Es un cuadrado" << endl;
  }
  else
  {
    cout << "Es un rectangulo" << endl;
  }

  return 0;
}
