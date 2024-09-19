#include <iostream>
using namespace std;


void sortEvenIndexed(int arr[], int size) {
    
    int evenCount = (size + 1) / 2; 
    
    
    int temp[evenCount];
    int index = 0;
    
    for (int i = 0; i < size; i += 2) {
        temp[index++] = arr[i];
    }

    for (int i = 0; i < evenCount - 1; i++) {
        for (int j = 0; j < evenCount - i - 1; j++) {
            if (temp[j] > temp[j + 1]) {
                int t = temp[j];
                temp[j] = temp[j + 1];
                temp[j + 1] = t;
            }
        }
    }
    
    index = 0;
    for (int i = 0; i < size; i += 2) {
        arr[i] = temp[index++];
    }
}


void lastSwap(int arr[], int n){

    int temp = arr[1];
    arr[1] = arr[5];
    arr[5] = temp;

}

int main() {
    int arr[6] = {50,40,10,20,30,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    
    sortEvenIndexed(arr, n);
    lastSwap(arr, n);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
