import csv

houses = {
    "Gryffindor":0,
    "Ravenclaw":0,
    "Hufflepuff":0,
    "Slytherin":0,
}

with open("houses.csv","r") as file:
    reader = csv.reader(file)
    for i in reader:
        print(i)