from array import *
a = [[0,0,0,0,0], [0,0,0,0,0], [0,0,0,0,0], [0,0,0,0,0],[0,0,0,0,0]]
for r in a:
    r[0]=1
for i in range(1,len(a)):
    for j in range(1,len(a)):
        if i>=j:
            if i==j:
                a[i][j]=a[i][j-1]
            else:
                a[i][j]=a[i][j-1]+a[i-1][j]
for i in range(0,len(a)):
    for j in range(1,len(a)):
        print(a[i][j],end=" ")
    print()
print("the number of ways would be",a[4][4])