
def isPalindrome(n):

    print("Checking ", n)
    n = str(n)
    n_rev = n[::-1]

    if n == n_rev:
        return True
    else:
        return False




palindromes = []

for i in range(1,999):
    for j in range(1,999):
        print(i, j)
        if isPalindrome(i*j):
            palindromes.append(i*j)
        
print(palindromes)
print(max(palindromes))