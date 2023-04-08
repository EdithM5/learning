#!/usr/bin/python3
#ask for a string
given_string = (input("Please enter a string for accronym: "))

# convert the string to upper case
given_string = given_string.upper()

# convert the string into a list
given_string_list = given_string.split()
for i in given_string_list:
    #get the 1st letter of the word and eliminate the new line
    print(i[0], end="")

#add a new line
print()
