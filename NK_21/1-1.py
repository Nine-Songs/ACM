import math
T = int(input())
for _ in range(T):
    a, b, c = map(int, input().split())
    g = math.gcd(math.gcd(a, b), c)
    print(max(a, b, c) // g - 3)
