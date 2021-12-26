#include <stdio.h>
#include <malloc.h>

void task_1a() {
    int a;
    while (a != EOF && a != '.') {
        a = getchar();
        if (a == '?') {
            putchar('!');
            continue;
        }
        putchar(a);
    }
}

void task_1b() {
    int a;
    while (a != EOF && a != '.') {
        a = getchar();
        if (a == '-')
            continue;
        if (a == '&') {
            putchar('&');
        }
        putchar(a);
    }
}
void task_1c() {
    int a;
    while (a != EOF) {
        a = getchar();
        if (a >= 96 && a <= 122)
            putchar(a);
    }
}

void task_1d(){
    int a;
    while (a != EOF) {
        a = getchar();
        if (a >= 65 && a <= 90) {
            putchar(a + 32);
            continue;
        }
        putchar(a);
    }
}

void task_1e(){
    int a;
    while (a != EOF) {
        a = getchar();
        if (a >= 96 && a <= 122) {
            putchar(a - 32);
            continue;
        }
        putchar(a);
    }
}

void task_1f(){
    int a, a_prev=0;
    while (a != EOF) {
        a = getchar();
        if (a == '+' && a_prev=='+') {
            continue;
        }
        a_prev=a;
        putchar(a);
    }
}