#include <iostream>
#include <string>
#include <vector>
using namespace std;

string sort_string(string str){
    vector<int> freq(26,0);

    //adding freq of every char
    for(int i=0; i<str.length(); i++){
        int input = str[i] - 'a';
        freq[input]++;
    }

    //create the string character
    int j = 0;
    for(int i=0; i<26; i++){
        while(freq[i]--){
            str[j++] = i + 'a';
        }
    }
    return str;
}

int main(){

    string str;
    cin >> str;

    cout << sort_string(str) << endl;
    
}