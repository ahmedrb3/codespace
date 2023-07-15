from cs50 import get_string

s = get_string("Do You Agree? ")
if s in ['y', 'Y', 'yes', 'YES']:
    print("Agreed")
elif s in ["n", "N", "no", "NO"] :
    print("Not Agreed")