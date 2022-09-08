#include <stdio.h>

int main(void) {
    int b;
    char a[255];
    printf("write number\n");
    scanf("%d", &b);
    printf("write symbol\n");
    scanf("%s", &a);
    printf("Your number: %d \nYour symbol: %s", b, a);
    return 0;
}
