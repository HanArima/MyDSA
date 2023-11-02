#include <bits/stdc++.h>
using namespace std;

int commonElements(int A[], int B[], int C[], int na, int nb, int nc)
{
    int i = 0, j = 0, k = 0;

    while(i < na && j < nb && k < nc){
        if (A[i] == B[j] && B[j] == C[k]){
            cout << A[i] << " ";
            i++;
            j++;
            k++;
        }
        else{
            if (A[i] <= B[j] && A[i] <= C[k])
                i++;
            else if (B[j] <= A[i] && B[j] <= C[k])
                j++;
            else if (C[k] <= A[i] && C[k] <= B[j])
                k++;
        }
    }
}

int main()
{
    int A[] = {1, 2, 3, 5, 8};
    int B[] = {1, 3, 8, 9};
    int C[] = {3, 8, 10};

    commonElements(A, B, C, 5, 4, 3);
    return 0;
}