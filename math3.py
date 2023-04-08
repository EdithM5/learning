#!/usr/bin/python3
# Enter a sting in uppercase
message = str(input("Enter a string in uppercase please: "))
secret_message = ""
origin_message = ""
for i in message:
    #if (i == " "):


    secret_message += str(ord(i) - 23)
print("secret message:", secret_message)

for i in range(0, len(secret_message)-1, 2):
    char_code = secret_message[i] + secret_message[i + 1]
    origin_message += chr(int(char_code) + 23)

print("converted message: ", origin_message)

print("original message: ", message)

#secret message
#original message
