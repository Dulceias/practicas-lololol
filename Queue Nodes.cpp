#include <iostream>
using namespace std;

struct Node{
    int dato;
    Node *next;
};

struct Queue{
    Node *frente;
    Node *atras;
};

Queue myQueue; //Declaración de la estructura de cola

//Prototipos de funciones que se utilizaran
void initialize();
bool empty();
void push(int n);
void pop();
void queueFromZero();

int main(){
    initialize(); //Funciones fuera de funcion main
    queueFromZero();
    return 0;
}

//Funcion que inicializa los punteros
void initialize(){
    myQueue.atras = NULL;
    myQueue.frente = NULL;
}

// Funcion que invoca funciones de la cola
void queueFromZero(){
    // Insertamos datos al final de la cola
    push(5);
    push(3);
    push(1);
    push(4);

    // Eliminamos los datos del frente de la cola
    while(empty())
        pop();
}

bool empty(){ //verificamos que la cola este vacia
    return myQueue.frente;
}

void push(int n){
    Node *newNode = new Node(); // Creamos espacio en memoria
    newNode -> dato = n; // LLenamos el nodo con el dato
    newNode -> next = NULL; 

    if(myQueue.frente == NULL)
       myQueue.frente = newNode; 
    else
        (myQueue.atras) -> next = newNode; 
    
    myQueue.atras = newNode;
    cout << "El dato: " <<  myQueue.atras->dato << " a sido agregado a la cola correctamente"<< endl;
}

void pop(){
    struct Node *aux;
    aux = myQueue.frente;
    myQueue.frente =(myQueue.frente)->next;
    cout << "Dato: " <<  aux->dato <<  " fue eliminado exitosamente \n";
    delete(aux); 
}
