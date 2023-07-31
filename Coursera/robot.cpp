//Multiple Language Robot

#include <iostream>
using namespace std;

int main(){

    char button;
    cout << "Press a button: ";
    cin >> button;

   switch (button)
   {
   case 'a':
    cout << "Hello" << endl;
    break;
   
   case 'b':
    cout << "Hola" << endl;
    break;

   case 'c':
    cout << "Ciao" << endl;
    break;

   case 'd':
    cout << "Konnichiwa" << endl;
    break;

   case 'e':
    cout << "Namaste" << endl;
    break;

   default:
    cout << "I am still learning more.";
    break;
   }
    

    return 0;
}
