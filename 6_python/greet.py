# sys "library"

from sys import argv

# argv ignores "python", only reads [*.py] and argument
if len(argv) == 2:
    print(f"Hello, {argv[1]}")
else:
    print("Hello, world")
