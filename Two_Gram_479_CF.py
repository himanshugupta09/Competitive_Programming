n = int(input())
s = input()
l = [(s[i]+s[i+1]) for i in range(len(s)-1)]
has = {}
for i in l:
    if i not in has:
        has[i]=1
    else:
        has[i]+=1
key = list(has.keys())
val = list(has.values())
print(key[val.index(max(val))])            
# This is the Python solution to the Problem
# In which i had taken input and based on input string created a list of strings having comibnation two contiguous Letters from string 
# After then using hashmap i printed the string which as Maximum Occurance.
