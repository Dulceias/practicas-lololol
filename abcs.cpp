#include <iostream>
#include <algorithm>
using namespace std;

int main(){
    int moo[7];

    for(int i = 0; i < 7; i++) cin >> moo[i];

    sort(moo, moo + 7);

    for(int i = 0; i < 7; i++){
        for(int j = i + 1; j < 7; j++){
            for(int k = j + 1; k < 7; k++){
                if(moo[i] + moo[j] + moo[k] == moo[6]){
                    cout << moo[i] << " " << moo[j] << " " << moo[k];
                }
            }
        }
    }
}