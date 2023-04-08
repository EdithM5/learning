#!/usr/bin/python3
guess = 0
while guess != 7:

    try:
        guess = int(input("Guess a number between 1 and 10: "))
    except ValueError:
        print("you didnt enter a number please try again")
print("You guessed it")
