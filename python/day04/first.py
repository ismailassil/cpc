t = 'Thirsty'
d = 'Days'
o = 'Of'
p = 'Python'
s = ' '

ans = t + s + d + s + o + s + p
print(ans)

l = ['Coding', 'For', 'All']
ans = ' '.join(l)

print(ans)

company = ans
print(company)

print(len(company))

print(company.upper())
print(company.lower())

print(company.capitalize())
print(company.title())
print(company.swapcase())

ans = company[7:]
print(ans)

tobefound = "Coding"

if ans.find(tobefound) != -1:
	print("Found")
else:
	print("Not Found")

ans = "Coding for all"
ans = ans.replace('Coding', "Python")

print(ans)

a = ans.split(' ')
print(a)

s = "Facebook, Google, Microsoft, Apple, IBM, Oracle, Amazon"
s = s.split(", ")
print(s)

st = "You cannot end a sentence with because because because is a conjunction"

sss = st.slice("because")

print(sss)