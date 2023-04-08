#!/usr/bin/python3
def encryptfn(my_string, key):
    my_string = str(input("Please enter your string: "))
    key = int(input("How many charachters to shift: "))
    secret_string = str(secret_string)
    for i in my_string:
        if i.isalpha():
            char_code = ord(i)
            char_code += key
            if i.isupper():
                if char_code > ord("Z"):
                    char_code -= 26
                elif char_code < ord("A"):
                    char_code += 26
                else:
                    if char_code > ord("z"):
                        char_code -= 26
                        secret_string += chr(char_code)
                    else:
                        secret_string += i
                        return (secret_string)

    print("Encrypted: ", secret_string)

#decrypt = encryptfn(secret_string, -key)
#print("Decrypted: ", decrypt)

