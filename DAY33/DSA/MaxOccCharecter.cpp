#include<iostream>
#include<string>
using namespace std;

char getMaxOccCharacter(string s){
    int arr[26] = {0};

    // Create an array of count of character    
    for(int i = 0; i<s.size(); i++){
        char ch = s[i];

        // lower case 
        int number = 0;

        if(ch >= 'a' && ch <= 'z'){
            number = ch - 'a';
        }else{
            // upper case
            number = ch - 'A';
        }
        arr[number]++;
    }

    // Find maximum occurance of character 
    int maxi = -1;
    int ans = 0;
    for(int i =0; i<26; i++){
        if(arr[i] > maxi){
            ans = i;
            maxi = arr[i];
        }
    } 
    char finalAns = 'a' + ans;
    return finalAns;
}

int main() {

    string s;
    cin >> s;

    cout<<getMaxOccCharacter(s) <<endl;




    return 0;
}