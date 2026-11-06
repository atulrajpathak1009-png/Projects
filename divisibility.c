#include <stdio.h>
int main() {
    printf ("Numbers divisible by both 4 and 7 between 1 and 100:\n");
    for (int i = 1; i <= 100; i++) {
        if (i % 4 == 0 && i % 7 == 0) {
            printf("%d\n", i);
        }
    }
    return 0;
}