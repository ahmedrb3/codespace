

def main():
    height = get_positive()
    for i in range(height):
        print("#")

def get_positive():
    while True:
        n = int(input("n: "))
        if n > 0:
            break
    return n
main()