from cs50 import get_string

s = get_string("Do You Agree? ")
if s.lower() in ['y','yes']:
    print("Agreed")
elif s.upper() in ["N", "NO"] :
    print("Not Agreed")