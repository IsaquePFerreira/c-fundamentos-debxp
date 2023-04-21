#include <stdio.h>

int main() {

    int i1 = 10, *pi1 = &i1;
    int i2 = 10, *pi2 = &i2;

    printf("pi1 = %p\n", pi1);
    printf("pi2 = %p\n", pi2);
    printf("pi1 - pi2 = %d\n", pi1 - pi2);
    printf("pi2 - pi1 = %d\n", pi2 - pi1);

    return 0;
}
