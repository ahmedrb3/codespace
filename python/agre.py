from cs50 import get_string

s = get_string("Do You Agree? ")
if s == 'y' or s == 'Y' or s == 'yes' or s == 'YES':
    print("Agreed")
elif s == "n" or s == "N" or s == "no" or s == "NO" :
    print("Not Agreed")