from cs50 import get_string #get_int, get_float
#import specific functions from a library

#answer = get_string("What's your name? ")
answer = input("What's your name? ")
#print("Hello, " + answer)
#print("Hello,", answer)
print(f"Hello, {answer}")
#   'f' is needed to tell Python to get "answer" input, similar to "%s" from C

"""
# Assignment operator
C     : int counter = 0;
Python:     counter = 0;
# increment
C     : counter = counter + 1; / counter += 1; / counter++
Python: counter = counter + 1  / counter += 1  / [not available]

C      | Python
---------------
bool   | bool
char   |
double |
float  | float
int    | int
long   |
string | str
---------------
       | range
       | list
       | tuple
       | dict
       | set
...
"""
