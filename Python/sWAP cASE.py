"""
You are given a string and your task is to swap cases. In other words, convert all lowercase letters to uppercase letters and vice versa.

For Example:
Www.HackerRank.com → wWW.hACKERrANK.COM
Pythonist 2 → pYTHONIST 2  

Function Description
Complete the swap_case function in the editor below.
swap_case has the following parameters:
string s: the string to modify
Returns
string: the modified string
Input Format
A single line containing a string s.

Constraints
0 < len(s) <= 1000

Sample Input 0
HackerRank.com presents "Pythonist 2".
Sample Output 0
hACKERrANK.COM PRESENTS "
"""
def swap_case(s):
    modified_string = ""
    for i in range(len(s)):
        if s[i].islower():
            modified_string += s[i].upper()
        else:
            modified_string += s[i].lower()
    return str(modified_string)

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)

""" OR simply-
def swap_case(s):
    return "".join([i.lower() if i.isupper() else i.upper() for i in s])
"""
