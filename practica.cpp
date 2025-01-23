#include <iostream>
using namespace std;

int main() {
    
    /* **** STRINGS ****
    
    string hola = "hola k tal como estas ";

    hola += "tyo muy bien y tu";

    cout << hola << endl << endl;

    cout << hola.size() << endl;
    cout << hola.empty();

    for (int i = 0; i < hola.size(); i++){
        cout << hola[i];
    } cout << endl;

    for(char& saludo : hola){
        cout << saludo;
    } */

    /* **** STRUCTS ****
    struct Familia {
        string nombre;
        int edad;
        float altura;
    };

    Familia Mama = {"María", 28, 1.69};
    Familia Papa = {"Carlos", 29, 1.80};
    Familia Hijo = {"Alex", 5, 0.80};
    Familia Hija = {"Hanna", 3, 0.40};

    cout << "La mamá se llama: " << Mama.nombre << endl;
    cout << "El papá tiene: " << Papa.edad << " años" << endl;
    cout << "El hijo se llama: " << Hijo.nombre << ". Y tiene " << Hijo.edad << " años" << endl;
    cout << "La hija se llama: " << Hija.nombre << ". Y tiene " << Hija.edad << " años" << endl; 
    */


    enum Color{
        Rojo,
        Verde,
        Azul,
        Amarillo,
    };

    Color colorFavorito = Azul;

    cout << colorFavorito << endl;
    cout << Color::Verde << endl;

    return 0;
}
