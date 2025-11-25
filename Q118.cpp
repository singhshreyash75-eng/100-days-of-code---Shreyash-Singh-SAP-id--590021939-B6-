//118) Write a program to take two sorted arrays of size m and n as input. Merge both the arrays such that the merged array is also sorted. Print the merged array.
# Program to merge two sorted arrays

# Input arrays
arr1 = list(map(int, input().split()))
arr2 = list(map(int, input().split()))

m = len(arr1)
n = len(arr2)

merged = []
i = j = 0

# Merge using two-pointer technique
while i < m and j < n:
    if arr1[i] <= arr2[j]:
        merged.append(arr1[i])
        i += 1
    else:
        merged.append
