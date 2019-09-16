def go(n):
    if n==0 or n==1: 
        return 1
    return n*go(n-1)
t=int(input())
while t:
    t=t-1
    n = int(input())
    print(go(n))
