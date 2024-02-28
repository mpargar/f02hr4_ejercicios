#include <iostream>

using namespace std;
/**
 * Una tienda reconocida de ropa hace el 10% de descuento
 * para ventas cuyo valor es mas de 1000usd.
 * Obtén un valor numérico del usuario y calcula cual es el valor que debe pagar.
 */
int main()
{
  const float PROMOCION = 1000;
  float total, descuento;
  cout << "Inserte el valor de la venta total: " << endl
       << "$";
  cin >> total;

  if (total <= 0)
  {
    cout << "Esta no es una venta valida" << endl;
    return 0;
  }

  if (total > PROMOCION)
  {
    descuento = total * 0.1;
    total -= descuento;
    cout << "El descuento es: $" << descuento << endl;
  }
  cout << "El total a pagar es: $" << total << endl;
  return 0;
}
