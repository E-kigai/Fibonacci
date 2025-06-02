#include <stdio.h>
#include "fib_loop.h"

void fibonacci_loop(int n) {
    int fib0 = 0, fib1 = 1, nextTerm;

    if (n <= 0) return;

    printf("%d", fib0);
    if (n == 1) return;

    printf(", %d", fib1);

    for (int i = 2; i < n; i++) {
        nextTerm = fib0 + fib1;
        printf(", %d", nextTerm);
        fib0 = fib1;
        fib1 = nextTerm;
    }
    printf("\n");
}
