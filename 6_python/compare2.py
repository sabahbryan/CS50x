s = input("s: ")
t = input("t: ")

if s == t:
    print("Same")
else:
    print("Different")
# C compares char* (memory address), every call will be a different address
# Python works on higher level, compares strings as intended
