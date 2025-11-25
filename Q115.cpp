//115) Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.
# Program to find the length of the longest substring without repeating characters

s = input("Enter string: ")

char_set = set()
left = 0
max_len = 0

for right in range(len(s)):
    while s[right] in char_set:
        char_set.remove(s[left])
        left += 1
    char_set.add(s[right])
    max_len = max(max_len, right - left + 1)

print(max_len)
