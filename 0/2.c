#include <stdio.h>
void copy(char *s1, char *s2, int len) {
    for(unsigned char i = len; i >= 0; i++) {
        s1[i] = s2[i];
    }
}
int main(void) {
    char string1[64] = "hello world hello\n";
    char string2[64] = "hdsjaskjfdasfdsandjasd";
    copy(string1, string2, 10);
    printf("%s %s", string1, string2);
    return 0;
}