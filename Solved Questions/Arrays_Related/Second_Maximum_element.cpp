#include<iostream>
using namespace std;
#include<limits.h>

int findSecondMAx(int arr[], int n){

    int max = INT_MIN;
    int secondMax = INT_MIN;

    for(int i=0; i<n; i++){

        if(arr[i] > max){

            secondMax = max;
            max = arr[i];
        }

        
        else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i];
        }
    }

    return secondMax;
}

int main(){

    int arr[5] = {100,200,1200,700};
    int n = sizeof(arr)/sizeof(arr[0]);


    int value = findSecondMAx(arr,n);

    cout<<value<<endl;
}