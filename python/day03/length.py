p = 'python'
d = 'dragon'

print(p, d)
print(p == d)

if 'on' in p and 'on' in d:
	print("found")
else:
	print("not found")

a = float(len(p))
print(a)
str = str(a)
print(str)

if type(int('9.8')) == type(10):
	print("9.8 is equal to 10")
else:
	print("9.8 is not equal to 10")