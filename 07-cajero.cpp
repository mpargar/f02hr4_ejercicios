#include <iostream>

/**
 * Confecione un programa que simule un cajero automatico.
 * El usuario deberá insertar su NIP
 * * Si el NIP es incorrecto debera mostrar un error y terminar el programa.
 * * Si el NIP es correcto debera mostrar un menu con la siguientes opciones
 *    * Retirar dinero
 *      * Esta opcion recibira un valor de entrada
 *    * Finalizarlo mostrara el saldo restante
 * * Si el valor es mayor al saldo, mostraras un error y finalizaras el programa.- Si el valor es mayor al saldo, mostraras un error y finalizaras el programa.
 *  * Consultar saldo
 *   * Mostraras el saldo actual.
 * * Depositar dinero
 *  * Esta opcion recibira un valor de entrada
 *  * Mostraras el saldo despues del deposito
 * Condiciones:
 * * El nip del usuario sera 1234
 * * El dinero en la cuenta del usuario sera de 9999 mxn
 */

using namespace std;

const int NIP = 1234;

int main()
{
  float saldoInicial = 9999;
  int nip;
  char opcion;
  float entradaOperacion = 0;
  cout << "######################" << endl;
  cout << "# Cajero Automático #" << endl;
  cout << "####################" << endl
       << endl
       << endl;
  cout << "Inserte su nip" << endl
       << "> ";
  cin >> nip;

  if (nip != NIP)
  {
    cout << "NIP incorrecto" << endl;
    return 0;
  }

  cout << "Bienvenido!" << endl;
  cout << "Seleccione una opción" << endl;
  cout << "a. Retirar dinero" << endl;
  cout << "b. Consultar saldo" << endl;
  cout << "c. Depositar dinero" << endl;
  cout << "d. Finalizar" << endl;
  cout << "> ";
  cin >> opcion;

  switch (opcion)
  {
  case 'a':
    cout << "Inserte la cantidad a retirar" << endl
         << "> ";
    cin >> entradaOperacion;
    if (entradaOperacion > saldoInicial)
    {
      cout << "Saldo insuficiente" << endl;
      break;
    }
    else if (entradaOperacion <= 0)
    {
      cout << "Cantidad incorrecta" << endl;
      break;
    }
    saldoInicial -= entradaOperacion;
    cout << "Retiro exitoso" << endl
         << "Su saldo es: " << saldoInicial << endl;
    break;
  case 'b':
    cout << "Su saldo es: " << saldoInicial << endl;
    break;
  case 'c':
    cout << "Inserte la cantidad a depositar" << endl
         << "> ";
    cin >> entradaOperacion;
    if (entradaOperacion <= 0)
    {
      cout << "Cantidad incorrecta" << endl;
      break;
    }
    saldoInicial += entradaOperacion;
    cout << "Deposito exitoso" << endl
         << "Su saldo es: " << saldoInicial << endl;
    break;
  case 'd':
    cout << "Gracias por usar el cajero" << endl;
    break;
  default:
    cout << "Opción incorrecta" << endl;
  }
  return 0;
}
