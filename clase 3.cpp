#include <iostream>
#include <string>

using namespace std;

int main() {
  // Declarar variables para las notas
  double n1, n2, n3;

  // Pedir al usuario que ingrese las notas
  cout << "Ingrese nota 1: ";
  cin >> n1;

  cout << "Ingrese nota 2: ";
  cin >> n2;

  cout << "Ingrese nota 3: ";
  cin >> n3;

  // Calcular el promedio
  double promedio = (n1 + n2 + n3) / 3;

  // Declarar una variable para el mensaje de aprobado/reprobado
  string mensaje;

  // Usar un operador ternario para determinar si el estudiante aprobó o reprobó
  mensaje = (promedio >= 61) ? "aprobado" : "reprobado";

  // Mostrar el resultado
  cout << "Su promedio es de " << promedio << ", por lo tanto " << mensaje << endl;

  return 0;
}
