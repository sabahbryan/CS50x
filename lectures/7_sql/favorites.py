import csv

"""
file = open("favorites.csv", "r") # python defaults to (r)ead
# Do something with file
close(file)
"""

"""
with open("favorites.csv", "r") as file:
    reader = csv.reader(file)
    next(reader) # ignores first line containing metadata
    for row in reader:
        favorite = row[1]
        print(favorite) # returns 2nd column of each row (coding language)
"""

"""
with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file) # converts from list to dictionary
    for row in reader:
        print(row["language"])
"""

"""
with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    scratch, c, python = 0, 0, 0 # if number of keys are set

    for row in reader:
        favorite = row["language"]
        if favorite == "Scratch":
            scratch += 1
        elif favorite == "C":
            c += 1
        elif favorite == "Python":
            python += 1

print(f"Scratch: {scratch}")
print(f"C      : {c}")
print(f"Python : {python}")
"""

"""
with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    counts = {} # dict() = initialise "empty dictionary"

    for row in reader:
        favorite = row["language"]
        if favorite in counts: # check for key
            counts[favorite] += 1 # increments
        else:
            counts[favorite] = 1 # initialise new key

for favorite in sorted(counts, key=counts.get): # "sorted" by total values
#for favorite in sorted(counts, key=counts.get, reverse=True): # "sorted" in reverse order
#for favorite in sorted(counts): # "sorted" in alphabetical order
    print(f"{favorite}: {counts[favorite]}")
"""

from collections import Counter # import from collections module

with open("favorites.csv", "r") as file:
    reader = csv.DictReader(file)
    counts = Counter() # automatically initialise to 0

    for row in reader:
        favorite = row["problem"]
        counts[favorite] += 1

for favorite, count in counts.most_common():
    print(f"{favorite}: {count}")

"""
#csv (comma-separated values)
#   flat-file database

# DICTIONARY

keys/values
"""
