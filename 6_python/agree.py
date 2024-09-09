s = input("Do you agree? ")
#s = input("Do you agree? ").lower()

s = s.lower() #s is string

if s in ["y", "yes"]:
    print("Agreed")
elif s in ["n", "no"]:
    print("Not agreed")
#excluded capitalised answers without s.lower(function)

"""
# not good, excluded "yes" and "no"
if s == "Y" or s == "y":
    print("Agreed")
elif s == "N" or s == "n":
    print("Not agreed")
"""
#Object oriented programming (OOP)
#   Python, Java, ...
#   values/variables can have functionality built-in
#url:   docs.python.org/3/library/stdtypes.html#string-methods
