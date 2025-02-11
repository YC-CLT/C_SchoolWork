#include <stdio.h>
int main() {
    puts("202478030533邹为一畅");
    int x,y;
    printf("x=");
    scanf("%d",&x);
    if (x<1)
    y=x;
    if (x>=1&&x<10)
    y=x*2-1;
    if (x>=10)
    y=3*x-11;
    printf("y=%d",y);
    return 0;
}