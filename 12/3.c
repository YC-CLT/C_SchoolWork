#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define N 20
void delchar(char *a,char *b,char c ){
    for (int i=0,r=0; a[i]!='\0'; ){
        if (a[i]==c)
            i++;
        else 
            b[r++]=a[i++];
    }    
}

int main(){
    puts("202478030533邹为一畅");
    char s[N]="";
    char d[N]="";
    char c;
    puts("请输入字符串:");
    fgets(s,N,stdin);
    puts("请输入要删除的字符:");
    scanf("%c",&c);
    delchar(s,d,c);
    puts(d);
}