#include <bits/stdc++.h>
using namespace std;

int main(){

    // Normal Pair
    pair<char,char> ch = {'a','b'};
    cout << "First ch of the pair: " << ch.first << endl; 
    cout << "Second ch of the pair: " << ch.second << endl;

    // Nested Pair
    pair <char, pair<char,char>>ch2 = {'p', {'r', 's'}};
    cout << "First ch of the pair: " << ch2.first << endl; 
    cout << "Second ch of the pair: " << ch2.second.first << endl; 
    cout << "Third ch of the pair: " << ch2.second.second << endl; 

    // Pair Array
    pair <char, char> charr[] = {{'a','b'},{'c','d'},{'e','f'}};
    cout << "First ch of the pair: " << charr[0].first << endl; 


    return 0;
}