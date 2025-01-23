#include <iostream>
#include <ctime>
using namespace std;

int tailX[100], tailY[100], taill;

struct person{
    char logo;
    int perX;
    int perY;
};

char tablero[10][10] = {
    {'=', '=', '=', '=', '=', '=', '=', '=', '=', '='},
    {'=', '.', '.', '.', '.', '.', '.', '.', '.', '='},
    {'=', '.', '.', '.', '.', '.', '.', '.', '.', '='},
    {'=', '.', '.', '.', '.', '.', '.', '.', '.', '='},
    {'=', '.', '.', '.', '.', '.', '.', '.', '.', '='},
    {'=', '.', '.', '.', '.', '.', '.', '.', '.', '='},
    {'=', '.', '.', '.', '.', '.', '.', '.', '.', '='},
    {'=', '.', '.', '.', '.', '.', '.', '.', '.', '='},
    {'=', '.', '.', '.', '.', '.', '.', '.', '.', '='},
    {'=', '=', '=', '=', '=', '=', '=', '=', '=', '='}        
};

void mostrar(){
    cout << endl;
    for(int x = 0; x < 10; x++){
        for(int y = 0; y < 10; y++){
            cout << tablero[x][y] << " ";
        }
        cout << endl;
    }
    cout << endl;
}

void manzana(){
    srand(time(0));
    tablero[rand() % 8 + 1][rand() % 8 + 1] = 'Q';
}

bool moverDerecha(person &player, int &score){
    if(tablero[player.perY][player.perX + 1] != '='){
        if(tablero[player.perY][player.perX + 1] == 'Q'){
            score += 10;
        };
        tablero[player.perY][player.perX] = '.';
        player.perX++;
        tablero[player.perY][player.perX] = player.logo;
        return 1;
    } else {
        return 0;
    }
}

bool moverIzquierda(person &player, int &score){
    if(tablero[player.perY][player.perX - 1] != '='){
        if(tablero[player.perY][player.perX - 1] == 'Q'){
            score += 10;
        };
        tablero[player.perY][player.perX] = '.';
        player.perX--;
        tablero[player.perY][player.perX] = player.logo;
        return 1;
    } else {
        return 0;
    }
}

bool moverArriba(person &player, int &score){
    if(tablero[player.perY - 1][player.perX] != '='){
        if(tablero[player.perY - 1][player.perX] == 'Q'){
            score += 10;
        };
        tablero[player.perY][player.perX] = '.';
        player.perY--;
        tablero[player.perY][player.perX] = player.logo;
        return 1;
    } else {
        return 0;
    }
}

bool moverAbajo(person &player, int &score){
    if(tablero[player.perY + 1][player.perX] != '='){
        if(tablero[player.perY + 1][player.perX] == 'Q'){
            score += 10;
        };
        tablero[player.perY][player.perX] = '.';
        player.perY++;
        tablero[player.perY][player.perX] = player.logo;
        return 1;
    } else {
        return 0;
    }
}

bool hayManzana(){
    for(int x = 0; x < 10; x++){
        for(int y = 0; y < 10; y++){
            if(tablero[x][y] == 'Q'){
                return 1;
            }
        }
    }
    return 0;
}


int main(){

    person player;
    char mover;
    int score = 0; 

    cout << "Ingrese su personaje: ";
    cin >> player.logo;
    cout << endl;

    player.perX = 1;
    player.perY = 8;
    
    tablero[player.perY][player.perX] = player.logo;

    manzana();

    while(true){

        system("clear");

        mostrar();

        cout << "Su puntaje es de: " << score << endl;

        cout << "Ingrese W, A, S, D para moverse." << endl;
        cin >> mover;

        bool valido = 1;
        
        if (mover == 'W' || mover == 'w'){
            valido = moverArriba(player, score);
        } else if (mover == 'A' || mover == 'a'){
            valido = moverIzquierda(player, score);
        } else if (mover == 'S' || mover == 's'){
            valido = moverAbajo(player, score);
        } else if (mover == 'D' || mover == 'd'){
            valido = moverDerecha(player, score);
        }

        if(valido != 1){
            cout << "Chocaste :(" << endl;
            break;
        }

        if(hayManzana() != 1){
            manzana();
        }

    }

    cout << "Puntaje final: " << score << endl;

    return 0;

}