#!/usr/bin/python3
# use 1 while loop
# use 3 for loops
tall = input("How Tall is your tree? : ")
tall = int(tall)

inchash = 1
spaces = tall - 1
stumpspace = spaces
while (tall != 0):

    for i in range(spaces):
        print(" ", end="")
    for i in range(inchash):
        print("#", end="")
    print()
    spaces -= 1
    inchash += 2
    tall -= 1

for i in range(stumpspace):
    print(" ", end="")
print("#")
