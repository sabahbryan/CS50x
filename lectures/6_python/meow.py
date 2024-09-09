def main():
    meow(5)

def meow(n):
    for i in range(n):
        print("Meow")

main()

"""
# good practice to define main even if it's not required
def main():
    for i in range(3):
        meow()

# define a function called "meow"
def meow():
    print("Meow")

# call main
main()
"""
