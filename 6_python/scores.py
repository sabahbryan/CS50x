from cs50 import get_int

scores = []
for i in range(3):
    score = get_int("score: ")
    scores.append(score)
    #scores = scores + [score]
# appends to the end of the scores list

average = sum(scores) / len(scores)
print(f"Average: {average}")

"""
# list
scores = [72, 73, 33]

# sum of scores divided by number(len) of scores
average = sum(scores) / len(scores)
print(f"Average: {average}")
"""
