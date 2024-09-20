#include <stdio.h>

int main(){
    char a[3], b[3], c[3], d[3];
    printf("Enter a string for a[10]: ");
    scanf("%s", a);
    printf("[after scanf()] Value in a: %s @ %p\n", a, a);
    printf("[before scanf()] Value in b: %s @ %p\n", b, b);
    printf("Enter a string for b[10]: ");
    scanf("%s", b);
    printf("[after scanf()] Value in b: %s @ %p\n", b, b);
    printf("[before scanf()] Value in c: %s @ %p\n", c, c);
    printf("Enter a string for c[10]: ");
    scanf("%s", c);
    printf("[after scanf()]Value in c: %s @ %p\n", c, c);
    printf("[before scanf()] Value in d: %s @ %p\n", d, d);
    printf("Enter a string for d[10]: ");
    scanf("%s", d);
    printf("[after scanf()] Value in d: %s @ %p\n", d, d);

    printf("Value in a: %s\n", a);
    printf("Value in b: %s\n", b);
    printf("Value in c: %s\n", c);
    printf("Value in d: %s\n", d);
}
