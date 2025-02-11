#include <stdio.h>
#define N 10
void reverse(int*a){
    for (int i = 0; i < N/2; i++){
        int temp=*(a+i);
        *(a+i)=*(a+N-i-1);
        *(a+N-i-1)=temp;
    }
};
int main(){
    puts("202478030533邹为一畅");
    int a[N]={1,2,3,4,5,6,7,8,9,10};
    reverse(a);
    for (int i = 0; i < N; i++){
        printf("%d ",*(a+i));
    }
}