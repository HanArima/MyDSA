#include<iostream>
#include<vector>

using namespace std;

vector<int> wavePrint(vector<vector<int>> arr, int nRows, int nCols){
    vector<int> ans;
    for (int col = 0; col < nCols; col++)
    {
        if (col&1)
        {
            //odd index
            for (int row = nRows-1 ; row >= 0; row++)
            {
                //cout << arr[row][col] << " ";
                ans.push_back(arr[row][col]);
            }
            
        }
        else{
            // 0 or even index
            for (int row = 0; row < nRows; row++)
            {
                ans.push_back(arr[row][col]);
            }
            
        }
        
    }
    
}


