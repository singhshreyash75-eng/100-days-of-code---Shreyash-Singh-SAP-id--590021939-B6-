//117) Write a program to take an integer array nums which contains only positive integers, and an integer target as inputs. The goal is to find two distinct indices i and j in the array such that nums[i] + nums[j] equals the target. Assume exactly one solution exists and return the indices in any order. Print the two indices separated by a space as output. If no solution exists, print "-1 -1".
# Program to find two indices such that nums[i] + nums[j] = target

nums = list(map(int, input().split()))
target = int(input())

found = False

# Check all pairs (brute force)
for i in range(len(nums)):
    for j in range(i + 1, len(nums)):
        if nums[i] + nums[j] == target:
            print(i, j)
            found = True
            break
    if found:
        break

if not found:
    print("-1 -1")
