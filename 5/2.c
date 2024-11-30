#include <stdio.h>
double TemptureChange(double f){
    double c;
    c=5.0/9.0*(f-32);
    return c;
}
int Decide(double c){
    int p;
    if((int)c>=40)
        p=1;
    else if((int)c>=30)
        p=2;
    else if((int)c>=20)
        p=3;
    else if((int)c>=10)
        p=4;
    else if((int)c>=0)
        p=5;
    else
        p=6;
    return p;
}
int main(){
    puts("202478030533邹为一畅");
    double f,c;
    printf("请输入华氏温度：");
    scanf("%lf",&f);
    c=TemptureChange(f);
    printf("摄氏温度为：%.2lf\n",c);
    int p;
    p=Decide(c);
    switch ((int)p){
        case 1:puts("Hot");break;
        case 2:puts("Warm");break;
        case 3:puts("Room Tempeture");break;
        case 4:puts("Cool");break;
        case 5:puts("Cold");break;
        case 6:puts("Freezing");break;
    }
}