#include <stdio.h>
#define M 3
#define N 3

void ArrayMaxAndMin(int a[M][N],int* max,int* min){
    *max=*min=a[0][0];
    for (int i = 0; i < N; i++){
        for (int j = 0; j < N; j++){
            if (a[i][j]>*max)
                *max=a[i][j];
            if (a[i][j]<*min)
                *min=a[i][j];
        }
    }
}

int main(){
    int a[M][N]=
    {{1,2,3},
     {4,5,6},
     {7,8,9}};
int max,min;
puts("202478030533邹为一畅");
ArrayMaxAndMin(a,&max,&min);
printf("max=%d,min=%d",max,min);
}