#include <stdio.h>
int k = 30;
static int praveen1 = 10;
static int praveen2;
int praveen3 = 20;
int praveen4;
int foo(){
    static int q = 200;
    printf("[*] Address of q: %p\n", &q);
    printf("[*] Value of q: %d\n", q);
}

int main() {
    static int praveen10 = 10;
    static int praveen20;
    int praveen30 = 20;
    int praveen40;
    static int j = 20;
    static int l = 50;
    printf("[*] Address of k: %p\n", &k);
    printf("[*] Address of j: %p\n", &j); 
    printf("[*] Address of l: %p\n", &l);

    int *m = &j - 0x2; // illega access;
    printf("[*] Address of M: %p\n", m);
    printf("[*] Value of k: %d\n", k);
    printf("[*] Value of j: %d\n", j);
    printf("[*] Value of l: %d\n", l);

    *m = 10;
    printf("Changing the value of K to 10 Via Pointer M\n");
    printf("[*] Value of k: %d\n", k);
    printf("[*] Value of j: %d\n", j);
    printf("[*] Value of l: %d\n", l);

    int *u = &j + 0x1; // illegal access
    printf("[*] Address of U: %p\n", u);
    printf("[*] Value of k: %d\n", k);
    printf("[*] Value of j: %d\n", j);
    printf("[*] Value of l: %d\n", l);

    *u = 200;
    printf("Changing the value of L to 200 Via Pointer U\n");
    printf("[*] Value of k: %d\n", k);
    printf("[*] Value of j: %d\n", j);
    printf("[*] Value of l: %d\n", l);

    foo();
    int *p = &l - 0x2; // illegal access, refers static variable from other function !!
    printf("[*] Address of P [main]: %p\n", p);
    *p = 300;
    foo();
    return 0;
}
 