x=int(input())
l=[1,2,3,4,5]
i=4
c=0
while x>0 and i>=0:
	if x-l[i]>=0:
		x-=l[i]
		c+=1
	else:
		i-=1

print(c)
