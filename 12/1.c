#include <stdio.h>
#define N 10
void MaxAndMin(int *a,int *max,int *min){
    *max=*min=a[0];
    for (int i = 0; i < N; i++){
        if (a[i]>*max)
            *max=a[i];
        if (a[i]<*min)
            *min=a[i];
    }
}
int main(){
    puts("202478030533邹为一畅");
    int a[N],i,max,min;
    puts("请输入10个整数：");
    for(i=0;i<N;i++)
        scanf("%d",&a[i]);
    MaxAndMin(a,&max,&min);
    printf("%d %d\n",max,min);
}