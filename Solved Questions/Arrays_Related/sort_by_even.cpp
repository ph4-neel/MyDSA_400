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

int main() {
    int n;
    cin>>n;

    int arr[n];

    for(int i = 0; <n; i++){
        cin>>arr[i];
    }

    
    sortEvenIndexed(arr, size);
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    
    return 0;
}
