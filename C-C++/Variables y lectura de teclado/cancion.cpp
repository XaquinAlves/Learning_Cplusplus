#include <iostream>
using namespace std;

int main(){
    string fav, cancion;

    cout << "Dime tu cancion favorita, en minusculas: ";
    getline(cin,cancion);
    if(cancion == "dracukeo el empalador"){
        cout << "lit" << endl;
    }
    else{
        cout << "meh" << endl;
    }

    return 0;
}