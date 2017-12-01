#include <stdio.h>
#include <stdlib.h>

char *num2str(int i) {
    char *str;
    str = malloc(sizeof(char) * 100);

    sprintf(str, "%d", i);
    return str;
}

int main() {
    int num1, num2;

    printf("Input number 1: ");
    scanf("%d", &num1);
    printf("Input number 2: ");
    scanf("%d", &num2);
    printf("%s %s\n", num2str(num1), num2str(num2));

    return 0;
}
