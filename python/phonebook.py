from cs50 import get_string
people = {
    "david":"03243",
    "abdelrahman":"01654"
}
name = get_string("name: ")
if name in people:
    print(f"Number: {    people[name]   }")