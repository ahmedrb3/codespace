
# r => only read
# w => only write "clear old data"
# a => append "save to old data"

#open file
file = open("test3/test.txt","r")

# do what you want
data = file.read()
print(data)
# close file

file.close()