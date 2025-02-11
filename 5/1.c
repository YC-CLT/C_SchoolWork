#include <stdio.h>
int main(){
    puts("202478030533邹为一畅");
    int a[3]={0};
    puts("请输入三个非负整数");
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    if (a[0]+a[1]>a[2]&&a[0]+a[2]>a[1]&&a[1]+a[2]>a[0])
        puts("是一个三角形的边长");
    else
        puts("不是一个三角形的边长");
}