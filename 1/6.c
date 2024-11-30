#include <stdio.h>
#define M 3// 定义宏M用于表示数组的大小（科目数）
static inline double avg(int *a, int n){//计算数组（科目成绩）的平均值
    int i;
    int sum = 0;
    double ave;
    for (i = 0; i < n; i++){       
        sum += a[i];
    } 
    ave = (double)sum / n;//计算平均值 ave
    return ave;    // 返回平均值
}
static inline void in(int *a){//读取 M 个整数（科目成绩）并存储 
    for (int i = 0; i < M; i++){
        scanf("%d",&a[i]);
    }
}
int main(){
    puts("202478030533邹为一畅");
    int a[M];// 存储成绩
    in(a);//输入成绩
    printf("the result is %.1lf",avg(a,M));//计算的平均值，一位小数
}