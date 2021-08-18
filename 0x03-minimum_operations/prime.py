#!/usr/bin/python3
""" Module for storing the minOperations and prime methods. """

def minOperations(n):
    """
    Returns the minimun number of Copy All and Paste operations needed
    to take one character 'H' to length n.
    """
    if n <= 1:
        return 0
    if prime(n):
        return n
    else:
        i = n
        opeartions = 0
        while prime(i) is False:
            if (i % 2) == 0:
                i = i // 2

def prime(num):
    """ Returns True if the given number is prime, false if not. """
    if num in [1 ,2, 3, 5, 7, 11]:
        return True
    elif (n % 2 == 0 or n % 3 == 0):
        return False
    else:
        for i in range(2, num // 2):
            print(num)
            if (num % i) == 0:
                return False
            else:
                return True

def isPrime(n) :
    if (n <= 1) :
        return False
    if (n <= 3) :
        return True
    if (n % 2 == 0 or n % 3 == 0) :
        return False
    i = 5
    while(i * i <= n) :
        if (n % i == 0 or n % (i + 2) == 0) :
            return False
        i = i + 6
    return True


if (isPrime(11)) :
    print(" true")
else :
    print(" false")
if(isPrime(15)) :
    print(" true")
else :
    print(" false")








if __name__ == "__main__":
    # n = 1
    # n = 2
    # n = 3
    n = 4
    # n = 5
    # n = 6
    print(minOperations(n))
