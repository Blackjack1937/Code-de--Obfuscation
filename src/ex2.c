#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int f(int n) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (i % 2 == 0) {
            sum += i;
        } else {
            sum -= i;
        }
        if (sum > 10) {
            sum /= 2;
        }
    }
    if (sum < 0) {
        sum = -sum;
    }
    return sum;
}



int main(void) {
    int res = f(10);
    printf("res = %d\n", res);
    return res;
}
