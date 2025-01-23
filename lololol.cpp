#include <iostream>
using namespace std;

void selection(int arr[], int n){

    for(int i = 0; i < n; i++){
        int min = i;
        for(int j = i + 1; j < n; j++){
            if(arr[min] > arr[j]){
                min = j;
            }
        }
        int temp = arr[min];
        arr[min] = arr[i];
        arr[i] = temp;

        if(i == 0 || arr[i] != arr[i - 1]){
            cout << arr[i] << " ";
        }
    }
    

}

int main(){

    int arr[] = {4, 7, 11, 4, 9, 5, 11, 7, 3, 5};

    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    } cout << endl;

    selection(arr, n);

    return 0;
}