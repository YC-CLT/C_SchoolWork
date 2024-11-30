#include <stdio.h>

int main() {
    puts("202478030533邹为一畅");
    puts("输入正方形的边长（1-20）:");
    int a;
    scanf("%d",&a);
    for (int i = 0; i < a; i++)
        putchar('*');
    putchar('\n');
    
    for (int i = 1; i < a-1; i++){
        putchar('*');   
        for (int i = 0; i < a-2; i++){
            putchar(' ');
        }
        putchar('*');
        putchar('\n');
    }
    for (int i = 0; i < a; i++)
    {
        putchar('*');
    }
    return 0;
}