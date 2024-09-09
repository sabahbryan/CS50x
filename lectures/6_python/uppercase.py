#insert .upper function inside {}
before = input("Before: ")
print(f"After:  {before.upper()}")

"""
before = input("Before: ")
after = before.upper()
print(f"After:  {after}")
"""

"""
before = input("Before: ")
print("After:  ", end="")
print(before.upper())
"""

"""
# "end" is a named parameter
before = input("Before: ")
print("After:   ", end="") #use "end" to change the automatic newline to something else
for c in before:
    print(c.upper(), end="")
print() #add newline for command line clarity
"""

"""
C:                          |Python:
for (int i = 0; i < 3; i++) |for i in range(3):
{                           |    print("Hello, world")
    printf("Meow\n");
}
"""
# range(3) = [0, 1, 2]
# use '_' if you don't care for the name of the variable
#   for _ in range(3):
