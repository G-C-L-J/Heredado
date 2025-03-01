#include <iostream>

using namespace std;

int main() {
    // Determinar si un número es positivo, negativo o neutro
    int numero;
    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero > 0) {
        cout << "Positivo";
    } else if (numero == 0) {
        cout << "Neutro";
    } else {
        cout << "Negativo";
    }

    // Condicionar un texto
    string pais;
    cout << "\nIngrese un país: ";
    cin >> pais;

    if (pais == "Guatemala") {
        cout << "Yo soy de Guatemala mi país";
    } else {
        cout << "Usted es de " << pais;
    }

    // Determinar si un número es par o impar
    int numeroParImpar;
    cout << "\nIngrese un número: ";
    cin >> numeroParImpar;

    if (numeroParImpar % 2 == 0) {
        cout << "Par";
    } else {
        cout << "Impar";
    }

    // Condiciones con operadores lógicos (AND y OR)
    bool tieneLapiz = true;
    bool tieneLapicero = false;

    if (tieneLapiz && tieneLapicero) {
        cout << "\nIngresa";
    } else {
        cout << "\nNo puede ingresar";
    }

    if (tieneLapiz || tieneLapicero) {
        cout << "\nIngresa";
    } else {
        cout << "\nNo puede ingresar";
    }

    if ((tieneLapiz || tieneLapicero) && tieneCuaderno) {
        cout << "\nIngresa";
    } else {
        cout << "\nNo puede ingresar";
    }

    // Código de área usando `switch`
    int codigoArea;
    cout << "\nIngrese un código de área: ";
    cin >> codigoArea;

    switch (codigoArea) {
        case 502:
            cout << "Guatemala";
            break;
        case 503:
            cout << "El Salvador";
            break;
        case 504:
            cout << "Honduras";
            break;
        case 505:
            cout << "Nicaragua";
            break;
        case 506:
            cout << "Costa Rica";
            break;
        default:
            cout << "Otro país";
    }
}
