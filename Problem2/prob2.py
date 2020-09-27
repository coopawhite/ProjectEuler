
fibbarr = [1, 1]

while True:
    newval = fibbarr[-1] + fibbarr[-2]
    print(newval)
    if newval < 4000000:
        fibbarr.append(newval)
    else:
        break

answer = sum(val for val in fibbarr if val % 2 == 0)

print(answer)