def gcd(a,b):
    c = a % b
    while c:
        a = b
        b = c
        c = a % b
    return b   
t = int(input())
for i in range(t):
    a = list(map(int,input().split()))
    a.sort()
    d = gcd(a[0],a[1])
    d = gcd(d,a[2])
    print(a[2]//d - 3)
