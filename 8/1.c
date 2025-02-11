#include <stdio.h>
#define N 114514

int isPerfect(int num){
    int sum=0;
    for(int i=1;i<num;i++){
        if(num%i==0)
            sum+=i;
    }
    return num == sum;
}

void PrintFactors(int num){
    printf("且%d的全部因子为：",num);
    for(int i=1;i<num;i++){
        if(num%i==0)
            printf("%d,",i);
    }
}
int main(){
    puts("202478030533邹为一畅");
    printf("1~%d的完全数有：\n",N);
    for(int i=1;i<=N;i++){
        if(isPerfect(i)){
            printf("%d，",i);
            PrintFactors(i);
            printf("\n");
        }
    }
}