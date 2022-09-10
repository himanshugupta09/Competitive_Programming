a = input()
b = input()

n = len(a)
if a[0:n] == b[0:n]:
	print("Yes")
elif len(a)>len(b):
	print("No")
else:
	print("No")	
		
