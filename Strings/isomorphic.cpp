#include <iostream>
#include <string>
#include <vector>
using namespace std;

bool is_isomorphic(string str1, string str2){

    vector<int> freq(26,0);

    if(str1.length()!=str2.length()){
        return false;
    }
    for(int i=0; i<str1.length(); i++){
        if(freq[str1[i] - 'a']==0){
            freq[str1[i] - 'a'] = str2[i] - 'a';
        }else {
            return false;
        }
        
        return true;
    }
}

int main(){
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);

    bool result = is_isomorphic(str1, str2);

    if(result==true){
        cout << "yes" << endl;
    } else {
        cout << "no" << endl;
    }
}