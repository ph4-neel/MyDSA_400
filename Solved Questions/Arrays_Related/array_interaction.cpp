#include<iostream>
using namespace std;
#include<limits.h>


int findInteraction(int arr1[],int arr2[], int n, int m){


    for(int i=0; i<n; i++){

        int element = arr1[i];

        for(int j=0; j<m; j++){

            if(element==arr2[j]){

                return element;
                arr2[j] = INT_MIN;
                break;
            }
        }
    }


    return -1;


}