#include <stdio.h>
#define WeeklySalary 114514
#define HourlySalary 200
#define BaseSalary 250
#define Product 200
typedef enum staff{
    manager=1,
    timeworker,
    agent,
    countworker
} staff;
int main(){
    puts("202478030533邹为一畅");
    staff i;
    while (1){   
        puts("请输入员工类别:1...经理 2...计时工 3...代办工 4...计件工 0...退出");
        scanf("%d",&i);
        switch (i){
            case manager:
                printf("工资是%.2lf\n",(double)WeeklySalary);
            break;
            case timeworker:
                puts("请输入工作小时数:");
                double h;
                scanf("%lff",&h);
                if (h>40)
                    printf("工资是%.2lf\n",HourlySalary*40+(h-40)*HourlySalary*1.5);
                else
                    printf("工资是%.2lf\n",HourlySalary*h);
            break;
            case agent:
                puts("请输入销量总额:");
                double s;
                scanf("%lf",&s);
                printf("工资是%.2lf\n",BaseSalary+s*0.05);
            break;
            case countworker:
                puts("请输入生产的数目:");
                int n;
                scanf("%d",&n);
                printf("工资是%.2lf\n",(double)Product*n);
            break;
            case 0:
                return 0;
            default:
                puts("输入错误");
            break;
        };
    }
}    