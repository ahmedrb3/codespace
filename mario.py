from cs50 import get_int

def main():
    height = get_positive("height: ")
    for i in range(height):
        print("#")

def get_positive():
    while true:
        n = get_int("n: ")
main()