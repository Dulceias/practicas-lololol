#include <iostream>
using namespace std;


struct Player{
    char Emblema;
    int Posicion_X;
    int Posicion_Y;
};

char Mapa[10][10] = {
    {'=', '=', '=', '=', '=', '=', '=', '=', '=', '='},
    {'=', '.', '.', 'X', '=', '.', '.', '.', 'X', '='},
    {'=', 'X', '=', '=', '=', '.', '.', '=', '.', '='},
    {'=', '.', '.', '.', '.', '.', '.', '.', '.', '='},
    {'=', '=', '=', '.', '=', 'X', '=', '=', '=', '='},
    {'=', 'X', '=', '.', '.', '.', '.', '.', '.', '='},
    {'=', '.', '=', '=', '=', '=', '.', '.', '.', '='},
    {'=', '.', '.', '.', '.', '.', '.', '=', '.', '='},
    {'=', '.', '.', '=', '.', 'X', '.', '.', 'X', '='},
    {'=', '=', '=', '=', '=', '=', '=', '=', '=', '='}
};


void MostrarMapa(){
    cout << endl;
    for(int x = 0; x < 10; x++){
        for(int y = 0; y < 10; y++){
            cout << Mapa[x][y] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void moverPersonaje(Player& pj, int Nueva_X, int Nueva_Y){

    if(Mapa[Nueva_Y][Nueva_X] != '='){
        Mapa[pj.Posicion_Y][pj.Posicion_X] = '.';
        pj.Posicion_Y = Nueva_Y;
        pj.Posicion_X = Nueva_X;
        Mapa[Nueva_Y][Nueva_X] = pj.Emblema;
    }


}




void moverHastaLaDerecha(Player& pj){
    if(Mapa[pj.Posicion_Y][pj.Posicion_X + 1] != '='){
        Mapa[pj.Posicion_Y][pj.Posicion_X] = '.';
        pj.Posicion_X += 1;
        Mapa[pj.Posicion_Y][pj.Posicion_X] = pj.Emblema;

        moverHastaLaDerecha(pj);
    }
}


void moverHastaLaIzquierda(Player& pj){
    if(Mapa[pj.Posicion_Y][pj.Posicion_X - 1] != '='){
        Mapa[pj.Posicion_Y][pj.Posicion_X] = '.';
        pj.Posicion_X -= 1;
        Mapa[pj.Posicion_Y][pj.Posicion_X] = pj.Emblema;

        moverHastaLaIzquierda(pj);
    }
}


void moverHastaArriba(Player& pj){
    if(Mapa[pj.Posicion_Y - 1][pj.Posicion_X] != '='){
        Mapa[pj.Posicion_Y][pj.Posicion_X] = '.';
        pj.Posicion_Y -= 1;
        Mapa[pj.Posicion_Y][pj.Posicion_X] = pj.Emblema;

        moverHastaArriba(pj);
    }
}



void moverHastaAbajo(Player& pj){
    if(Mapa[pj.Posicion_Y + 1][pj.Posicion_X] != '='){
        Mapa[pj.Posicion_Y][pj.Posicion_X] = '.';
        pj.Posicion_Y += 1;
        Mapa[pj.Posicion_Y][pj.Posicion_X] = pj.Emblema;

        moverHastaAbajo(pj);
    }
}



bool RevisarSiHay_X(){
    for(int x = 0; x < 10; x++){
        for(int y = 0; y < 10; y++){
           if(Mapa[x][y] == 'X'){
                return true;
           }
        }
    }
    return false;
}



int main() {

    Player Francisco;
    Francisco.Emblema = 'F';
    Francisco.Posicion_X = 1;
    Francisco.Posicion_Y = 8;

    Mapa[Francisco.Posicion_Y][Francisco.Posicion_X] = Francisco.Emblema;

    while(RevisarSiHay_X()){

        system("cls");
        MostrarMapa();

        cout << "Captura todas las X" << endl;
        cout << "Ingresa A - W - S - D para elejir la direccion de movimiento" << endl;

        char direccion;
        cin >> direccion;

        if(direccion == 'D' || direccion == 'd') moverHastaLaDerecha(Francisco);
        else if(direccion == 'A' || direccion == 'a') moverHastaLaIzquierda(Francisco);
        else if(direccion == 'W' || direccion == 'w') moverHastaArriba(Francisco);
        else if(direccion == 'S' || direccion == 's') moverHastaAbajo(Francisco);

    }

    system("cls");
    cout << "Felicidades completaste el juego :D" << endl;
    return 0;
}
