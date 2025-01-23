#include <iostream>
using namespace std;

int main(){

    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    int n, k;
    cin >> n >> k;

    string words[n];
    int line = 0;

    for(int i = 0; i < n; i++) cin >> words[i];
    cout << words[0];
    line += words[0].size();

    for(int i = 1; i < n; i++){
        if (line + words[i].size() <= k) {
            if (line > 0) {
                cout << " ";
            }
            cout << words[i];
            line += words[i].size();
        } else {
            cout << endl << words[i];
            line = words[i].size();
        }
    }
}