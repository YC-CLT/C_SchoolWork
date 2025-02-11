#include <stdio.h>
int loop_year(int year){
    if (((year%4==0)&&(year%100!=0))||(year%400==0))    
    return 1;
    else
    return 0;
};

int main(){
    puts("202478030533邹为一畅");
    int year;
    printf("请输入年份：");
    scanf("%d",&year);
    int x=loop_year(year);
    if (x==1)
    printf("%dis a leap year!",year);
    else
    printf("%dis not a leap year!",year);
    return 0;
}
