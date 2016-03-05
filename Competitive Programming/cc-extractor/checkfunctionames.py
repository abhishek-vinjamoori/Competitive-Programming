import sys
if len(sys.argv) < 1:
	print("Give a valid C file as an argument")
	sys.exit(0)

file = open(sys.argv[1],"r") #Open the file for reading
bufferead = file.read()


Debug = False

functionsList = {} #This list contains all the function names in that "C" file
standardKeywords = ["void","int","long long int","float","double","struct","long int","static"]

bracesState = 0
blockCommentState = 0
lineCommentState = 0
HeaderState = 0
tempString = ""

for counter in range(0,len(bufferead)):
	
	if bufferead[counter] == "{":
		bracesState += 1
	
	elif bufferead[counter] == "}":
		bracesState -= 1
	
	elif counter < len(bufferead)-1 and bufferead[counter] == "/" and bufferead[counter+1] == "*": #Ensuring there is no Index Error
		blockCommentState += 1
	
	elif counter < len(bufferead)-1 and bufferead[counter] == "*" and bufferead[counter+1] == "/": #Closing Block Comments
		blockCommentState -= 1
	
	elif counter < len(bufferead)-1 and bufferead[counter] == "/" and bufferead[counter+1] == "/":
		lineCommentState += 1

	elif bufferead[counter] == "#":
		HeaderState += 1

	elif bufferead[counter] == "\n" and (HeaderState > 0 or lineCommentState > 0):
		if HeaderState:
			HeaderState -= 1
		else:
			lineCommentState -=1

	if Debug is True:
		print(bracesState,"Braces",blockCommentState,"blockCommentState","HeaderState",HeaderState)

	if blockCommentState == 0 and HeaderState == 0 and bracesState == 0 and lineCommentState == 0 and bufferead[counter] != "}" and bufferead[counter] != "/" and bufferead[counter] != "*":
		tempString += bufferead[counter]

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
	#i.strip('')
	for k in i:
		if k == "(":
			break
		finalString += k
	
	if finalString not in functionsList and finalString != "":  #Checking if that function already exists
		functionsList.append(finalString)

if Debug is True:
	print(functionsList) #Prints as 'list' of functions in that 'C' file

for functionName in functionsList:
	print(functionName)