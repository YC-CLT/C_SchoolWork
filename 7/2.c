#include <stdio.h>

int Max(int a, int b)
{
    if (a > b)
        return a;
    return b;
}

int main(){
    puts("202478030533邹为一畅");
    int a, b;
    printf("请输入两个整数：\n");
    scanf("%d %d", &a, &b);
    int max = Max(a, b);
    printf("最大值为：%d\n", max);
}