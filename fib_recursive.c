#include "fib_recursive.h"

int fibonacci_recursive(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci_recursive(n - 1) + fibonacci_recursive(n - 2);
}
