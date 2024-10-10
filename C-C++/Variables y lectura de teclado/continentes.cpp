#include <iostream>
using namespace std;

int main(){
    int numContinentesFijos = 5;
    int numContinentesAddicionales;
    string nombreContinente;

    cout << "La tierra tiene un minimo de " << numContinentesFijos << " continentes. Dime cuantos continentes mas crees que tiene la Tierra:";
    cin >> numContinentesAddicionales;
    cout << "Dime el nombre de un continente: ";
    cin >> nombreContinente;
    cout << "La Tierra tiene: " << numContinentesFijos+numContinentesAddicionales << " continentes y uno es " << nombreContinente;

    return 0;
}