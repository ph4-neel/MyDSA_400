#include<iostream>
using namespace std;


int findUnique(int arr[], int n){

    int ans;

    for(int i=0; i<n; i++){

        ans = ans ^ arr[i];
    }

    return ans;
}


int main(){

    int arr[] = {1,2,3,4};
    int n = sizeof(arr)/sizeof(arr[0]);

    int value = findUnique(arr, n);

    cout<<value<<endl;
}