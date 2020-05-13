a=[2,5,6,8,9]
m=max(a)
a.sort()
for i in range(1,len(a)):
    p=a[i]^a[i-1]
    if(m>p):
        m=p
print("minimum xor value is:",m)