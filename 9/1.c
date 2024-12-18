# include <stdio.h>
# define N 10
double Sort(double *a, int n){
    for (int i = 0; i < n; i++){
        for (int j = 0; j < n - i - 1; j++){
            if (a[j] > a[j + 1]){
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main(){
    puts("202478030533邹为一畅");
    int n;
    double a[N];
    puts("请分别输入评委的分数：");
    for (int i = 0; i < N; i++){
        scanf("%lf", &a[i]);
    }

    Sort(a, N);
    double sum = 0;
    for (int i = 1; i < N - 1; i++){
        sum += a[i];
    }
    printf("去掉最高分和最低分后的最终分数为：%lf", sum / 8);
}
