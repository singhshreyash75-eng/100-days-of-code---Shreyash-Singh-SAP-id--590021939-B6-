//116) Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".
# Program to check if two strings are anagrams

s = input().strip()
t = input().strip()

# If lengths differ, they cannot be anagrams
if len(s) != len(t):
    print("Not Anagram")
else:
    # Count characters using dictionaries
    freq_s = {}
    freq_t = {}

    for ch in s:
        freq_s[ch] = freq_s.get(ch, 0) + 1

    for ch in t:
        freq_t[ch] = freq_t.get(ch, 0) + 1

    if freq_s == freq_t:
        print("Anagram")
    else:
        print("Not Anagram")
