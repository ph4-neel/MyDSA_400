#include<iostream>
using namespace std;


void moveZeros(int arr[], int n){

    int i = 0;

    for(int j =0; j<n; j++){
        if(arr[j] != 0){
            int temp = arr[j];
            arr[j] = arr[i];
            arr[i] = temp;
            i++;
        }
    }
}