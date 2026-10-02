#include <iostream>
using namespace std;

int main() {
    double a, b, c, mayor;

    cout << "Programa para encontrar el numero mayor\n\n";

    cout << "Ingresa el primer numero: ";
    cin >> a;

    cout << "Ingresa el segundo numero: ";
    cin >> b;

    cout << "Ingresa el tercer numero: ";
    cin >> c;

    if (a > b && a > c) {
        mayor = a;
    }
    else if (b > a && b > c) {
        mayor = b;
    }
    else if (c > a && c > b) {
        mayor = c;
    }
    else {
        // Hay un empate, asi que usamos >=
        if (a >= b && a >= c) {
            mayor = a;
        }
        else if (b >= a && b >= c) {
            mayor = b;
        }
        else {
            mayor = c;
        }
    }

    cout << "\nEl numero mayor es: " << mayor << endl;

    return 0;
}