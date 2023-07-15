import sys
numbers = [4,6,2,8,1,0]
if 0 in numbers:
    print("found")
    sys.exit(0)
print("not found")
sys.exit(1)