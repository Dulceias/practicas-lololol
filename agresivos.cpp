#include <iostream>
using namespace std;

int main(){
    int N, P;

    cin >> N >> P;

    vector<int> cubic(N);

    for(int i = 0; i < N; i++){
        cin >> cubic[i];
    }

    sort(cubic.begin(), cubic.end());

    int mint = 1, maxs = cubic[N - 1] - cubic[0];
    int maxDist = 0;

    while(mint <= maxs){
        int mid = (maxs + mint) / 2;

        int lastPos = cubic[0], count = 1;

        for(int i = 1; i < N; i++){
            if(cubic[i] - lastPos >= mid){
                lastPos = cubic[i];
                count++;
                if(count == P) break;
            }
        }

        if(count == P){
            maxDist = mid;
            mint = mid + 1;
        } else {
            maxs = mid - 1;
        }

    }

    cout << maxDist;

}