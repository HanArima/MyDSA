#include<stdio.h>
int a1[] =  {6,7,8,18,34,67};
int a2[] = {23,56,28,29};
int a3[] = {-12,27,-31};
int *x[] = {a1,a2,a3};

void print(int *a[]){
    printf("%d, ", a[0][2]);
    printf("%d, ", *a[2]);
    printf("%d, ", *++a[0]);        // x[0] it a1 which is a pointer, when ++x[0] happens the a1 pointer gets incremented which is a1 + 1, and then finally this gets dereferenced.
    printf("%d, ", *(++a)[0]);      // whereas here, x gets incremented first i.e it goes to x[1], and then it gets dereferenced, therefore whatever is at a2.
    printf("%d\n, ", a[-1][+1]);
}

main(){
    print(x);
}