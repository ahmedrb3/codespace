from cs50 import get_int
scores = []

score = get_int("score: ")
scores.append(score)

print(f"Average {sum(scores) /len(scores)}")