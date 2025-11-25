//139) Print all enum names and integer values using a loop.

#include <stdio.h>

enum Role { ADMIN = 1, USER, GUEST };

int main() {

    // Array of enum names in same order as enum values
    const char *roleNames[] = { "ADMIN", "USER", "GUEST" };

    // There are 3 enum values (ADMIN = 1 to GUEST = 3)
    for (int i = ADMIN; i <= GUEST; i++) {
        printf("%s = %d\n", roleNames[i - 1], i);
    }

    return 0;
}
