//11) Write a program to input time in seconds and convert it to hours:minutes:seconds format.

//Ans11

#include <stdio.h>

int main() {
    int totalSeconds, hours, minutes, seconds;

    // Input total time in seconds
    printf("Enter time in seconds: ");
    scanf("%d", &totalSeconds);

    // Calculate hours, minutes, and seconds
    hours = totalSeconds / 3600;           // 1 hour = 3600 seconds
    minutes = (totalSeconds % 3600) / 60;  // Remaining seconds to minutes
    seconds = totalSeconds % 60;           // Remaining seconds

    // Display result
    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
