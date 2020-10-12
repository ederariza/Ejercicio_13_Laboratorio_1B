
/*
Problema 13. Escriba un programa que reciba un número y calcule la suma de todos los primos
menores que el número ingresado.
Ej: Si se recibe 10 el programa debe imprimir 17.
Nota: la salida del programa debe ser: El resultado de la suma es: 17.
*/

#include <iostream>
using namespace std;

//Prototipo funcion llamada numero primo
bool numeroprimo(int i);

int main(){

    int numero_ingresado;
    int suma_factores_primos = 0;

    cout << "Ingrese un numero: ";
    cin >> numero_ingresado;

     //Ciclo for para hallar los numeros primos menores que el numero
    for (int i = 1; i <= numero_ingresado; i++){

        if (numeroprimo(i))
            suma_factores_primos += i;
    }

    cout << "La suma de los factores primos del numero " << numero_ingresado << " es " << suma_factores_primos << endl;

    return 0;

}

//Funcion numero primo halla los numeros primos
bool numeroprimo(int numero){

    int contador = 0;
    bool primo = 0;

    for (int i=1; i<=numero; i++) {

        if ((numero % i) == 0) {
                contador += 1;

                if ((contador > 2) || (numero == 1)) {
                    primo = false;
                }

                else {

                     if ((contador == 2) && (i == numero)){
                         primo = true;
                     }
                }
        }
    }

    return primo;
}
