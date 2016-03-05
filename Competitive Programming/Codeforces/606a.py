a,b,c=[int(x) for x in input().split()]
x,y,z=[int(x) for x in input().split()]
r1=a-x
r2=b-y
r3=c-z
s=0
s+=max(0,r1)//2
s+=max(0,r2)//2
s+=max(0,r3)//2
t1=min(0,r1)
t2=min(0,r2)
t3=min(0,r3)
ans=s+t1+t2+t3
#print(ans)
if ans>=0:
	print("Yes")
else:
	print("No")
