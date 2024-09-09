#include<iostream>
using namespace std;


void SwapAlter(int arr[], int n){

    for(int i=0; i<n; i+2){

        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;

    }
}

printArray(int arr[], int n){

    for(int i=0; i<n; i++){

        cout<<""<<arr[i];
    }
}


int main(){


    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    SwapAlter(arr, n);
    printArray(arr, n);
}