# Python doesn't truncate like in C
# truncation = removes decimals in integer
x = int(input("x: "))
y = int(input("y: "))

z = x / y
#print(z)
print(f"{z:.50f}") #shows floating point precision issues (up to 50 decimals)

# integer overflow is not a problem in Python as it'll automatically reserve
# memory required for the task

"""
# correctly converts numerical inputs to integers to be used for calculation
# note:
# 5 + 6 = 11
x = int(input("x: "))
#x = int(x)
y = int(input("y: "))
#y = int(y)

print(x + y)
#print(int(x) + int(y))
"""


"""
# error, this concatenate both inputs as strings, not actual addition
# 5 + 6 = 56
x = input("x: ")
y = input("y: ")

print(x + y)
"""

"""
# using a specific function in cs50 library in case of similar function names
# that's not from cs50
import cs50

x = cs50.get_int("x: ")
y = cs50.get_int("y: ")

print(x + y)
"""

"""
# using cs50 library
from cs50 import get_int

x = get_int("x: ")
y = get_int("y: ")

print(x + y)
"""

"""
# compare (C)
#include <stdio.h>
#include <cs50.h>

int main(void)
{

    int x = get_int("x: ");
    int y = get_int("y: ");

    printf("%i\n", x + y);
"""
