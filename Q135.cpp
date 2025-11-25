//135) Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly.
#include <stdio.h>

enum Status {
    SUCCESS = 1,
    FAILURE,
    TIMEOUT
};

int main() {
    enum Status s;

    printf("Enter status (1=SUCCESS, 2=FAILURE, 3=TIMEOUT): ");
    scanf("%d", &s);

    switch (s) {
        case SUCCESS:
            printf("Operation completed successfully.\n");
            break;

        case FAILURE:
            printf("Operation failed.\n");
            break;

        case TIMEOUT:
            printf("Operation timed out.\n");
            break;

        default:
            printf("Invalid status code!\n");
    }

    return 0;
}
