#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 20

int main() {
    char s[N]="";
    int a=0,d=0,o=0;
    puts("202478030533邹为一畅");
    puts("请输入一个字符串：");
    fgets(s, sizeof(s), stdin); 
    for (int i = 0; s[i]!='\0'; i++){
        if (isalpha(s[i]))
            a++;
        else if (isdigit(s[i]))
            d++;
        else if (s[i]!=' ')
            o++;       
    }
    printf("字母：%d个，数字：%d个，其他字符：%d个",a,d,o);
}       