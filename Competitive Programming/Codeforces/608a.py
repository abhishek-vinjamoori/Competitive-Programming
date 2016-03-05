n,s=[int(x) for x in input().split()]
a=[]
for i in range(n):
	floor,time=[int(x) for x in input().split()]
	a+=[[floor,time]]
a.sort(reverse=True)
currfloor = s
time=0
for i in a:
	time += currfloor - int(i[0])
	if time<i[1]:
		time+=(i[1]-time)
	currfloor = i[0]
time += currfloor
print(time)
