#include <stdio.h>
int main() {
    puts("202478030533邹为一畅");
    int x;
    int a[3];
    scanf("%d",&x);
    for (int i = 0; i < 3; i++){
        a[i] = x%10;
        x /= 10;
    }
    printf("各个位的位数之和为%d",a[0]+a[1]+a[2]);
    
}