# dict
# global list of dictionaries (key and value)
people = [
    {"name": "Carter", "number": "+1-617-495-1000"},
    {"name": "David", "number": "+1-617-495-1000"},
    {"name": "John", "number": "+1-949-468-2750"},
]
# behaves like a struct

name =  input("Name: ")

for person in people:
    if person["name"] == name:
        print(f"Found {person['number']}")
#        number = person["number"]
#        print(f"Found {number}")
        break
else:
    print("Not found")

"""
# only for paired key and values
people = {
    "Carter": "+1-617-495-1000",
    "David": "+1-617-495-1000",
    "John": "1-949-468-2750",
}

if name in people:
    number = people[name]
    print(f"Found {number}")
else:
    print("Not found")
"""

"""
names = ["Carter", "David", "John"]

name = input("Name: ")

if name in names:
    print("Found")
#for n in names:
#    if name == n:
#        print("Found")
#        break
else:
    print("Not found")
"""
