sieve=[]
sieve=[0]*1000010
sieve[0]=1
sieve[1]=1
for i in range(2,1000000):
	if sieve[i] == 0:
		for j in range(2,1000000):
			if i*j>1000000:
				break
			sieve[i*j]=1

primel=[]
for k in range(0,len(sieve)):
	if sieve[k]==0 and k<=1000000:
		primel.append(k)

maincnt=0
#primel=[2,3,5,7,11,13,17,19,197,971,719]
for i in range(0,len(primel)):
	strin = list(str(primel[i]))
	cnt = len(strin)
	if '2' in strin or '4' in strin or '6' in strin or '8' in strin or '5' in strin:
		continue
	#print(strin)
	for start in range(0,len(strin)):
		count=0
		tmp=[]
		while count < len(strin):
			tmp += strin[start]
			start=(start+1)%len(strin)
			count+=1
		tstr = "".join(tmp)
		num = int(tstr)
		#print(tstr)
		#print(num)
		if num in primel:
			cnt-=1
	if cnt == 0:
		maincnt+=1

print(maincnt)




