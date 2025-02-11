#include <stdio.h>
#include <string.h>
int main() {
    char a[10] = "cxk";
    char b[10] = "cxk";
    if (strcmp(a, b) == 0) {
        printf("1");
    } else {
        printf("0");
    }
    return 0;
}