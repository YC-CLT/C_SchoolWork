#include <stdio.h>
void max(int *a){
    int temp;
    if (a[0]>a[1])
    return; 
    else{
        temp=a[0];
        a[0]=a[1];
        a[1]=temp;
    }
};

int main() {
    puts("202478030533邹为一畅");
    int a[2];
    for (size_t i = 0; i < 2; i++){
        printf("请输入第%d个数：",i+1);
        scanf("%d",&a[i]);   
    }
    max(a);
    int x=a[0];
    int y=a[1];
    printf("%d,%d",x,y);
    return 0;
}   