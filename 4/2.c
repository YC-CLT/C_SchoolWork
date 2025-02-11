#include <stdio.h>
int main() {
    puts("202478030533邹为一畅");
    char x;
    printf("请输入一个字符：");
    scanf("%c",&x);
    if (x>47&&x<58)
    printf("%c is a number!",x);
    else
    if ((x>64&&x<91)||(x>96&&x<123))
    printf("%c is a letter!",x);
    else
    printf("%c is the other!",x);
}