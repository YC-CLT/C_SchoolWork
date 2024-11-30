#include <stdio.h>
int main(){
    puts("202478030533邹为一畅");
    puts("请输入1到19之间的一个奇数:");
    int a;
    scanf("%d",&a);
    int b=a/2;
    for (int i = 0; i < b; i++)
    {
        for (int t = 0; t < b-i; t++)
            putchar(' ');
        for (int t = 0; t < 2*i+1; t++)
            putchar('*');
        for (int t = 0; t < b-i; t++)
            putchar(' ');
        putchar('\n');
    }
    for (int i = b; i > -1; i--)
    {
        for (int t = 0; t < b-i; t++)
            putchar(' ');
        for (int t = 0; t < 2*i+1; t++)
            putchar('*');
        for (int t = 0; t < b-i; t++)
            putchar(' ');
        putchar('\n');
    }
    
}