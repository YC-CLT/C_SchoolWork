#include <stdio.h>

int main() {
    int a,b;
    char c;
    puts("202478030533邹为一畅");
    puts("请输入一个算式，如114+514");
    scanf("%d%c%d",&a,&c,&b);
    switch (c){
        case '+':
            printf("%d\n",a+b); break;
        case '-':
            printf("%d\n",a-b); break;
        case '*':
            printf("%d\n",a*b); break;
        case '/':
        if (b == 0) {
            printf("除数不能为0\n");break;
        }
            printf("%lf\n",(double)a/b); break;
        case '%':
            printf("%d\n",a%b); break;
        default: 
            printf("符号错误\n"); break;
    }
    printf("结束");
}