l,r,k=[int(x) for x in input().split()]
fl=True
an=1
while an<=r:
	if an>=l:
		fl=False
		print(an,end=' ')
	an=an*k

if fl is True:
	print(-1)
