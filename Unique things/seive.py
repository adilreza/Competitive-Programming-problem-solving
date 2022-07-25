def making_seive(n):
    prime = [True for i in range(n+1)]
    p = 2
    while p*p <= n:
        if prime[p]:
            for i in range(p*p, n+1, p):
                prime[i] = False
        p = p + 1

    for p in range(2, n+1):
        if prime[p]:
            print(p, end=", ")


making_seive(5000)

