# r+ => read & write
# w+ => read & write "clear old data","create file"
# a+ => read & write "save old data","create file"
with open("test3/test.txt","r+") as file:
    file.read()