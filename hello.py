def hello():
    print("hello world")

hello()

def name(name):
    print(f"hello, {name}")

answer = input("what is your name? ")
name(answer)

def sum(num1, num2):
    return num1 + num2

result = sum(5,7)
print(result + 2)