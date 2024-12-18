#include <stdio.h>

void RowMax(int a[4][5], int i, int *r, int *c){
    int max = a[i][0]; 
    for(int j = 0;j < 5 ;j++){
        if (a[i][j] > max){
            max = a[i][j];
            *r = i;
            *c = j;
        }
    }
}
void PrintHarness(int a[4][5], int r, int c){
    printf("存在鞍点且值为：%d  行为：%d  列为：%d\n", a[r][c], r+1,c+1);
}
int main(){
    puts("202478030533邹为一畅");
    int a[4][5]={
        {6,7,8,9,10},
        {1,2,3,4,5},
        {11,12,13,14,15},
        {16,17,18,19,20}
    };
    int i,j;
    int r,c;
    for(i = 0;i < 4;i++){
        RowMax(a, i, &r, &c);
        int flag = 1;
        for(j = 0;j < 4;j++){
            if(a[j][c] < a[r][c]){
                flag = 0;
                break;
            }
        }
        if(flag){
            PrintHarness(a, r, c);
            return 0;
        }
    }
    puts("不存在鞍点");
}
    