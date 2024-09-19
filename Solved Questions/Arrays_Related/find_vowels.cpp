#include<iostream>
using namespace std;
#include <string>


int findVowel(const string& str , int index){

    //base Condition
    if(index ==str.length()){

        return 0;
    }


    char ch = tolower(str[index]);

    int isvowel = (ch == 'a'  || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') ? 1 :0;


    return isvowel + findVowel(str, index+1);
}


int main(){

    string input;
    getline(cin, input);


    int ans = findVowel(input, 0);

    cout<<ans<<endl;
}