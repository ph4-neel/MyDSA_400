#include<iostream>
using namespace std;

bool ispossible(int arr[], int n, int m, int mid){

    int studentCount = 0;
    int pageSum = 0;

    for(int i=0; i<n; i++){
        if(pageSum + arr[i] <= mid){

            pageSum += arr[i];
        }
        else{

            studentCount++;
            if(studentCount > m || arr[i] >mid){
                return false;
        }

        pageSum = arr[i];
    }

}

return true;

}

void Allocation(int arr[], int n, int m){


    int ans =-1;
    int sum = 0;

    for(int i =0; i<n; i++){
        sum+=arr[i];
    }

    int s = 0;
    int e = n-1;

    int mid = s +(e-s)/2;

    while(s<e){

        if(ispossibile(arr,n,m,mid)){

            ans = mid;
            e = mid-1;
        }else{

            s = mid +1;
        }

    }
}