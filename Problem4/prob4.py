
def isPalindrome(n):
    n = str(n)
    n_rev = n[::-1]

    if n == n_rev:
        return True
    else:
        return False




palindromes = []

for i in range(100,999):
    for j in range(100,999):
        if isPalindrome(i*j):
            palindromes.append(i*j)
        
print("Max pallindrome is ", max(palindromes))