#include <stdio.h>
int main(){
    puts("202478030533邹为一畅");
    int x,a,y,z;
    scanf("%d%d%d",&x,&a,&y);
    z=x+a%3*(int)(x+y)%2/4;
    printf("the result is %d",z);
}