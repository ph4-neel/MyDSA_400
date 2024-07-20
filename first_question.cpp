//you have a number n =234 and you need to find the product of the number  and sum of the digit 


#include<iostream>
using namespace std;


int main(){

    int reminder = 0;

    int prod = 1;
    int sum = 0;

    int n = 234;

    while(n!=0){

        reminder = n % 10;
        sum = sum+reminder;
        prod = prod * reminder;
        n = n/10;
    }


    int result = prod - sum;

    cout<<result<<endl;
}