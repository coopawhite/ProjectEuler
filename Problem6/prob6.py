if __name__ == "__main__":
    #print(sumOfSquares(100))
    x = y = 0
    for i in range(101):
        x += i
        y += i**2
    x = x**2
    sos = x - y
    print(sos)    

