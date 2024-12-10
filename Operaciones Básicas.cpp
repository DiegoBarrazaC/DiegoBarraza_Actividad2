#include <iostream>
using namespace std;

int main() {
    float numero1;
    float numero2;
    float suma;
    float resta;
    float multiplicacion;
    float division;

    cout << "Escribe el primer numero: ";
    cin >> numero1;

    cout << "Escribe el segundo numero: ";
    cin >> numero2;

    suma = numero1 + numero2;
    resta = numero1 - numero2;
    multiplicacion = numero1*numero2;
    division = numero1 / numero2;

    cout << "Tu resultado de suma es: " <<suma << endl;
    cout << "Tu resultado de restar es: " <<resta << endl;
    cout << "Tu resultado de multiplicar es: " <<multiplicacion << endl;
    cout << "Tu resultado de dividir es: " <<division<< endl;
    system("pause");
    return 0;
}