#include <iostream> 
#include <ctime>
using namespace std; 

int main(){ 
    
    srand(time(0));

    char hola = 81;

    cout << "Número aleatorio: " << rand()% 10 << endl;

    cout << hola << endl;
  
    return 0; 
}