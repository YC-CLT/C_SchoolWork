#include <stdio.h>

int main(){
    puts("202478030533邹为一畅");
    int a[8];
    a[0]=1;
    a[1]=1;
    for(int n=2;n<8;n++)
        a[n]=3*a[n-1]-a[n-2];
    for(int n=0;n<8;n++)
        printf("a%d的值为%d\n",n+1,a[n]);
}