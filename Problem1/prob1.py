
#number = 1000
#numArray = []
#answer = 0

#for i in range(number):
#    if i % 3 == 0:
#        numArray.append(i)

#    elif i % 5 == 0:
#        numArray.append(i)


#print(numArray)
#for num in numArray:
#    answer += num

answer = sum(i for i in range(1000) if i%3 == 0 or i % 5 == 0)

print(answer)