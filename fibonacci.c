#include <stdio.h>

#include "fib_loop.h"

#include "fib_recursive.h"




int main () {
    int n , choice;

    printf("Enter Number Of Terms: ");
    scanf("%d", &n);

    printf("\nChoose method:\n");
    printf("1. Loop version\n");
    printf("2. Recursive version\n");
    printf("Your Choice: ");
    scanf("%d", &choice);

    printf("\nFibonacci series: ");

    if (choice == 1) {
        fibonacci_loop(n);
    } else if (choice == 2) {
        for (int i = 0; i < n; i++){
            printf("%d", fibonacci_recursive(i));
            if (i != n -1) printf(", ");
        }

        printf("\n");
    }


return 0;
}

