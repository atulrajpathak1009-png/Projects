#include <stdio.h>
enum Day {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};
int main() {
    enum Day today;
    today = WEDNESDAY;
    printf("Enum value of today: %d\n", today);
    for (int d = SUNDAY; d <= SATURDAY; d++) {
        printf("Day %d\n", d);
    }
    return 0;
}