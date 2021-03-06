#Python3 file


import sys
if len(sys.argv) < 1:
	print("Give a valid C file as an argument")
	sys.exit(0)

file = open(sys.argv[1],"r") #Open the file for reading
data = file.read() #Contains the whole C file input.

Debug = False

functionsList = {} #This list contains all the function names in that "C" file

bracesState = 0            #Removes everything inside a given function
blockCommentState = 0      #Removes everything inside block comments(Multi line comments)
lineCommentState = 0       #Removes everything inside single comments
HeaderState = 0            #Removes all the header lines

tempString = "" #This is the string which has to be further processed

for ind in range(0,len(data)):
	
	if data[ind] == "{":
		bracesState += 1
	
	elif data[ind] == "}":
		bracesState -= 1
	
	elif ind < len(data)-1 and data[ind] == "/" and data[ind+1] == "*": #Ensuring there is no Index Error
		blockCommentState += 1
	
	elif ind < len(data)-1 and data[ind] == "*" and data[ind+1] == "/": #Closing Block Comments
		blockCommentState -= 1
	
	elif ind < len(data)-1 and data[ind] == "/" and data[ind+1] == "/":
		lineCommentState += 1

	elif data[ind] == "#":
		HeaderState += 1

	elif data[ind] == "\n" and (HeaderState > 0 or lineCommentState > 0):
		if HeaderState:
			HeaderState -= 1
		else:
			lineCommentState -=1

	if Debug is True:
		print(bracesState,"Braces",blockCommentState,"blockCommentState","HeaderState",HeaderState)

	if blockCommentState == 0 and HeaderState == 0 and bracesState == 0 and lineCommentState == 0 and data[ind] != "}" and data[ind] != "/" and data[ind] != "*":
		tempString += data[ind]

tempString = tempString.split()
tempFunctionslist = []

if Debug is True:
	print(tempString)

for i in tempString:
	if ('(' in i) and (')' not in i):
		tempFunctionslist.append(i)

if Debug is True:
	print(tempFunctionslist)

functionsList = []
for i in tempFunctionslist:
	finalString=""
	for k in i: #Processing each string
		if k == "(":
			break
		finalString += k

	#Checking if that function already exists(Important for function definitions which can cause reptitions)
	if finalString not in functionsList and finalString != "":  
		functionsList.append(finalString)

if Debug is True:
	print(functionsList) #Prints as 'list' of functions in that 'C' file

for functionName in functionsList:
	print(functionName)
