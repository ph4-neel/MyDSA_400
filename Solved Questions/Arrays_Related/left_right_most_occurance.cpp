#include<iostream>
using namespace std;


int leftMost(int arr[], int n){


    int s = 0;
    int e = n-1;

    int ans =-1;

    int mid = s +(e - s)/2;

    while(s<=e){


        if(arr[mid] == key){

            ans = mid;
            e = mid - 1;
        }


        else if(arr[mid] > key){

            e = mid-1;
        }

        else{

            s = mid +1;
        }

        mid = s +(e - s)/2;
    }
}

int main(){


    int arr[5] = {1,2,3,3,5};

    int n = sizeof(arr)/sizeof(arr[0]);

    int key = 3;

    int value = leftMost(arr,n,key);

    cout<<value;
}