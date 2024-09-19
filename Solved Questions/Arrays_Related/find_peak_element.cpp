#include<iostream>
using namespace std;

int findPeak(int arr[], int n){

    int s = 0;
    int end =n-1;

    int mid = s +(e-s)/2;

    while(s<e){

        if(arr[mid] < arr[mid+1]){

            s = mid+1;
        }

        else{

            e = mid;
        }

        mid = s +(e-s)/2;

    }

    return s;
}

