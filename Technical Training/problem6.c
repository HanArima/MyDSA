#include <stdio.h>
/*
int a, b, c = 0;
void prtFun(void);
main(){
    auto int a = 1;
    prtFun();
    a += 1;
    prtFun();
    printf("\n %d %d ", a, b );
}

void prtFun(void){
    register int a = 2;
    int b = 1;
    a += ++b;
    printf("\n %d %d", a, b);

    }*/

main()
{
    int i;
    int *pi = &i;

    scanf("%d", i);
    printf("%d\n", i + 5);
}
