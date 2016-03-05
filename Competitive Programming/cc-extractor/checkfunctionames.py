import sys
if len(sys.argv) < 1:
	print "Give a valid C file as an argument"
	sys.exit(0)

file = open(sys.argv[1],"r") #Open the file for reading
bufferead = file.read()

functionsDict = {} #This dictionary contains all the function names in that "C" file

bracesState = False
CommentState = False
HeaderState = False
tempString = ""

for counter in range(0,len(bufferead)):
	
	if bufferead[counter] == "{":
		bracesState = True
	
	elif bufferead[counter] == "}":
		bracesState = False
	
	elif counter < len(bufferead)-1 and bufferead[counter] == "/" and bufferead[counter+1] == "*": #Ensuring there is no Index Error
		CommentState = True
	
	elif counter < len(bufferead)-1 and bufferead[counter] == "*" and bufferead[counter+1] == "/":
		CommentState = False
	
	elif bufferead[counter] == "#":
		HeaderState = True

	elif bufferead[counter] == "\n" and HeaderState is True:
		HeaderState = False

	if not CommentState and not HeaderState and not bracesState and bufferead[counter] != "{" or bufferead[counter] != "/" or bufferead[counter] != "{":
		tempString += bufferead[counter]