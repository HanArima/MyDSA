#include <string>
#include <iostream>
#include <vector>
using namespace std;

bool check_anagram(string str1, string str2){
     vector<int> freq(26,0);
    
    if(str1.length() != str2.length()){
        return false;
    }
    
    for(int i=0;i<str1.length(); i++){
        freq[str1[i] - 'a']++;
        freq[str2[i] - 'a']--;
    }

    for(int i=0; i<26; i++){
        if(freq[i] != 0){
            return false;
        }
    }
    
    return true;
}

string sorting_string(string str){ 

    //make freq string 
    vector<int> freq(26,0);

    for(int i=0; i<str.length(); i++){
        int index = str[i] - 'a';
        freq[index]++;
    }

    //create a sorted string
    int j = 0;
    for(int i=0; i<26; i++){
        while(freq[i]--){
            str[j++] = i + 'a';
        }
    }

    return str;
}

int main(){

    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    str1 = sorting_string(str1);
    str2 = sorting_string(str2);

    bool result = str1.compare(str2);

    if(result==0){
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }

}