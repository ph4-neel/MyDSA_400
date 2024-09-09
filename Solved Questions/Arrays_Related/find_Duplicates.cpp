#include<iostream>
using namespace std;

int findDuplicates(int arr[], int n){

    int ans = 0;

    for(int i=0; i<n; i++){

        ans = ans^arr[i];
    }

    for(int i=0; i<n; i++){

        ans = ans^i;
    }

    return ans;
}



int main(){

    int arr[] = {1,2,3,4,4};

    int n = sizeof(arr)/sizeof(arr[0]);

    int value = findDuplicates(arr,n);

    cout<<value;
}