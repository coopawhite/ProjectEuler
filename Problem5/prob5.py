

def testNum(n):
    test_nums = [11, 12, 13, 14, 15, 16, 17, 18, 19, 20]
    for nums in test_nums:
        if n % nums == 0:
            continue
        else:
            return False
    return True


if __name__ == "__main__":

    n = 2520

    while(True):
        if testNum(n):
            print(n)
            break
        n += 2520
