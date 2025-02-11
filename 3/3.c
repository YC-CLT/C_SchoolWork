#include <stdio.h>
int max(int a, int b) {
    return (a > b)? a : b;
}
int main() {
    puts("202478030533邹为一畅");
    int a[5];
    int i,m;
    for(i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for (int p = 0; p < 4; p++){
        m = max(a[p],a[p+1]);    
    }
    printf("最大值为：%d",m);
}