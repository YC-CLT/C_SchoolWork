#include <stdlib.h>
#include <stdio.h>
#define N 9
#define M 3
#define P ((M>N)? M : N)+1
int Compare(int *a, int *b){
    if (N > M)
        return 1;
    if (M >N)
        return 2;
    if (N == M){
        for (size_t i = N-1; i >= 0; i--){
            if (a[i] > b[i])
                return 1;
            if (a[i] < b[i])
                return 2;    
        }
    return 0;
    }
}
int main(){
    printf("请分别输入第一个数的每一位:");
    int a[N]={0};
    for (int i = N-1; i >=0; i--)
        scanf("%d",&a[i]);
    printf("请分别输入第二个数的每一位:");
    int b[M]={0};
    for (int i = M-1; i >=0; i--){
        scanf("%d",&b[i]);
    }


    int c = Compare(a,b);
    if (c == 1)
        puts("第一个数大于第二个数");
    if (c == 2)
        puts("第一个数小于第二个数");
    if (c == 0)
        puts("第一个数等于第二个数");
    //判断两个数的大小

    int a1[P]={0};
    int b1[P]={0};
    if (c == 1||c == 0){
        for (int i = 0; i < N; i++)
            a1[i] = a[i];
        for (int i = 0; i < M; i++)
            b1[i] = b[i];        
    }
    if (c == 2){
        int p = M;
    }
char op='+';
puts("请输入运算符:");
scanf("%c",&op);
switch (op){
    case '+':
        int c[P]={0};
            for (int i = 0; i < P-1; i++){
                c[i] = a1[i] + b1[i];
                if (c[i] > 9){
                    c[i] -= 10;
                    c[i+1] += 1;
                }
            }
            printf("结果是:");
            if (c[P-1] == 1)
                printf("1");
            for (size_t i = P-2; i >= 0; i--){
                printf("%d",c[i]);
            }
        break;
    
    default:
        break;
    }    
    return 0;
}