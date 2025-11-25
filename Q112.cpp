//112) Write a program to take an integer array arr and an integer k as inputs. The task is to find the first negative integer in each subarray of size k moving from left to right. If no negative exists in a window, print "0" for that window. Print the results separated by spaces as output.
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    scanf("%d", &k);

    int negIndex[n];   // queue to store indexes of negative numbers
    int front = 0, back = -1;

    // Process first window
    for (int i = 0; i < k; i++) {
        if (arr[i] < 0)
            negIndex[++back] = i;
    }

    // Print result for first window
    if (front <= back)
        printf("%d ", arr[negIndex[front]]);
    else
        printf("0 ");

    // Process the rest of the windows
    for (int i = k; i < n; i++) {

        // Remove out-of-window indices
        while (front <= back && negIndex[front] <= i - k)
            front++;

        // Add new negative number
        if (arr[i] < 0)
            negIndex[++back] = i;

        // Print first negative for this window
        if (front <= back)
            printf("%d ", arr[negIndex[front]]);
        else
            printf("0 ");
    }

    return 0;
}
