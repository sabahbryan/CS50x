def get_int(prompt):
    while True:
        try:
            return int(input(prompt))
        except ValueError:
            print("Not an integer")
                pass
# while True: keep asking for user input
# try this function, except if something goes wrong
# if something goes wrong, print self-made error instead of ValueError
# pass: exclude the self-made error message

def main():
    x = get_int("x: ")
    y = get_int("y: ")

    print(x + y)

main()

# exception: out of band error handling
