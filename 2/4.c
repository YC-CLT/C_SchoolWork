#include <stdio.h>
int main() {
    int a,b,c,max;
    puts("202478030533邹为一畅");
    scanf("%d%d%d",&a,&b,&c);
    (a >= b) ? (max=a):(max=b);
    (max >= c)? (printf("%d",max)):(printf("%d",c));
}