#include <stdio.h>
#define N 10

int DevideContinue(int *a, int n, int i){
    if (a[i] < 1 || a[i] > 100)
        return 1;
    for (int j = 0; j < i; j++){
            if(a[j]==a[i])
            return 1;
        }
    return 0;
}

int main(){
    puts("202478030533邹为一畅");
    puts("请输入10个在1-100内的数：");
    int a[N];
    for(int i=0;i<N;i++){
        scanf("%d",&a[i]);
    }
    for (int i = 0; i < N; i++){
        if (DevideContinue(a, N, i))
            continue;
        printf("%d ", a[i]);
    }
}

