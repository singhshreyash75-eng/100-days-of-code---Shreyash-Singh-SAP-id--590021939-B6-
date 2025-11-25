//132) Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.
#include <stdio.h>

enum Days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Days day;

    printf("Days of the Week:\n");

    for (day = SUNDAY; day <= SATURDAY; day++) {
        switch(day) {
            case SUNDAY:    printf("%d - SUNDAY\n", day); break;
            case MONDAY:    printf("%d - MONDAY\n", day); break;
            case TUESDAY:   printf("%d - TUESDAY\n", day); break;
            case WEDNESDAY: printf("%d - WEDNESDAY\n", day); break;
            case THURSDAY:  printf("%d - THURSDAY\n", day); break;
            case FRIDAY:    printf("%d - FRIDAY\n", day); break;
            case SATURDAY:  printf("%d - SATURDAY\n", day); break;
        }
    }

    return 0;
}
