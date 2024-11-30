#include <stdio.h>
int main() {
    puts("202478030533邹为一畅");
    int x,y;
    scanf("%d %d",&x,&y);
    if (x%y==0)
        printf("%d是%d的倍数，且x/y=%d",x,y,x/y);
    else
        printf("%d不是%d的倍数",x,y);   
}