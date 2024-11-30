#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    int c;
    int x;
    int k;
} cxk;
void a(cxk b){
    b.c=1;
    b.x=1;
    b.k=4;//sb 这么改是错的  因为传的是值  不是地址  所以改不了  
    //所以要用指针  或者用数组  或者用结构体  或者用全局变量  或者用引用   

}    
int main() {
    cxk b;
    a(b);
    printf("%d %d %d",b.c,b.x,b.k);
}