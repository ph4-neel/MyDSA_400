#include<iostream>
using namespace std;


int findSquareroot(int n){

    int s = 0;
    int e = n-1;

    int ans = -1;


    int mid = s +(e-s)/2;

    while(s<e){

        int square = mid * mid ;

        if(square  == n){

            return mid;
        }

        if(square < n){
            ans = mid;
            s = mid + 1;
        }
        else{

            e = mid-1;
        }

        mid = s +(e-s)/2;
    }

    return ans;
}