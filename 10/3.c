#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define N 20

int palindrome(char *str){
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++) {
        if (str[i] != str[len - i - 1]) {
            return 0;
        }
    }
    return 1;
}
int main() {
    char str1[N]="";
    char str2[N]="";
    int a=0;
    puts("202478030533邹为一畅");
    puts("请输入一个字符串：");
    fgets(str1, sizeof(str1), stdin);
    for (int i = 0; str1[i]!='\0'; i++){
        if (isalpha(str1[i]))
            str2[a++]=towlower(str1[i]);
    }
    if (palindrome(str2))
        printf("Y");
    else
        printf("N"); 
}