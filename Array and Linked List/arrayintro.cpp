#include<iostream>
using namespace std;

// When we pass an array as a parameter to any function we ACTUALLY GIVE THE BASE ADDRESS OF THE ARRAY and NOT MAKE A COPY OF THE SAID ARRAY. 
// This means that we are passing the ACTUAL array inside the function. Therefore, it gets updated in the main fuction as well.
// Hence, try to never update the array in a fuction if you wamt the main array to stay the same.

void printintArray(int arr[], int size){

    cout << "Printing the array..."<< endl;

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
        cout << endl;
    }
    
    cout << "Printing done..."<<endl;

}

int main(){
    // Declaration and initialization
    int num[10];
    int array1[7]={0};

    //Display or print
    printintArray(array1, 7);


}
