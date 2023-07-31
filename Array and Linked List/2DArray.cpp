#include <iostream>
using namespace std;
/*
bool isPresent(int arr[][4], int target, int row_m, int col_n){
    for(int row = 0; row < row_n; row++){
        for (int col = 0; col < col_m; col++)
        {
            if (arr[row][col]==target)
            {
                return 1;
            }
            
        }
    }
    return 0;
}
*/
int sumRow(int arr[][4], int m, int n){
    for (int row = 0; row < m ; row++)
    {
        int sum = 0;
        for (int col = 0; col < n ; col++)
        {
            sum += arr[row][col];
        }
         cout << "Sum of Row " << row << " is " << sum << endl;
    }
    
}

int sumCol(int arr[][4], int m, int n){
    for (int col = 0; col < n ; col++)
    {
        int sum = 0;
        for (int row = 0; row < m ; row++)
        {
            sum += arr[row][col];
        }
         cout << "Sum of Column " << col << " is " << sum << endl;
    }
    
}

int main()
{
    
    int m, n;
    cout << "Enter the size of the Matrix" << endl;
    cin >> m >> n;

    int arr[3][4];

    // take input row wise
    cout << "Enter the elements: "<<endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cin >> arr[row][col];
        }
        cout << endl;
    }
    

    // printing the array row wise
    cout << "Printing row wise..." << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
/*
    //take input col wise
    cout << "Enter the elements: "<<endl;
    for (int col = 0; col < 4; col++)
    {
        for (int row = 0; row < 3; row++)
        {
            cin >> arr[row][col];
        }
        cout << endl;
    }
    
    // printing the array 
    cout << "Printing array..." << endl;
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            cout << arr[row][col] << " ";
        }
        cout << endl;
    }
*/
    /*
    int target;
    cout << "Enter the element to search..."<<endl;
    cin >> target;
    if (isPresent(arr, target, 3, 4)){
        cout << "Element Found..."<<endl;
    }else{
        cout << "Not Found..." <<endl;
    }
    */
   cout << "The sum of rows is: "<<endl;
   sumRow(arr, 3, 4);

   cout << "The sum of columns is: "<<endl;
   sumCol(arr, 3, 4);
        
    return 0;
}