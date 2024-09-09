#include<iostream>
using namespace std;


int findPair(int arr[], int n,int target){


    for(int i=0; i<n; i++){

        for(int j = i+1; j<n; j++){

            if(arr[i] + arr[j] == target){

                return arr[i], arr[j];
            }
        }
    }
}