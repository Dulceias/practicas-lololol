#include <iostream>
#include <string>
using namespace std;

int main(){
    string record;
    cin >> record;

    int countA = 0, countB = 0;

    for(int i = 0; i < record.size(); i += 2){
        if(record[i] == 'A'){
            countA += record[i + 1] - '0';
        } else if (record[i] == 'B'){
            countB += record[i + 1] - '0';
        }
    }

    if(countA >= 11 && countA - countB >= 2){
        cout << "A";
    } else if(countB >= 11 && countB - countA >= 2){
        cout << "B";
    }
}