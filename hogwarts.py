import csv

houses = {
    "Gryffindor":0,
    "Ravenclaw":0,
    "Hufflepuff":0,
    "Slytherin":0,
}

with open("houses.csv","r") as file:
    reader = csv.DictReader(file)
    for row in reader:
        house = row["House"]
        houses[house] += 1

for house in houses:
    print(f"{house}: {houses[house]}")