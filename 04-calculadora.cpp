#include <iostream>
/**
 * Realice una calculadora sencilla que reciba dos numeros y el usuario seleccione una operacion.
 * Retorne el resultado de la operación.
 */
using namespace std;

int main()
{
  double operando1, operando2;
  char operador;

  cout << "Inserte el primer operando" << endl
       << "> ";
  cin >> operando1;
  cout << "Inserte el operador: + | - | / | *" << endl
       << "> ";
  cin >> operador;
  cout << "Inserte el segundo operando" << endl
       << "> ";
  cin >> operando2;

  switch (operador)
  {
  case '+':
    cout << operando1 << operador << operando2 << "=" << operando1 + operando2 << endl;
    break;
  case '-':
    cout << operando1 << operador << operando2 << "=" << operando1 - operando2 << endl;
    break;
  case '*':
    cout << operando1 << operador << operando2 << "=" << operando1 * operando2 << endl;
    break;
  case '/':
    cout << operando1 << operador << operando2 << "=" << operando1 / operando2 << endl;
    break;
  default:
    cout << "Operador incorrecto..." << endl;
  }

  return 0;
}
