#include <stdio.h>
int main(){
    puts("202478030533邹为一畅");
    int n=13;
    printf("n=%d\n",n);

    for (int i = 0; i < (n-1)/2; i++){
        if (i==0){
            for (int j = 0; j < n; j++)
                putchar('*');
            putchar('\n');
            continue;
        }
        putchar('*');
        for (int j = 0; j < 5-i; j++)
            putchar(' ');
        putchar('*');
        for (int j = 0; j < 2*i-1; j++){
            putchar(' ');
        }
        putchar('*');
        for (int j = 0; j < 5-i; j++)
            putchar(' ');
        putchar('*');
        putchar('\n');
    }

    putchar('*');
    for (int j = 0; j < n-2; j++)
        putchar(' ');
    putchar('*');
    putchar('\n');
    for (int i = (n-1)/2-1; i > -1 ; i--){
        if (i==0){
            for (int j = 0; j < n; j++)
                putchar('*');
            putchar('\n');
            continue;
        }
        putchar('*');
        for (int j = 0; j < 5-i; j++)
            putchar(' ');
        putchar('*');
        for (int j = 0; j < 2*i-1; j++){
            putchar(' ');
        }
        putchar('*');
        for (int j = 0; j < 5-i; j++)
            putchar(' ');
        putchar('*');
        putchar('\n');
    }
}