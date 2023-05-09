try:
    num1 = int(input("num1: "))
    num2 = int(input("num2: "))
    print(num1 + num2)
except ValueError:
    print("the value is not an int")
    exit()