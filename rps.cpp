#include <bits/stdc++.h>
using namespace std;

char Choice(){
    srand(time(NULL));
    int num = (rand() % 3) + 1;

    if(num == 1){
        return 'r';
    } else if(num == 2){
        return 'p';
    } else {
        return 's';
    }
}

int main(){

    char choice = Choice();

    char userChoice;

    while(userChoice != 'r' && userChoice != 'p' && userChoice != 's'){
        cin >> userChoice;
    }
    
    if(userChoice == choice){
        cout << userChoice << " vs " << choice << endl;
        cout << "Draw";
    } else if(userChoice == 'r' && choice == 's'){
        cout << userChoice << " vs " << choice << endl;
        cout << "You won";
    } else if(userChoice == 'r' && choice == 'p'){
        cout << userChoice << " vs " << choice << endl;
        cout << "You lost";
    } else if(userChoice == 'p' && choice == 'r'){
        cout << userChoice << " vs " << choice << endl;
        cout << "You won";
    } else if(userChoice == 'p' && choice == 's'){
        cout << userChoice << " vs " << choice << endl;
        cout << "You lost";
    } else if(userChoice == 's' && choice == 'p'){
        cout << userChoice << " vs " << choice << endl;
        cout << "You won";
    } else if(userChoice == 's' && choice == 'r'){
        cout << "You lost";
    }

}