#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;

string decode(string s){
    string result;
    for(int i=0; i<s.length(); i++){
        if(s[i] != ']'){
            result += s[i];
        } else {
            //step 1
            string str = "";
            while(!result.empty() && result.back() != '['){
                str.push_back(result.back());
                result.pop_back();-
            }
            // step 2
            reverse(str.begin(), str.end());
            result.pop_back(); // pops the '['
            
            //step 3 
            string num = "";
            while(!result.empty() && result.back() <= '9' && result.back()>= '0' ){
                num.push_back(result.back());
                result.pop_back();
            }
            reverse(num.begin(), num.end());
            int freq = stoi(num);

            while(freq--){
                result += str;
            }
                
        }
    }

    return result;
}

int main() {
    
    string s;
    cout << "Enter your string: " << endl;
    cin >> s;
    
    string result = decode(s);
    
    cout << result << endl;
}