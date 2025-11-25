//Write a Program to take a sorted array(say nums[]) and an integer (say target) as inputs. The elements in the sorted array might be repeated. You need to print the first and last occurrence of the target and print the index of first and last occurrence. Print -1, -1 if the target is not present.
#include <stdio.h>

// Function to find the first occurrence using binary search
int firstOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums[mid] == target) {
            ans = mid;
            high = mid - 1;  // move left
        }
        else if (nums[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return ans;
}

// Function to find the last occurrence
int lastOccurrence(int nums[], int n, int target) {
    int low = 0, high = n - 1, ans = -1;

    while (low <= high) {
        int mid = (low + high) / 2;

        if (nums[mid] == target) {
            ans = mid;
            low = mid + 1;  // move right
        }
        else if (nums[mid] > target) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return ans;
}

int main() {
    int n, target;

    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d sorted elements: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    printf("Enter target: ");
    scanf("%d", &target);

    int first = firstOccurrence(nums, n, target);
    int last  = lastOccurrence(nums, n, target);

    printf("%d %d\n", first, last);

    return 0;
}
