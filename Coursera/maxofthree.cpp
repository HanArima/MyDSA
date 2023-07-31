/*Maximum of three*/
#include <iostream>
using namespace std;

int main(){
    int a, b, c;
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            cout << to_string(a) + " is maximum of the three"<< endl;
        }else{
            cout << to_string(c) + " is maximum of the three."<<endl;
        }   
    }else
    {
        if (b>c)        
        {
            cout << to_string(b) + " is maximum of the three."<<endl;
        } else{
            cout << to_string(c) + " is maximum of the three."<<endl;
        } 
        
    }
}



