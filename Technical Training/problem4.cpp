#include <stdio.h>
#define swapl(a, b) tmp = a; a = b; b = tmp 

void swap2(int a, int b)
{
    int tmp;
    tmp = a;
    a = b;
    b = tmp;
}

void swap3(int *a, int *b)
{
    int tmp;
    tmp = *a;
    *a = *b;
    *b = tmp;
}

int main()
{
    int num1 = 5, num2 = 4, tmp;
    //if (num1 < num2) {swap1 (num1, num2);}
    if (num1 < num2) {swap2 (num1 + 1, num2);}
    if (num1 >= num2) {swap3(&num1, &num2);}
    printf("%d %d", num1, num2);
}




