//114) Write a program to take an integer array arr and an integer k as inputs. The task is to find the kth smallest element in the array. Print the kth smallest element as output.
# Program to find the kth smallest element in an array

arr = list(map(int, input("Enter array elements: ").split()))
k = int(input("Enter k: "))

# Sort the array
arr.sort()

# k-th smallest element (1-based index)
print(arr[k-1])
