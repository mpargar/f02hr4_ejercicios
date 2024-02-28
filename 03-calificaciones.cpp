#include <iostream>

using namespace std;
/**
 * Una escuela da calificaciones dependiendo en los rangos de la calificación.
 * 0 - 25 F | 25 - 45  E | 45 - 50 D | 50 - 60 C | 60 - 80 B | 80 - 100 A.
 * Confeccione un programa que reciba una calificación y
 * muestre la categoría a la que pertenece (a, b, c, d, e, f)
 */
int main()
{
  int calificacion;
  cout << "Inserte la calificación: ";
  cin >> calificacion;

  cout << "Su calificación ";

  if (calificacion < 0 || calificacion > 100)
  {
    cout << "no es valida." << endl;
  }
  else if (calificacion < 25)
  {
    cout << "es: F" << endl;
  }
  else if (calificacion < 45)
  {
    cout << "es: E" << endl;
  }
  else if (calificacion < 50)
  {
    cout << "es: D" << endl;
  }
  else if (calificacion < 60)
  {
    cout << "es: C" << endl;
  }
  else if (calificacion < 80)
  {
    cout << "es: B" << endl;
  }
  else
  {
    cout << "es: A" << endl;
  }
  return 0;
}
