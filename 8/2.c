#include <stdio.h>

int Exchange(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int gcd(int x, int y) {
    if (y == 0) 
        return x;
    else 
        return gcd(y, x % y);
}
int main() {
    puts("202478030533邹为一畅");
    int x, y;
    printf("请输入两个整数：");
    scanf("%d %d", &x, &y);
    if (x < y) {
        Exchange(&x, &y);
    }
    printf("最大公约数为：%d\n", gcd(x, y));
}