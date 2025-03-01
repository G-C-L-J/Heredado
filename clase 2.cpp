#include <iostream>

using namespace std;

int main() {
    // Determinar si un n�mero es positivo, negativo o neutro
    int numero;
    cout << "Ingrese un n�mero: ";
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
    cout << "\nIngrese un pa�s: ";
    cin >> pais;

    if (pais == "Guatemala") {
        cout << "Yo soy de Guatemala mi pa�s";
    } else {
        cout << "Usted es de " << pais;
    }

    // Determinar si un n�mero es par o impar
    int numeroParImpar;
    cout << "\nIngrese un n�mero: ";
    cin >> numeroParImpar;

    if (numeroParImpar % 2 == 0) {
        cout << "Par";
    } else {
        cout << "Impar";
    }

    // Condiciones con operadores l�gicos (AND y OR)
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

    // C�digo de �rea usando `switch`
    int codigoArea;
    cout << "\nIngrese un c�digo de �rea: ";
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
            cout << "Otro pa�s";
    }
}
