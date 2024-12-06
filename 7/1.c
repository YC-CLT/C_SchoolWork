#include <stdio.h>
#define M 5
int multiple(int a,int b ){
    if (b % a == 0)
        return 1;
    return 0;
}

int main(){
    puts("202478030533邹为一畅");
    printf("请输入2个整数，一共有%d对：\n",M);
    int a[M][2];
    int a1,b1;
    for (int i = 0; i < M; i++){
        printf("请输入2个整数，还剩%d对：\n",M-i);
        scanf("%d %d",&a[i][0],&a[i][1]);
    }
    for (int i = 0; i < M; i++){
        a1 = a[i][0];
        b1 = a[i][1];
        int c=multiple(a1,b1);
        printf("第%d对的判断值(真1假0)：%d\n",i+1,c);
    }
}