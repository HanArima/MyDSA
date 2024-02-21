#include<stdio.h>

void P1(){
    int x = 10;
    int y = 3;
    func1(y, x, x);
    printf("%d\n", x);
    printf("%d\n", y);
}

void func1(int x, int y, int z){
    y = y + 4;
    z = x + y + z;
}

int main(){
     P1();
     return 0;
}


